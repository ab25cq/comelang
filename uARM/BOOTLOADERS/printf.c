#include "printf.h"

typedef struct {

	void* dest;
	UInt32 maxChars;

	void* furtherCallback;
	void* furtherUserData;

} PrintData;


wchar_t nlsCharToWChar(char c){
	return (unsigned char)c;
}

char nlsWCharToChar(wchar_t c){
	return c > 256 ? '?' : c;
}

UInt32 strlen(const char* c){

	UInt32 L = 0;

	while(*c++) L++;

	return L;
}

UInt32 wstrlen(const wchar_t* c){

	UInt32 L = 0;

	while(*c++) L++;

	return L;
}


typedef Boolean (*StrPrintfExCbk)(void* userData, wchar_t chr);	//return false to stop printing

static UInt32 StrPrvPrintfEx_number(StrPrintfExCbk putc_,void* userData,UInt64 number,UInt32 base,Boolean zeroExtend,
													Boolean isSigned,UInt32 padToLength, Boolean* bail){

	char buf[64];
	UInt32 idx = sizeof(buf) - 1;
	UInt32 chr, i;
	Boolean neg = false;
	UInt32 numPrinted = 0;

	*bail = false;

	if(padToLength > 63) padToLength = 63;

	buf[idx--] = 0;	//terminate

	if(isSigned){

		if(number & 0x8000000000000000ULL){

			neg = true;
			number = -number;
		}
	}

	do{
		chr = number % base;
		number = number / base;

		buf[idx--] = (chr >= 10)?(chr + 'A' - 10):(chr + '0');
		numPrinted++;

	}while(number);

	if(neg){

		buf[idx--] = '-';
		numPrinted++;
	}

	if(padToLength > numPrinted){

		padToLength -= numPrinted;
	}
	else{

		padToLength = 0;
	}

	while(padToLength--){

		buf[idx--] = zeroExtend?'0':' ';
		numPrinted++;
	}

	idx++;


	for(i = 0; i < numPrinted; i++){

		if(!putc_(userData,nlsCharToWChar((buf + idx)[i]))){

			*bail = true;
			break;
		}
	}

	return numPrinted;
}

static UInt32 StrVPrintf_StrLen_withMax(const char* s,UInt32 max){

	UInt32 len = 0;

	while((*s++) && (len < max)) len++;

	return len;
}

static UInt32 StrVPrintf_StrWLen_withMax(const wchar_t* s,UInt32 max){

	UInt32 len = 0;

	while((*s++) && (len < max)) len++;

	return len;
}

static inline wchar_t prvGetChar(const void** fmtP, Boolean wideChars){

	wchar_t ret;

	if(wideChars){

		const wchar_t* fmt;

		fmt = *fmtP;
		ret = *fmt++;
		*fmtP = fmt;
	} else {

		const char* fmt;

		fmt = *fmtP;
		ret = nlsCharToWChar(*fmt++);
		*fmtP = fmt;
	}

	return ret;
}

static UInt64 SignExt32to64(UInt32 v_){

	UInt64 v = v_;

	if(v & 0x80000000) v |= 0xFFFFFFFF00000000ULL;

	return v;
}

