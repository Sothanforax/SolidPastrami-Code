#pragma systemFile
#pragma DebuggerWindows("VexLcd")
#include "BNSlib.h"
typedef enum lcdbuttons
{
	lml =1,
	lmr =4,
	lmc =2,
}lcdbuttons;
bool lcswi;
/*HAM FUNCTIONS CONTAINED BELOW, BE CAREFUL WITH MODIFICATIONS*/
#ifndef _HAMINIT_H_GUARD
#define _HAMINIT_H_GUARD
void haminit()
{
	lcswi=true;
	bLCDBacklight=true;
	displayLCDString(0,0,"Ham Init v0.0.2");
	displayLCDString(1,0,"BNSLib by JMarple");
	wait1Msec(900);
	clearLCDLine(0);
	clearLCDLine(1);
	clearDebugStream();
	writeDebugStream("HAM Debug Output Started");
	writeDebugStreamLine("\n[Add actually useful data output here]");
	writeDebugStream("\nWait... crunching numbers");
}
#endif
#ifndef _BATLEV_H_GUARD
#define _BATLEV_H_GUARD
void batlev(bool imdt)
{
	if(imdt==false)
	{
		displayLCDNumber(1,1,nAvgBatteryLevel);
		displayLCDString(1,6,"[AVG]");
	}
	else
	{
		displayLCDNumber(1,1,nImmediateBatteryLevel);
		displayLCDString(1,6,"[IMDT]");
	}
}
#endif
#ifndef _CLRLCD_H_GUARD
#define _CLRLCD_H_GUARD
void clrlcd()
{
	clearLCDLine(0);
	clearLCDLine(1);
}
#endif
#ifndef _RSTATE_H_GUARD
#define _RSTATE_H_GUARD
void rstate()
{
	wait1Msec(900);
	writeDebugStream("\nMain battery voltage:%d",nAvgBatteryLevel);
	writeDebugStream("\nBackup battery voltage:%d",BackupBatteryLevel);
	if (lcswi == false)
	{
 displayLCDString(0,1,"Woo placeholders!");
}
else
{
		if (bVEXNETActive == true)
	{
		displayLCDCenteredString(0,"vexnet:active");
	}
	else
	{
		displayLCDCenteredString(0,"vexnet:inactive");
	}
}
}
#endif
#ifndef _INITUART_H_GUARD
#define _INITUART_H_GUARD
void inituart()
{
setBaudRate(UART0,9600);
sendChar(UART0,"T");
}
#endif
