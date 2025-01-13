/*----------------------------------------------*/
/* TJpgDec System Configurations R0.03          */
/*----------------------------------------------*/

#define	JD_SZBUF		1024
/* Specifies size of stream input buffer */

#define JD_FORMAT		1
/* Specifies output pixel format.
/  0: RGB888 (3-byte/pix)
/  1: RGB565 (2-byte/pix)
/  2: Grayscale (1-byte/pix)
*/

#define	JD_USE_SCALE	1
/* Switches output descaling feature.
/  0: Disable
/  1: Enable
*/

#define JD_TBLCLIP		1
/* Use table conversion for saturation arithmetic. A bit faster, but increases 1 KB of code size.
/  0: Disable
/  1: Enable
*/

#define JD_FASTDECODE	2
/* Optimization level
/  0: Suitable for 8/16-bit MCUs.
/  1: Suitable for 32-bit MCUs with barrel shifter.
/  2: Use table conversion for huffman decoding (It wants additional 6 << HUFF_BIT bytes of RAM)
*/