static UInt32 StrVPrintfEx(StrPrintfExCbk putc_f,void* userData,Boolean wideChars, const void* fmtStr,va_list vl){

	wchar_t c, t;
	UInt32 i, numPrinted = 0,cc;
	UInt64 val64;


#define putc_(_ud,_c)	if(!putc_f(_ud,_c)) goto out;

	while((c = prvGetChar(&fmtStr, wideChars)) != 0){

		if(c == L'\n'){

			putc_(userData,c);
			numPrinted++;
		}
		else if(c == L'%'){

			Boolean zeroExtend = false, useLong = false, bail = false, useVeryLong = false;
			UInt32 padToLength = 0,len,i;
			const char* str;
			const wchar_t* strW;

more_fmt:
			c = prvGetChar(&fmtStr, wideChars);

			switch(c){

				case L'%':

					putc_(userData,c);
					numPrinted++;
					break;

				case L'C':

					cc = va_arg(vl,UInt32);

					t = nlsCharToWChar(cc >> 24);
					putc_(userData,t);

					t = nlsCharToWChar(cc >> 16);
					putc_(userData,t);

					t = nlsCharToWChar(cc >> 8);
					putc_(userData,t);

					t = nlsCharToWChar(cc >> 0);
					putc_(userData,t);

					numPrinted += 4;
					break;

				case L'c':

					if(useLong){
						char tc = va_arg(vl,unsigned int);
						putc_(userData,nlsCharToWChar(tc));
					} else {
						t = va_arg(vl,unsigned int);
						putc_(userData,t);
					}
					numPrinted++;
					break;

				case L's':

					if(!useLong){
						str = va_arg(vl,char*);
						if(!str) str = "(null)";
						if(padToLength){

							len = StrVPrintf_StrLen_withMax(str,padToLength);
						}
						else{

							padToLength = len = strlen(str);
						}
						if(len > padToLength) len = padToLength;
						else{

							for(i=len;i<padToLength;i++) putc_(userData,L' ');
						}
						numPrinted += padToLength;
						for(i = 0; i < len; i++){

							putc_(userData,nlsCharToWChar(*str++));
						}
					}
					else {

						strW = va_arg(vl,wchar_t*);
						if(!strW) strW = L"(null)";
						if(padToLength){

							len = StrVPrintf_StrWLen_withMax(strW,padToLength);
						}
						else{

							padToLength = len = wstrlen(strW);
						}
						if(len > padToLength) len = padToLength;
						else{

							for(i=len;i<padToLength;i++) putc_(userData,L' ');
						}
						numPrinted += padToLength;
						for(i = 0; i < len; i++){

							putc_(userData, *strW++);
						}
					}
					numPrinted += len;
					break;

				case L'0':

					if(!zeroExtend && !padToLength){

						zeroExtend = true;
						goto more_fmt;
					}

				case L'1':
				case L'2':
				case L'3':
				case L'4':
				case L'5':
				case L'6':
				case L'7':
				case L'8':
				case L'9':

					padToLength = (padToLength * 10) + c - L'0';
					goto more_fmt;

				case L'u':

					val64 = useVeryLong ? va_arg(vl,UInt64) : va_arg(vl,UInt32);
					numPrinted += StrPrvPrintfEx_number(putc_f, userData,val64,10,zeroExtend,false,padToLength, &bail);
					if(bail) goto out;
					break;

				case L'd':

					val64 = useVeryLong ? va_arg(vl,UInt64) : SignExt32to64(va_arg(vl,UInt32));
					numPrinted += StrPrvPrintfEx_number(putc_f, userData,val64,10,zeroExtend,true,padToLength, &bail);
					if(bail) goto out;
					break;

				case L'x':

					val64 = useVeryLong ? va_arg(vl,UInt64) : va_arg(vl,UInt32);
					numPrinted += StrPrvPrintfEx_number(putc_f, userData,val64,16,zeroExtend,false,padToLength, &bail);
					if(bail) goto out;
					break;

				case L'b':

					val64 = useVeryLong ? va_arg(vl,UInt64) : va_arg(vl,UInt32);
					numPrinted += StrPrvPrintfEx_number(putc_f, userData,val64,2,zeroExtend,false,padToLength, &bail);
					if(bail) goto out;
					break;

				case L'l':
					if(useLong) useVeryLong = true;
					useLong = true;
					goto more_fmt;

				default:

					putc_(userData,c);
					numPrinted++;
					break;

			}
		}
		else{

			putc_(userData,c);
			numPrinted++;
		}
	}

	putc_(userData,0);	//terminate it
	numPrinted++;

out:

	return numPrinted;
}


static Boolean StrPrintF_putc(void* ud, wchar_t w){

	PrintData* pd = ud;
	char** dst = pd->dest;
	char c = nlsWCharToChar(w);

	if(pd->maxChars-- == 1){

		if(pd->furtherCallback){

			((printf_write_c)pd->furtherCallback)(pd->furtherUserData, c);
		}
		else{
			*(*dst)++ = 0;
		}
		return false;
	}

	if(pd->furtherCallback){

		((printf_write_c)pd->furtherCallback)(pd->furtherUserData, c);
	}
	else{
		*(*dst)++ = c;
	}


	return true;
}

