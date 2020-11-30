#include<stdio.h>
int main( )
{
	int b, a=50;
	{
	   int a=60;
	    {
	       int a=90;
	        printf("%X\n",&a);
	    }
	    printf("%X\n",&a);
	}
	printf("%X\n",&a);
	return 0;
}
