#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    float c=0;
    int d,e=1;
    for(d=0;d<=a;d++&&e=e+5){
        printf("%d + %d=?",d,e);
        scanf("%d",&f[a]);
        if(f[a]==(d+e)){
            c++;
            printf("ok");
        }
        else{
                printf("Wrong!!");
        c=c-0.25;
        }
    }
    if(c<0){
        c=0;
    }
    printf("your mark is %d",c);
    return 0;
}
