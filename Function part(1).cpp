//no argument with no return type
#include<stdio.h>
void add()
{
	int x,y,z;
	scanf("%d%d",&x,&y);
	z=x+y;
	printf("%d",z);
}
int main(void)
{
	add();
	return 0;
}
