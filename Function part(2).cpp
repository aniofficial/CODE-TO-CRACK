//no argument with return type
#include<stdio.h>
int add()
{
	int x,y,z;
	scanf("%d%d",&x,&y);
	z=x+y;
	return z;
}
int main(void)
{
	int res;
	res=add();
	printf("%d",res);
	return 0;
}
