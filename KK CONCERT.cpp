#include<stdio.h>
int main(void)
{
	int C,N,m;
	float sum;
	float a;
	scanf("%d",&C);
	scanf("%d",&N);
	while(N>0)    
	{    
		m=N%10;    
		sum=sum+m;    
		N=N/10;    
	} 
	a=(C*(100-sum))/100;
	printf("%.1f",a); 
	return 0;
}
