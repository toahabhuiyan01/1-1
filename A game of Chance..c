#include<stdio.h>
#include<stdlib.h>
#include<time.h>
enum Status{ CONTINUE, WON, LOST};
int rollDice(void );
int main(void)
{
    int sum,myPoint;
    enum Status gameStatus;
    srand(time(NULL));
    sum=rollDice();
    switch(sum){
    case 7:
    case 11:
        printf("\n\n\t");
        gameStatus=WON;
        break;
    case 2:
    case 3:
    case 12:
        printf("\n\n\t");
        gameStatus=LOST;
        break;
    default:
        printf("\n\n\t");
        gameStatus=CONTINUE;
        myPoint=sum;
        printf("point is %d\n\n\n",myPoint);
    }
    while(CONTINUE==gameStatus){
        sum=rollDice();
        if(sum==myPoint){
            gameStatus=WON;
        }
        else {
            if(7==sum){
                gameStatus=LOST;
            }
        }
    }
    if(WON ==gameStatus){
        puts("\n\tPlayer wins");
    }
    else {
       puts(" \n\tPlayer loses");
    }
}
int rollDice(void)
{
    int die1,die2,workSum;
    die1=1+(rand()%6);
    die2=1+(rand()%6);
    workSum=die1+die2;
    printf("\tPlayer rolled:\n\t%d + %d=%d\n",die1,die2,workSum);
    return workSum;
}
