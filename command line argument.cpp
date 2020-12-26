#include<stdio.h>
int main(int argc,char *argv[]) // argc helps to count the parameters and argv holds that value
{
	int i;
	if(argc >=2)
	{
		printf("\nTotal Arguments = %d\n",argc);
		printf("The passing arguments are: \n");
		for(i=1;i<argc;i++)
		{
			printf("%s\t",argv[i]);
		}
	}
	else
	{
		printf("\nWrong Input");
	}
}
