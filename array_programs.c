/* You are given an array of n elements .You have to print the sum of the elements of all prime positions

#include<stdio.h>
int prime(int index)
{
	int i,flag=0;
	for(i=2;i<=index/2;i++)
	{
		if(index%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		return 0;
	else
		return 1;
}
int main()
{
	int a[100],n,i,sum=0;
	printf("enter the size:---");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=2;i<n;i++)
	{
		if(prime(i)==0)
		{
			sum=sum+a[i];
		}
	}
	printf("The sum of all prime positions:--- %d",sum);
}


//Take n elements in array and rotate the elements in a circular fashion t times:------

#include<stdio.h>
int main()
{
	int arr[100],i,n,t,temp,k;
	scanf("%d",&n);
	scanf("%d",&t);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(k=0;k<t;k++)
	{
		temp=arr[0];
		/*	arr[0]=arr[1];
			arr[1]=arr[2];
			arr[2]=arr[3];
			arr[3]=arr[4];
			arr[4]=temp;
		*/
/*		for(i=0;i<n-1;i++)
		{
			arr[i]=arr[i+1];	
		}
		arr[n-1]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}	
}

//you are given number t that represents the test case number and numbers for t test cases...find out shortest permutation

#include<stdio.h>
void sort(int a[],int n)
{
	int temp,i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
void permute(int num)
{
	int a[10],i=0,k,r,pos,temp;
	while(num!=0)
	{
		r=num%10;
		a[i]=r;
		i++;
		num=num/10;
	}
	sort(a,i);
	for(k=0;k<i;k++)
	{
		if(a[k]!=0)
		{
			pos=k;
			break;
		}
	}
	if(pos!=0)
	{
		temp=a[0];
		a[0]=a[pos];
		a[pos]=temp;
	}
		for(k=0;k<i;k++)
		{
			printf("%d ",a[k]);
		}	
}
int main()
{
	int t,i,num;
	scanf("%d",&t);
	{
		scanf("%d",&num);
		permute(num);
	}	
	return 0;
}

//you have to take n elements in array and no of occurence of each digit

#include<stdio.h>
void sort(int a[],int n)
{
	int temp,i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main()
{
	int n,a[100],i,x,c=0;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,n);
	x=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			c++;
		}
		else
		{
			printf("\n%d %d",x,c);
			c=1;
			x=a[i];
		}
	}
	printf("\n%d %d",x,c);
	return 0;
}
