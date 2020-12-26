#include<stdio.h>
int main(int argc,char *argv[]) // argc helps to count the parameters and argv holds that value
{
	int i;
	if(argc == 2)
	{
		i=atoi(argv[1]); //"atoi" helps to convert string into integer  "sscanf(argv[1],"%f",&i)"---converts string to float
		if(i%2==0)
		{
			printf("Even");
		}
		else
		{
			printf("Odd");
		}	
	}
	else
	{
		printf("Wrong Input Format");
	}
	return 0;
}
