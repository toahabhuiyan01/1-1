#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    float c;
    c=0;
    int d,e=1,f[a];
    for(d=0;d<a;d++){
        printf("%d + %d=?",d,e);
        scanf("%d",&f[a]);
        if(f[a]==(d+e)){

            printf("ok\n");
            c=c+1;
        }
        else{
                printf("Wrong!!\n");
        c=c-0.25;
        }
        e=e+5;
    }
    if(c<0){
        c=0;
    }
    printf("\nyour mark is %0.2f\n",c);
    return 0;
}
