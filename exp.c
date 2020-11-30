#include<stdio.h>
#include<math.h>
int main()
{
    int a=123,b,c;
    printf("%d%c%o%c%0X",a,10,a,10,a);
    int die1,die2,workSum;
    die1=1+(rand()%6);
    die2=1+(rand()%6);
    workSum=die1+die2;
    printf("\tPlayer rolled:\n\t%d + %d=%d\n",die1,die2,workSum);
    return 0;
}

//{
//    int a[10],b[10],c[20],d;
//    for( d=0;d<=10;d++){
//        scanf(" %d %d",&a[d],&b[d]);
//    }
//    c=union(a,b);
//    for( d=0;d<=10;d++){
//            printf("%d",c[d]);
//
//}