static Boolean StrWPrintF_putc(void* ud, wchar_t c){

	PrintData* pd = ud;
	wchar_t** dst = pd->dest;

	if(pd->maxChars-- == 1){

		if(pd->furtherCallback){

			((printf_write_w)pd->furtherCallback)(pd->furtherUserData, c);
		}
		else{
			*(*dst)++ = 0;
		}
		return false;
	}

	if(pd->furtherCallback){

		return ((printf_write_w)pd->furtherCallback)(pd->furtherUserData, c);
	}
	else{
		*(*dst)++ = c;
		return true;
	}
}

UInt32 sprintf(char* dst, const char* fmtStr, ...){

	UInt32 ret;
	va_list vl;
	PrintData pd;

	pd.dest = &dst;
	pd.maxChars = 0xFFFFFFFF;
	pd.furtherCallback = NULL;

	va_start(vl,fmtStr);

	ret = StrVPrintfEx(&StrPrintF_putc, &pd, false, fmtStr,vl);

	va_end(vl);

	return ret;
}

UInt32 wsprintf(wchar_t* dst, const wchar_t* fmtStr, ...){

	UInt32 ret;
	va_list vl;
	PrintData pd;

	pd.dest = &dst;
	pd.maxChars = 0xFFFFFFFF;
	pd.furtherCallback = NULL;

	va_start(vl,fmtStr);

	ret = StrVPrintfEx(&StrWPrintF_putc, &pd, true, fmtStr, vl);

	va_end(vl);

	return ret;
}

UInt32 snprintf(char* dst, UInt32 maxChars, const char* fmtStr, ...){

	UInt32 ret;
	va_list vl;
	PrintData pd;

	pd.dest = &dst;
	pd.maxChars = maxChars;
	pd.furtherCallback = NULL;

	va_start(vl,fmtStr);

	ret = StrVPrintfEx(&StrPrintF_putc, &pd, false, fmtStr,vl);

	va_end(vl);

	return ret;
}

UInt32 wsnprintf(wchar_t* dst, UInt32 maxChars, const wchar_t* fmtStr, ...){

	UInt32 ret;
	va_list vl;
	PrintData pd;

	pd.dest = &dst;
	pd.maxChars = maxChars;
	pd.furtherCallback = NULL;

	va_start(vl,fmtStr);

	ret = StrVPrintfEx(&StrWPrintF_putc, &pd, true, fmtStr, vl);

	va_end(vl);

	return ret;
}

UInt32 csprintf(printf_write_c writeF, void* writeD, const char* fmtStr, ...){

	UInt32 ret;
	va_list vl;
	PrintData pd;

	pd.dest = NULL;
	pd.maxChars = 0xFFFFFFFF;
	pd.furtherCallback = writeF;
	pd.furtherUserData = writeD;

	va_start(vl,fmtStr);

	ret = StrVPrintfEx(&StrPrintF_putc, &pd, false, fmtStr,vl);

	va_end(vl);

	return ret;
}

UInt32 cwsprintf(printf_write_w writeF, void* writeD, const wchar_t* fmtStr, ...){

	UInt32 ret;
	va_list vl;
	PrintData pd;

	pd.dest = NULL;
	pd.maxChars = 0xFFFFFFFF;
	pd.furtherCallback = writeF;
	pd.furtherUserData = writeD;

	va_start(vl,fmtStr);

	ret = StrVPrintfEx(&StrWPrintF_putc, &pd, true, fmtStr, vl);

	va_end(vl);

	return ret;
}

UInt32 csnprintf(printf_write_c writeF, void* writeD, UInt32 maxChars, const char* fmtStr, ...){

	UInt32 ret;
	va_list vl;
	PrintData pd;

	pd.dest = NULL;
	pd.maxChars = maxChars;
	pd.furtherCallback = writeF;
	pd.furtherUserData = writeD;

	va_start(vl,fmtStr);

	ret = StrVPrintfEx(&StrPrintF_putc, &pd, false, fmtStr,vl);

	va_end(vl);

	return ret;
}

