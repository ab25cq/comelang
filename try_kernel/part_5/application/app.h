extern ID  dd_i2c0, dd_i2c1;   // I2Cデバイスディスクリプタ
extern ID  dd_adc;             // A/DCデバイスディスクリプタ
extern ID  flgid_1;            // イベントフラグID

/* センサーデータ */
extern UW  gsns_data;          // ジェスチャセンサーのデータ
extern UW  lsns_data;          // 光センサーのデータ

/* イベントフラグのフラグ定義 */
#define FLG_GSNS    (1<<0)      // ジェスチャセンサーのデータ更新
#define FLG_LSNS    (1<<1)      // 光センサーのデータ更新
#define FLG_ALL     (FLG_GSNS|FLG_LSNS)

/* ジェスチャーセンサーのデータ定義*/
#define GSNS_RIGHT      (1<<0)
#define GSNS_LEFT       (1<<1)
#define GSNS_UP	        (1<<2)
#define GSNS_DOWN       (1<<3)
#define GSNS_FORWARD    (1<<4)
#define GSNS_BACKWARD   (1<<5)

/* 光センサー 明暗の境界値 */
#define LSNS_THRESHOLD  1000

/* ジェスチャーセンサー制御タスクIDおよび生成情報 */
extern ID  tskid_gsns;
extern T_CTSK  ctsk_gsns;

/* 光センサー制御タスクIDおよび生成情報 */
extern ID  tskid_lsns;
extern T_CTSK  ctsk_lsns;

/* LCD制御タスクIDおよび生成情報 */
extern ID  tskid_lcd;
extern T_CTSK  ctsk_lcd;