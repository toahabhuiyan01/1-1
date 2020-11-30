#include<stdio.h>
int main(){
int a,b,c[5][5][5],d;
for(a=0;a<2;a++){
    for(b=0;b<2;b++){
        for(d=0;d<2;d++){
        printf("c[%d][%d][%d]=",a,b,d);
        scanf("%d",&c[a][b][d]);
        }
    }
}
printf(" \n\n\n\n");
for(a=0;a<2;a++){
    for(b=0;b<2;b++){
            for(d=0;d<2;d++){
            printf("c[%d][%d][%d]=%d\n",a,b,d,c[a][b][d]);
}
    }

}
}
