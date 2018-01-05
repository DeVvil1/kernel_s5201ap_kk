

#define AUXADC_LCM_VOLTAGE_CHANNEL     1

#define MIN_VOLTAGE_DJ (0)

#define MAX_VOLTAGE_DJ (100)

#define MIN_VOLTAGE_TXD (500)

#define MAX_VOLTAGE_TXD (800)

#define MIN_VOLTAGE_TXD_NEW_GLASS (1170)

#define MAX_VOLTAGE_TXD_NEW_GLASS (1370)

extern int IMM_GetOneChannelValue(int dwChannel, int data[4], int* rawdata); 
