
#include<stdio.h>
#include<conio.h>

int main()
{
    float n;
    int m=0;

    for(n=0;n<=79;n=n+.01){
            system("cls");
    if(n>0){
        m=m+2;
        }
        printf("%0.2f \t %d\n",n,m);
        usleep(100000);
    }
}
