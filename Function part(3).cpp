//with argument no return type(using call by value)
#include<stdio.h>
int add(int a ,int b)
{
	int z;
	z=a+b;
	printf("%d",z);
	return z;
}
int main(void)
{
	int x,y;
	scanf("%d%d",&x,&y);
	add(x,y);
	return 0;
}
