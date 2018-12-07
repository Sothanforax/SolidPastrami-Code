#pragma config(Motor,  port2,           FL,            tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           BL,            tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           FR,            tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           BR,            tmotorVex393_MC29, openLoop)
#pragma platform(VEX2)

#pragma competitionControl(Competition)

#include "Vex_Competition_Includes.c"

void pre_auton()
{
  bStopTasksBetweenModes = true;
}
task autonomous()
{
  AutonomousCodePlaceholderForTesting();
}

task usercontrol()
{
  while (true)
  {
  	motor[FL]=vexRT[Ch2]+vexRT[Ch1];
  	motor[BL]=vexRT[Ch2]+vexRT[Ch1];
  	motor[FR]=vexRT[Ch2]-vexRT[Ch1];
  	motor[BR]=vexRT[Ch2]-vexRT[Ch1];
  }
}
