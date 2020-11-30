#include <stdio.h>
int main()
{
    float x,y;
    char ch;
    printf("\n-----------------------------------------------------------------------------\n");
    printf("Basic calculator by TOAHA BHUIYAN");
    printf("\n-----------------------------------------------------------------------------\n");
    printf("For addition press a or A  \n For subtraction press s or S\n");
    printf("  For multiply press m or M  \n   For division press d or D\n");
    printf("-----------------------------------------------------------------------------");
    printf("\nNow enter the operation key :\n");
    scanf("%c",&ch);
    printf("\n-----------------------------------------------------------------------------\n");
    printf("Now enter the value of first integer::");
    scanf("%f",&x);
    printf("\n-----------------------------------------------------------------------------\n");
    printf("Now enter the value of second integer::");
    scanf("%f",&y);
    printf("\n-----------------------------------------------------------------------------\n");
    switch (ch)
    {
        case 'a':
        case 'A':
            printf("Addition of %f+%f=%f",x,y,x+y);
        break;

        case 's':
        case 'S':
            printf("Subtraction of %f-%f=%f",x,y,x-y);
        break;

        case 'm':
        case 'M':
            printf("Multiply of %f*%f=%f",x,y,x*y);
        break;

        /*case 'r':
        case 'R':
            printf("Reminder of %f % %f=%f",x,y,x%y);
        break;*/


        case 'd':
        case 'D':
        if(y==0)
            printf("Divided by 0 is ERROR");
        else
            printf("Division of %f/%f=%f",x,y,x/y);
    }
printf("\n-----------------------------------------------------------------------------\n\n\n");
    return 0;
}
