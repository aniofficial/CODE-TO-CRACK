//String Comparison

//Try-1

/*#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[1000];
	char a[1000];
	scanf("\n%[^\n]",s);
	scanf("\n%[^\n]",a);
	if(stricmp(s,a))
	{
		printf("False");
	}
	else
	{
		printf("True");
	}
	
}*/


//Try--2

/*#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[1000];
	char a[1000];
	scanf("\n%[^\n]",s);
	getchar();
	scanf("\n%[^\n]",a);
	int x,y;
	x=strlen(s);
	y=strlen(a);
	int flag=1,k;
	if(x!=y)
	{
		printf("false");
	}
	else
	{
		for(k=0;k<x;k++)
		{
			if((s[k]!=a[k]) && (s[k]!=a[k]+32) && (s[k]+32!=a[k]))
			{
				flag=0;
				break;
			}
		}
		if(flag==0)
		{
			printf("false");
		}
		else
		{
			printf("True");
		}
	}
	return 0;
}*/

//count the repeated substring

/*#include<stdio.h>
#include<string.h>
int main(void)
{
	char m[1000];
	char s[1000];
	char t[1000];
	int i,count=0,k,j;
	scanf("\n%[^\n]",m);
	getchar();
	scanf("\n%[^\n]",s);
	
	for(i=0;i<=strlen(m)-strlen(s);i++)
	{
		for(k=0,j=i;k<strlen(s);k++,j++)
		{
			t[k]=m[j];
		}
		t[k]='\0';
		printf("%d %s\n",i,t);
		
		if(strcmp(s,t)==0)
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}*/

/*output:-classroom
7
9
4
classroooooooom*/



/*#include<stdio.h>
#include<string.h>
int main(void)
{
	char m[1000],mid[1000],last[1000];
	int start,end,c,i,p,k;
	scanf("\n%[^\n]",m);
	scanf("%d",&start);
	scanf("%d",&end);
	scanf("%d",&c);
	
	for(i=start-1,k=0;i<end-1;i++,k++)
	{
		mid[k]=m[i];
	}
	mid[k]='\0';
	
	for(i=end-1,k=0;i<strlen(m);i++,k++)
	{
		last[k]=m[i];
	}
	last[k]='\0';
	m[start-1]='\0';
	char cp[1000];
	strcpy(cp,mid);
	for(p=0;p<c-1;p++)
	{
		strcat(mid,cp);
	}
	strcat(strcat(m,mid),last);
	printf("%s\n",m);
	return 0;
}*/


