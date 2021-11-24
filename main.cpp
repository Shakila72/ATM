#include <iostream>
#include<dos.h>
#include<windows.h>
#include<mmsystem.h>

int main()
 {
 	
 	PlaySound(TEXT("Alarm01.wAV"),NULL,SND_SYNC);
 	PlaySound(TEXT("tada.wAV"),NULL,SND_SYNC);
	return 0;
}
