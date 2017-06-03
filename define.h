/* Variable type definition */
#define UINT8   unsigned char
#define INT8    signed char
#define UCHAR   unsigned char
#define CHAR    char
#define UINT16  unsigned short int
#define INT16   short int
#define UINT32  unsigned int
#define INT32   int
#define UINT64  unsigned long long
#define INT64   long long
#define FLOAT   float
#define DOUBLE  double
#define BOOLEAN int

#define DATA_PATH "./raw/20170603.csv"

typedef struct _STOCK_DATA {
	CHAR     cStockName[40];
	FLOAT    fStockIdx;
	BOOLEAN  fgStockUpTrend;
	FLOAT    fStockIdxUp;
} STOCK_DATA, *P_STOCK_DATA;
