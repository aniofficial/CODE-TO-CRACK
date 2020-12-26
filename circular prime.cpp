#include<stdio.h>
#include<math.h>
int circular(int n){
	int i,flag=0;
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			flag=1;break;}}
	if(flag==0){
		return 1;}
	else{
		return 0;}}
int main(){
	int x,c=0,temp,r,s;scanf("%d",&x);circular(x);temp=x;
	while(temp>0){
		temp/=10;
		c++;}
	while(c>=1){
		x=pow(10,c-1)*(x%10)+(x/10);
		printf("%d",x);
		if(circular(x)==1){
			printf("Circular prime");
			break;}
		else
		{
			printf("Not circular prime");
			break;
		}
		c--;
	}
}
