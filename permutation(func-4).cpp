//with argument with return type CALCULATE PERMUTATION
#include<stdio.h>
int permutation(int a ,int b)
{
	int i,fact1=1,fact2=1,j;
	for(i=a;i>1;i--)
	{
		fact1=fact1*i;
	}
	for(j=a-b;j>1;j--)
	{
		fact2=fact2*j;
	}
	return (fact1/fact2);
}
int main(void)
{
	int n,r,x;
	scanf("%d%d",&n,&r);
	x=permutation(n,r);
	printf("The value after permutation is--->%d",x);
	return 0;
}
