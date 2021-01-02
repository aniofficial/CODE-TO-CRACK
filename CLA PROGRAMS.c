LEAP YEAR USING CLA
#include<stdio.h>
int main(int argc , char *argv[])
{
	int i;
	if(argc==2)
	{
		i=atoi(argv[1]);
		if(i%4==0 && i%100==0 || i%400==0)
		{
			printf("This is a leap year");
		}
		else 
		{
			printf("This is not a leap year");
		}	
	}
	else
	{
		printf("Wrong Input Format");
	}
	return 0;
}

GCD USING CLA
#include<stdio.h>
int gcd(int a, int b);
int main(int argc , char *argv[])
{
	int a,b;
	if(argc==3)
	{
		a=atoi(argv[1]);
		b=atoi(argv[2]);
		printf("The GCD of two numbers is %d",gcd(a,b));
	}
	else
	{
		printf("wrong input");
	}
	return 0;
}
int gcd(int a,int b)
{
	if(b!=0)
		return gcd(b,a%b);
	else
		return a;
}

PRIME NUMBER USING CLA
#include<stdio.h>
#include<math.h>
int prime(int a);
int main(int argc, char *argv[])
{
	int a;
	float b;
	if(argc==2)
	{
		a=atoi(argv[1]);
		if(prime(a)==1)
		{
			b=sqrt(a);
			printf("The output will be :--> %.2f",b);
		}
		else
		{
			printf("Not prime");
		}
	}
	else
	{
		printf("Wrong Input");
	}
	return 0;
}
int prime(int a)
{
	int i,flag=0;
	for(i=2;i<=a/2;i++)
	{
		if(a%i==0)
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

STRONG NUMBER USING CLA
#include<stdio.h>
int strong(int n);
int main(int argc , char *argv[])
{
	int n;
	if( argc ==2)
	{
		n=atoi(argv[1]);
		if(strong(n)==1)
		{
			printf("Yes");
		}
		else
		{
			printf("No");
		}
	}
	else
	{
		printf("Wrong Input");
	}
}
int strong(int a)
{
	int temp,c,r,fact=1,s=0,flag=1;
	temp=a;
	while(a!=0)
	{
		r=a%10;
		c=1;
		fact=1;
		while(c<=r)
		{
			fact=fact*c;
			c++;
		}
		s=s+fact;
		a/=10;
	}
	if(temp==s)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

DECIMAL TO BINARY USING CLA
#include<stdio.h>
long convert(int n);
int main(int argc , char *argv[])
{
	int N;
	long binary;
	if(argc==2)
	{
		N=atoi(argv[1]);
		binary=convert(N);
		printf("After convertion :---> %ld" ,binary);
	}
	else
	{
		printf("Wrong Input");
	}
}
long convert(int n)
{
    long b=0,r,f=1;
    while(n != 0)
    {
         r = n % 2;
         b = b + r * f;
         f = f * 10;
         n = n / 2;
    }
    return b;
}

PERFECT SQUARE USING CLA
#include<stdio.h>
int perfectsquare(int n);
int main( int argc , char *argv[])
{
	int n;
	if(argc==2)
	{
		n=atoi(argv[1]);
		if(perfectsquare(n)==1)
		{
			printf("Perfect Square");
		}
		else
		{
			printf("Not Perfect Square");
		}
	}
	else
	{
		printf("Wrong Input");
	}
	return 0;
}
int perfectsquare(int n)
{
	int i;
	for(i=0;i<=n;i++)
	{
		if(n==i*i)
		{
			return 1;
		}
	}
	return 0;
}

HYPOTENUSE CALCULATION USING CLA
#include<stdio.h>
#include<math.h>
int main(int argc , char *argv[])
{
	int a,b;
	float c;
	if(argc==3)
	{
		a=atoi(argv[1]);
		b=atoi(argv[2]);
		if(a==0 && b==0)
		{
			printf("please check the value");
		}
		else
		{
			c=sqrt((a*a)+(b*b));
			printf("The value of Hypotunes is:---> %.1f",c);
		}
	}
	else
	{
		printf("Wrong Input");
	}
	return 0;
}

SUM OD PRIME WITHIN RANGE USING CLA
#include<stdio.h>
int main(int argc, char *argv[]){

    int i,j,flag,N1,N2,sum=0;
    if(argc==3)
	{
    	N1=atoi(argv[1]);
   		N2=atoi(argv[2]);
    	for(i= N1; i>N2; i--)
    	{
    		flag=0;
    		for(j=2; j<=i/2; j++)
  			{
        		if((i% j) == 0)
				{
       			 flag++;	
        		  break;
        		}	
    		}
  			if(flag==0)
   				sum +=i;
   		}
   		printf("\nSum of prime numbers is:  %d ",sum);
   }
  	else
  	{
  		printf("Wrong Input");
	}
	return 0;
} 

SERIES PROBLEM--1 USING CLA
#include<stdio.h>
#include<math.h>

int even(int n)
{
    int x;
    x = pow(3,n-1);
    printf("%d",x);
}
int odd(int n)
{
    int x;
    x = pow(2,n-1);
    printf("%d",x);
}
int main(int argc , char *argv[])
{
    int n;
    if(argc ==2)
    {
    	n=atoi(argv[1]);
    	if(n%2==0)
    	{
        	even(n/2);
    	}
    	else
    	{
        	odd(n/2  + 1);
    	}
	}
	else
	{
		printf("Wrong Input");
	}
}

SERIES--2 USING CLA
#include<stdio.h>
int main(int argc , char *argv[])
{
    int i, n, x=0, b=0;
    if(argc==2)
    {
    	n=atoi(argv[1]);
    	for(i=1;i<=n;i++)
    	{
        	if(i%2!=0)
        	{
            	if(i>1)
                	x = x + 2;
        	}
        	else
        	{
            	b = x/2;
        	}
    	}
    	if(n%2!=0)
    	{
        	printf("%d",x);
    	}
    	else
    	{ 
        	printf("%d",b);
    	}
	}
	else
	{
		printf("Wrong Input");
	}
}


