#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int main()
{
    int a,b,c,d;

    a=b=c=0;
    while(1){
//    delay(1000);
    system("cls");
    printf("HH:MM:SS\n%d :%d :%d\n",c,b,a);
//    fflush(stdout);
     a+=1;
     if(a==60){
        b+=1;
        a=0;
     }
     if(b==60){
        c+=1;
        b=0;
     }

     if(c==24){
        c=0;
        b=0;
        a=0;
     }
usleep(930000);
    }

return 0;
}
