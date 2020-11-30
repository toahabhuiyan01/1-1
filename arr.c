#include<stdio.h>
#include<string.h>
int main()
{
    char a,b[100],c,d;
    int e=0;
    printf("Enter the name:");
    gets(b);
    c=strlen(b);
    for(a=97;a<=122;a++){
        for(d=0;d<c;d++){

                if(b[d]==a)
                    {
                e++;
                    }
                        }
    if(e>1){
        printf(" %c is in the string for %d times\n",a,e);
            }
             e=0;
                        }
                        return 0;
}
