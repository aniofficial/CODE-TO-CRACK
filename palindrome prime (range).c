#include<stdio.h>
int prime(int n);
int main(){
   int num, r, s, temp, start, end;
   printf("Enter the lower limit: ");
   scanf("%d",&start);
   printf("Enter the upper limit: ");
   scanf("%d",&end);
   if(start>1){
   	for(num=start;num<=end;num++){
      temp=num;
      s=0;
      while(temp){
         r=temp%10;
         temp=temp/10;
         s=s*10+r;
      }
      if(num==s && prime(s)==1)
	  {
	  	 printf("%d ", num);
	  }
   }}
   else{
   	printf("0 and 1 are not prime");}
   return 0;}
int prime(int n)
{
	int i,flag=0;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
