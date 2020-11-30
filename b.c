#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter the price :\n");
    scanf("%f",&a);
    b=((a*20)/100)+a;
    printf("1st person sold it @: %0.3f tk.\n",b);
    c=((b*20)/100)+b;
    printf("2nd person sold it @: %0.3f tk.\n",c);
    return 0;
}
