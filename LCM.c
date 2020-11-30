#include<stdio.h>
int main()
{
    int a,b,c,d,lcm;
    printf("Enter the two integers:\n");
    scanf("%d %d",&a,&b);
    if(a>b){
        c=a;
        X:
            if(c%a==0 && c%b==0)
            lcm=c;
            else{
                c++;
                goto X;
            }
    }
    else{
        d=b;
        Y:
            if(d%a==0 && d%b==0)
            lcm=d;
            else{
                d++;
                goto Y;
            }

    }
    printf("\nLCM of %d and %d is : %d",a,b,lcm);
}
