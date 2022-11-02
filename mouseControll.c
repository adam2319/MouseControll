#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <unistd.h>


int main()
{
	
	POINT xypos;
	int lock_time;
	printf("Please enter the lock screen time what you have:\n(In minutes)\n");
	scanf("%d",&lock_time);
	
	while (1)
	{		
		int x, y;
		POINT xypos;
		sleep(lock_time*60-1);
		GetCursorPos(&xypos);
		SetCursorPos(xypos.x,xypos.y +1);		
	}
}
