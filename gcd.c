#include<stdio.h>
int main()
{
    int a,b,c,d,gcd;
    printf("Enter the two integers:\n");
    scanf("%d%d",&a,&b);
    if(b<a){
        c=b;
        X:
        if(a%c==0 && b%c==0)
        gcd=c;
    else{
        c--;
        goto X;
    }
    }
    else {
        d=b;
        Y:
            if(a%d==0 && b%d==0)
                gcd=d;
            else{
                d--;
                goto Y;
            }
    }
    printf("\nGCD of %d and %d is: %d",a,b,gcd);

}