UInt32 cwsnprintf(printf_write_w writeF, void* writeD, UInt32 maxChars, const wchar_t* fmtStr, ...){

	UInt32 ret;
	va_list vl;
	PrintData pd;

	pd.dest = NULL;
	pd.maxChars = maxChars;
	pd.furtherCallback = writeF;
	pd.furtherUserData = writeD;

	va_start(vl,fmtStr);

	ret = StrVPrintfEx(&StrWPrintF_putc, &pd, true, fmtStr, vl);

	va_end(vl);

	return ret;
}

UInt32 vsprintf(char* dst, const char* fmtStr, va_list vl){

	UInt32 ret;
	PrintData pd;

	pd.dest = &dst;
	pd.maxChars = 0xFFFFFFFF;
	pd.furtherCallback = NULL;

	ret = StrVPrintfEx(&StrPrintF_putc, &pd, false, fmtStr,vl);

	return ret;
}

UInt32 vwsprintf(wchar_t* dst, const wchar_t* fmtStr, va_list vl){

	UInt32 ret;
	PrintData pd;

	pd.dest = &dst;
	pd.maxChars = 0xFFFFFFFF;
	pd.furtherCallback = NULL;

	ret = StrVPrintfEx(&StrWPrintF_putc, &pd, true, fmtStr, vl);

	return ret;
}

UInt32 vsnprintf(char* dst, UInt32 maxChars, const char* fmtStr, va_list vl){

	UInt32 ret;
	PrintData pd;

	pd.dest = &dst;
	pd.maxChars = maxChars;
	pd.furtherCallback = NULL;

	ret = StrVPrintfEx(&StrPrintF_putc, &pd, false, fmtStr,vl);

	return ret;
}

UInt32 vwsnprintf(wchar_t* dst, UInt32 maxChars, const wchar_t* fmtStr, va_list vl){

	UInt32 ret;
	PrintData pd;

	pd.dest = &dst;
	pd.maxChars = maxChars;
	pd.furtherCallback = NULL;

	ret = StrVPrintfEx(&StrWPrintF_putc, &pd, true, fmtStr, vl);

	return ret;
}

UInt32 cvsprintf(printf_write_c writeF, void* writeD, const char* fmtStr, va_list vl){

	UInt32 ret;
	PrintData pd;

	pd.dest = NULL;
	pd.maxChars = 0xFFFFFFFF;
	pd.furtherCallback = writeF;
	pd.furtherUserData = writeD;

	ret = StrVPrintfEx(&StrPrintF_putc, &pd, false, fmtStr,vl);

	return ret;
}

UInt32 cvwsprintf(printf_write_w writeF, void* writeD, const wchar_t* fmtStr, va_list vl){

	UInt32 ret;
	PrintData pd;

	pd.dest = NULL;
	pd.maxChars = 0xFFFFFFFF;
	pd.furtherCallback = writeF;
	pd.furtherUserData = writeD;

	ret = StrVPrintfEx(&StrWPrintF_putc, &pd, true, fmtStr, vl);

	return ret;
}

UInt32 cvsnprintf(printf_write_c writeF, void* writeD, UInt32 maxChars, const char* fmtStr, va_list vl){

	UInt32 ret;
	PrintData pd;

	pd.dest = NULL;
	pd.maxChars = maxChars;
	pd.furtherCallback = writeF;
	pd.furtherUserData = writeD;

	ret = StrVPrintfEx(&StrPrintF_putc, &pd, false, fmtStr,vl);

	return ret;
}

UInt32 cvwsnprintf(printf_write_w writeF, void* writeD, UInt32 maxChars, const wchar_t* fmtStr, va_list vl){

	UInt32 ret;
	PrintData pd;

	pd.dest = NULL;
	pd.maxChars = maxChars;
	pd.furtherCallback = writeF;
	pd.furtherUserData = writeD;

	ret = StrVPrintfEx(&StrWPrintF_putc, &pd, true, fmtStr, vl);

	return ret;
}


asm void __call_via_r2(){

	BX R2
}
asm void __call_via_r5(){

	BX R5
}
asm void __call_via_r7(){

	BX R7
}
