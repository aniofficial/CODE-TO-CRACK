//how to take input in string:-

#include<stdio.h>
int main(void)
{
	char s[100];
	int i;
	//take a character array:
	for(i=0;i<5;i++)
	scanf("%c",&s[i]); //& is used to store the character at the address of s[i]
	
	for(i=0;i<5;i++)
	printf("%c",s[i]);
	
	char st[100];
	int i,c=0,k=0;
	//scanf("%s",st); // no need to use & while taking values using scanf
	scanf("%[^\n]",st); //**/
	//printf("%s",st);
	
	for(i=0;st[i]!='\0';i++)
	{
		//printf("%c\n",st[i]);
		if((st[i] >= 65 && st[i] <= 90)|| (st[i]>=97 && st[i]<=122))
		{
			if(st[i]== 'a' || st[i]=='e' || st[i]=='i' || st[i]=='o' || st[i]=='u' || st[i]=='A' ||st[i]=='E' || st[i]=='I' 
			|| st[i]=='O'|| st[i]=='U')
			{
				c++;
			}
			else
			{
				k++;
			}
		}
	}
	printf("vowel=%d",c);
	printf("cons=%d",k);
	return 0;
}*/

#include<stdio.h>
#include<string.h>
int main(void)
{
	char st[100];
	int i,c=0,start,end;
	scanf("%[^\n]",st);
	for(i=0;st[i]!='\0';i++)
	{
		if(st[i]!=' ')
		{
			start=i;
			break;
		}
	}
	for(i=strlen(st)-1;i>=0;i--)
	{
		if(st[i]!=' ')
		{
			end=i;
			break;
		}
	}
	for(i=start;i<end;i++)
	{
		if(st[i]==' '&& st[i+1]!=' ')
		c++;
	}
	printf("Total Word=%d",c+1);
	return 0;
}

#include <stdio.h>
int main()
{
    char s[1000];
    int c=0,i;
    int t;
    scanf("%d",&t);
    while(t>0)
    {
    	getchar();
    	scanf("%[^\n]",s);
    	c=0;
    	for(i=0;s[i]!='\0';i++)
    	{
    		if(s[i]>='0'&& s[i]<='9')
    		{
    			c++;
			}
		}
		printf("%d\n",c);
		t--;
	}
	return 0;
}

//string reversal---part-1
#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[1000];
	int i;
	scanf("%[^\n]",s);
	printf("%s\n",s);
	for(i=strlen(s)-1;i>=0;i--)
		printf("%c",s[i]);
		
	printf("\n%s\n",s);
	return 0;
}

//reversal part-2 updation
#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[1000];
	int i,j,t;
	scanf("%[^\n]",s);
	printf("%s\n",s);
	for(i=0,j=strlen(s)-1;i<strlen(s)/2;i++,j--)
	{
		t=s[i];
		s[i]=s[j];
		s[j]=t;
	}
	printf("\n%s\n",s);
	return 0;
}

//Toggle concept:- part 1
#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[1000];
	int i;
	scanf("%[^\n]",s);
	printf("%s\n",s);
	
	for(i=0;i<=strlen(s)-1;i++)
	{
		if(s[i]>='A'&& s[i]<='Z')
		{
			printf("%c",s[i]+32);
		}
		else if(s[i]>='a' && s[i]<='z')
		{
			printf("%c",s[i]-32);
		}
		else
		{
			printf("%c",s[i]);
		}
	}
	return 0;
}

//toggle part2 updation
#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[1000];
	int i;
	scanf("%[^\n]",s);
	printf("%s\n",s);
	
	for(i=0;i<=strlen(s)-1;i++)
	{
		if(s[i]>='A'&& s[i]<='Z')
		{
			s[i]+=32;
		}
		else if(s[i]>='a' && s[i]<='z')
		{
			s[i]-=32;
		}
	}
	printf("\n%s\n",s);
	return 0;
}

//password checking:---
#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000];
	int x,i,caps,small,digit,sp;
	scanf("%[^\n]",s);
	printf("%s\n",s);
	x=strlen(s);
	if(x>=8)
	{
		for(i=0;i<=strlen(s)-1;i++)
	{
		if(s[i]>='A'&& s[i]<='Z')
		{
			caps=1;
		}
		else if(s[i]>='a' && s[i]<='z')
		{
			small=1;
		}
		else if(s[i]>='0' && s[i]<='9')
		{
			digit=1;
		}
		else
			sp=1;
	}
	if(caps&&small&&digit&&sp)
	{
		printf("Valid");
	}
	else
	{
		printf("Not valid");
	}
	}
	else
	{
		printf("try again");
	}
	return 0;
}

//reverse prog.

#include<stdio.h>
#include<string.h>
int main(void)
{
	int n,i=0,j,x,z;
	char s[1000]="";
	char t[1000];
	scanf("%d",&n);
	for(x=0;x<n;x++)
	{
		scanf("\n%[^\n]",t);
		for(i=strlen(s),j=0;i<=strlen(t)+strlen(s);i++,j++)
		{
			s[i]=t[j];
		}
	}
	s[i]='\0';
	for(i=0,j=strlen(s)-1;i<strlen(s)/2;i++,j--)
	{
		z=s[i];
		s[i]=s[j];
		s[j]=z;
	}
	printf("\n%s\n",s);
	return 0;
}
