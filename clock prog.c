#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<windows.h>
#include<winuser.h>
#include<windowsx.h>
//#include<iostream>
#include<conio.h>
#include<string.h>
void main()
{

    int hour,min,sec;
    hour=min;
    min=sec;
    hour=0;

    while(1)
        {
        system("cls");
        printf("\tHH:\tMM:\tSS\n");
        printf("\t%02d:\t%02d:\t%02d\n",hour,min,sec);
        fflush(stdout);
        sec++;
        if(sec==60){
            min+=1;
            sec=0;
        }
        if(min==60){
            hour+=1;
            min=0;
        }
        if(hour==24){
            hour=0;
            min=0;
            sec=0;

        }
      // sleep(1);
    }
    getchar();
    //return 0;
}
