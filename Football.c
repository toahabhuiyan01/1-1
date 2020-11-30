#include<stdio.h>
int main()
{
    int bh,bw,rh,rw,bwin=0,rwin=0,a,b;
    {printf("Enter The goals of the match for Home ground for Barcelona:\n\n \t\tBAR:REA\n  ");
    scanf("%d %d",&bh,&rw);
    if (bh>rw){
        printf("\n\nBarcelona Win on their Home ground!!\n\n");
        bwin++;
    }
    else if(bh==rw){
        printf("\n\n\nMatch draw!!\n");

    }
    else { printf("\n\nReal Madrid Won on their Away ground!!\n\n");
    rwin++;
    }


    printf("\n\n\nEnter The goals of the match for Home ground for Barcelona:\n\n\n \t\tREA:BAR\n  ");
    scanf("%d %d",&rh,&bw);
    if (bh>rw){
        printf("\nReal Madrid Win on their Home ground\n");
        rwin++;
    }
    else if(bh==rw){
        printf("\n\nMatch draw!!\n\n");
    }
    else  {
            printf("\n\nBarcelona Won on their Away ground!!\n");
            bwin++;
    }
    printf("\n\n\n\nResult between two match=\n\n\n\t\tBAR:REA\n\t\t %d  :%d",bwin,rwin);
    if(bwin>rwin){
        printf("\n\n\n\nUltimate Winner is BARCELONA!!!\n\n\n");
    }
    else if(bwin==rwin){
       a=rh+rw;
       b=bh+bw;
       if (a>b){
            printf("\n\nUltimate Winner is REAL MADRID!!!\n\n\n");
       }
       else if(b>a){
         printf("\n\nUltimate Winner is BARCELONA!!!\n\n\n");
       }
       else {
        if(rw>bw){
          printf("\n\nUltimate Winner is REAL MADRID!!!\n\n\n");
        }
        else if(bw>rw){
           printf("\n\nUltimate Winner is BARCELONA!!!\n\n\n");
        }
        else printf("\n\nMatch draw!!\n\n\n");
       }
    }
    else printf("\n\nUltimate Winner is REAL MADRID!!!\n\n\n");
}
return 0;
}
