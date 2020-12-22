//with argument no return type CALCULATE PERMUTATION(call by ref)
#include<stdio.h>
int permutation(int *a ,int *b)
{
	int i,fact1=1,fact2=1,j;
	for(i=*a;i>1;i--)
	{
		fact1=fact1*i;
	}
	for(j=*a-*b;j>1;j--)
	{
		fact2=fact2*j;
	}
	printf("The value after permutation is--->%d",fact1/fact2);
}
int main(void)
{
	int n,r;
	scanf("%d%d",&n,&r);
	permutation(&n,&r);
	return 0;
}
