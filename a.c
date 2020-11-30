#include<stdio.h>
int main()
{
float a,b,c;
printf("Enter the price last one sold:\n");
scanf("%f",&a);
b=((a*100)/120);
printf("The 2nd person bought it @:%0.3f tk\n",b);
c=((b*100)/120);
printf("The 1st person bought it @:%0.3f tk\n",c);
return 0;


}
