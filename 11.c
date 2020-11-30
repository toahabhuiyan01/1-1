#include<stdio.h>
int main()
{
    int a,b,a1,b1,gcd;
    printf("Enter the two numbers:\n");
    scanf("%d%d",&a,&b);

        if(a>b ){
            b1=b;
            a1=a;
                Z:

                if(a%b1==0 && b%b1==0){
            gcd=b1;
            }
            else {
            a1--;
           {goto Z;}
        }
        }


        if(b>a ){
                a1=a;

                X:

                if(b%a1==0 && a%a1==0){
            gcd=a1;
        }
            else {
                    b1--;
            {goto X;}
        }
        }

        printf("GCD is :%d",gcd);


        return 0;
       }
