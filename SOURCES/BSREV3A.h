#pragma systemFile
typedef enum lcdbuttons
{
	lml =1,
	lmr =4,
	lmc =2,
}
/*HAM FUNCTIONS CONTAINED BELOW, BE CAREFUL WITH MODIFICATIONS*/
#ifndef _HAMINIT_H_GUARD
#define _HAMINIT_H_GUARD
void haminit()
{
	bLCDBacklight=true;
	displayLCDString(0,0,"Ham Init v0.0.2");
	displayLCDString(1,0,"BNSLib by JMarple v0.15.0");
	wait1Msec(900);
	clearLCDLine(0);
	clearLCDLine(1);
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
	if (bVEXNETActive == true)
	{
		displayLCDCenteredString(0,"vexnet:active");
	}
	else
	{
		displayLCDCenteredString(0,"vexnet:inactive");
	}
	if (bIfiRobotDisabled == true)
	{
		displayLCDCenteredString(1,"robot disabled");
	}
}
#endif
