#include<stdio.h>
int main(void)
{
	long int a,b,c;
	scanf("%ld %ld",&a,&b);
	if(a>=1 && a<=100000000 && b>=1 && b <=100000000)
	{
		c=a;
		a=b;
		b=c;
    }
	printf("%d %d",a+1,b+2);
	return 0;
}
