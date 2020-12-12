//with argument with return type
#include<stdio.h>
int add(int a ,int b)
{
	int z;
	z=a+b;
	return z;
}
int main(void)
{
	int res;
	int x,y;
	scanf("%d%d",&x,&y);
	res   =	add(x,y);
	printf("%d",res);
	return 0;
}
