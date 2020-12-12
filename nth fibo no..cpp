#include<stdio.h>
#include<math.h>
int main(void)
{
	double res,PHI=1.6180339;
	int n,r;
	scanf("%d",&n);
	res=round((pow(PHI,n-1)-pow(1-PHI,n-1))/2.236067977);
	r=( long long int)res;
	printf("\n%d",r);
	return 0;
}
