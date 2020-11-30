#include<stdio.h>
int main()
{
float a1,a2,a3,a4,a5,b1,b2,b3,b4,b5,c1,c2,c3,c4,c5,d1,d2,d3,d4,d5,e1,e2,e3,e4,e5,p1,p2,p3;
printf("enter the result for the first race:\n");
scanf("%f %f %f %f %f",&a1,&a2,&a3,&a4,&a5);
printf("enter the result for the 2nd race:\n");
scanf("%f %f %f %f %f",&b1,&b2,&b3,&b4,&b5);
printf("enter the result for the 3rd race:\n");
scanf("%f %f %f %f %f",&c1,&c2,&c3,&c4,&c5);
printf("enter the result for the 4th race:\n");
scanf("%f %f %f %f %f",&d1,&d2,&d3,&d4,&d5);
printf("enter the result for the 5th race:\n");
scanf("%f %f %f %f %f",&e1,&e2,&e3,&e4,&e5);
if(a1<a2&& a1<a3&&a1<a4&&a1<a5&&a1<b1&&a1<b2&&a1<b3&&a1<b4&&a1<b5&&a1<c1&&a1<c2&&a1<c3&&a1<c4&&a1<c5&&a1<d1&&a1<d2&&a1<d3&&a1<d4&&a1<d5&&a1<e1&&a1<e2&&a1<e3&&a1<e4&&a1<e5);
p1=a1;
else if(a2<a1&& a2<a3&&a2<a4&&a2<a5&&a2<b1&&a2<b2&&a2<b3&&a2<b4&&a2<b5&&a2<c1&&a2<c2&&a2<c3&&a2<c4&&a2<c5&&a2<d1&&a2<d2&&a2<d3&&a2<d4&&a2<d5&&a2<e1&&a2<e2&&a2<e3&&a2<e4&&a2<e5);
p1=a2;
else if(a3<a1&& a3<a2&&a3<a4&&a3<a5&&a3<b1&&a3<b2&&a3<b3&&a3<b4&&a3<b5&&a3<c1&&a3<c2&&a3<c3&&a3<c4&&a3<c5&&a3<d1&&a3<d2&&a3<d3&&a3<d4&&a3<d5&&a3<e1&&a3<e2&&a3<e3&&a3<e4&&a3<e5);
p1=a3;
else if(a4<a1&& a4<a2&&a4<a3&&a4<a5&&a4<b1&&a4<b2&&a4<b3&&a4<b4&&a4<b5&&a4<c1&&a4<c2&&a4<c3&&a4<c4&&a4<c5&&a4<d1&&a4<d2&&a4<d3&&a4<d4&&a4<d5&&a4<e1&&a4<e2&&a4<e3&&a4<e4&&a4<e5);
p1=a4;
else if(a5<a1&& a5<a2&&a5<a4&&a5<a3&&a5<b1&&a5<b2&&a5<b3&&a5<b4&&a5<b5&&a5<c1&&a5<c2&&a5<c3&&a5<c4&&a5<c5&&a5<d1&&a5<d2&&a5<d3&&a5<d4&&a5<d5&&a5<e1&&a5<e2&&a5<e3&&a5<e4&&a5<e5);
p1=a5;
else if(b1<a1&& b1<a2&&b1<a4&&b1<a5&&b1<b1&&b1<b2&&b1<b3&&b1<b4&&b1<b5&&b1<c1&&b1<c2&&b1<c3&&b1<c4&&b1<c5&&b1<d1&&b1<d2&&b1<d3&&b1<d4&&b1<d5&&b1<e1&&b1<e2&&b1<e3&&b1<e4&&b1<e5);
p1=b1;
printf("1st position is %f ",p1);
}
