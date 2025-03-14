#ifndef ERROR_H
#define ERROR_H
/*
 * Try Kernel
 *      エラーコード定義
 */

#define E_OK        (0)     // 正常終了

#define E_SYS       (-5)    // システムエラー
#define E_NOCOP     (-6)    // コプロセッサ使用不可
#define E_NOSPT     (-9)    // 未サポート機能
#define E_RSFN      (-10)   // 予約機能コード番号
#define E_RSATR     (-11)   // 不正属性
#define E_PAR       (-17)   // パラメータ不正
#define E_ID        (-18)   // ID不正
#define E_CTX       (-25)   // コンテキストエラー
#define E_MACV      (-26)   // メモリアクセス違反
#define E_OACV      (-27)   // オブジェクトアクセス違反
#define E_ILUSE     (-28)   // システムコール不正
#define E_NOMEM     (-33)   // メモリ不足
#define E_LIMIT     (-34)   // 上限値エラー
#define E_OBJ       (-41)   // オブジェクト状態エラー
#define E_NOEXS     (-42)   // オブジェクト不正エラー
#define E_QOVR      (-43)   // 上限エラー
#define E_RLWAI     (-49)   // 待ち状態強制解除
#define E_TMOUT     (-50)   // タイムアウトエラー
#define E_DLT       (-51)   // 待ちオブジェクト削除
#define E_DISWAI    (-52)   // 待ち禁止による待ち状態解除
#define E_IO        (-57)   // I/Oエラー

#endif  // ERROR_H