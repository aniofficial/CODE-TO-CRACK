#include<stdio.h>
int main(void)
{
	int HH1,MM1,SS1,HH2,MM2,SS2,a,b,c;
	scanf("%d %d %d",&HH1,&MM1,&SS1);
	scanf("%d %d %d",&HH2,&MM2,&SS2);
	if(HH1>=0 && HH2<=23 && MM1>=0 && MM2<=59 && SS1>=0 && SS2<=59)
	{
		if(HH1<=HH2)
		{
			a=(HH1*3600)+(MM1*60)+SS1;
			b=(HH2*3600)+(MM2*60)+SS2;
			c=b-a;
			printf("%dsec",c);
		}
		else if(HH1>=HH2)
		{
			HH2=HH2+24;
			a=(HH1*3600)+(MM1*60)+SS1;
			b=(HH2*3600)+(MM2*60)+SS2;
			c=b-a;
			printf("%dsec",c);
		}
	}
	return 0;
}
