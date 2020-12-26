#include<stdio.h>
#include<math.h>
int main(){
	int n1,N,flag=0,result;
	scanf("%d",&N);
	N=N+2;
	for(n1=1;n1<=N;n1++){
		result=pow((pow(2,n1)-1),2);
		if(result<=N)
		{
			if(result==N)
			{
				flag=1;
				break;
			}
		}
		else
		{
			printf("Go back You Idiot");
		}
	}
	if(flag==1)
	{
		printf("The number is  CAROL primes");
	}
	else
	{
		printf("The number is not CAROL primes");
	}
}
