//How take input and print 2D array//
#include<stdio.h>
int main()
{
	int a[10][10],row,col,size;
	scanf("%d",&size);
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			scanf("%d",&a[row][col]);
		}
	}
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			printf("%d",a[row][col]);
		}
		printf("\n");
	}
	return 0;
}

Question----1

#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],row,col,size;
	scanf("%d",&size);
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			scanf("%d",&a[row][col]);
		}
	}
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			b[row][col]=a[row][col];
		}
		printf("\n");
	}
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			printf("%d",b[row][col]);
		}
		printf("\n");
	}
	return 0;
}

Question----2

#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],row,col,Rsize,Csize;
	scanf("%d",&Rsize);
	scanf("%d",&Csize);
	for(row=0;row<Rsize;row++)
	{
		for(col=0;col<Csize;col++)
		{
			printf("enter the 1st array:----");
			scanf("%d",&a[row][col]);
		}
	}
	for(row=0;row<Rsize;row++)
	{
		for(col=0;col<Csize;col++)
		{
			printf("enter the 2nd array:---");
			scanf("%d",&b[row][col]);
		}
	}
	for(row=0;row<Rsize;row++)
	{
		for(col=0;col<Csize;col++)
		{
			c[row][col]=a[row][col]+b[row][col];
			printf("%d",c[row][col]);
		}
	}
	return 0;
} 

Question---4

#include<stdio.h>
int main()
{
	int a[10][10],row,col,Rsize,Csize,sum=0;
	scanf("%d",&Rsize);
	scanf("%d",&Csize);
	for(row=0;row<Rsize;row++)
	{
		for(col=0;col<Csize;col++)
		{
			scanf("%d",&a[row][col]);
		}
	}
	for(row=0;row<Rsize;row++)
	{
		sum=0;
		for(col=0;col<Csize;col++)
		{
			sum=sum+a[row][col];
		}
		printf("\n");
		printf("The Sum of Elements of a Rows in a Matrix =  %d \n", sum );
	}
	
	return 0;
}

Question---5

#include<stdio.h>
int main()
{
	int a[10][10],row,col,Rsize,Csize,sum=0;
	scanf("%d",&Rsize);
	scanf("%d",&Csize);
	for(row=0;row<Rsize;row++)
	{
		for(col=0;col<Csize;col++)
		{
			scanf("%d",&a[row][col]);
		}
	}
	for(row=0;row<Csize;row++)
	{
		sum=0;
		for(col=0;col<Rsize;col++)
		{
			sum=sum+a[col][row];
		}
		printf("\n");
		printf("The Sum of Elements of a Columns in a Matrix =  %d \n", sum );
	}
	
	return 0;
}

Question---6

#include<stdio.h>
int main()
{
	int a[10][10],row,col,Rsize,Csize,sum=0,c=0;
	scanf("%d",&Rsize);
	scanf("%d",&Csize);
	for(row=0;row<Rsize;row++)
	{
		for(col=0;col<Csize;col++)
		{
			scanf("%d",&a[row][col]);
		}
	}
	for(row=0;row<Rsize;row++)
	{
			sum=sum+a[row][row];
			c = c + a[row][Rsize - row - 1];
	}
	printf("\n");
	printf("The Sum of Elements of a 1st matrix in a Matrix =  %d \n", sum );
	printf("The Sum of Elements of a 2nd matrix in a Matrix =  %d \n", c );
	return 0;
}

Question---7

#include<stdio.h>
int main()
{
	int r, c, sum = 0,i,j,arr[100][100];
	printf("Enter the order of the matrix : ");
	scanf("%d %d",&r,&c);
	printf("Input the matrix elements:---");
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
			scanf("%d",&arr[i][j]);
	}
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
			{
				if((i==0) || (j==0) || (i==r-1) || (j==c-1))
					{
						sum = sum + arr[i][j];
					}
				else
					printf(" ");
			}
		printf("\n");
	}
	printf("Sum of boundary is %d", sum);
}

//Question---8

#include<stdio.h>
int main()
{
	int r, c, sum = 0,i,j,arr[100][100];
	printf("Enter the order of the matrix : ");
	scanf("%d %d",&r,&c);
	printf("Input the matrix elements:---");
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
			scanf("%d",&arr[i][j]);
	}
	printf("After taking values:---");
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
			printf("%d ",arr[i][j]);
	}
	printf(",, After making spiral way print:----");
	for(i = 0; i < r; i++)
	{
		
			if(i%2==0)    
			{
				for (j = 0; j <c; j++)
					printf("%d ",arr[i][j]);	
			}
			else
			{
				for(j=c-1;j>=0;j--)
				{
					printf("%d ",arr[i][j]);	
				}
			}
	}
} 

//Question---9

#include<stdio.h>
int main(){
	int a[10][10],row,col,i,j;
	scanf("%d %d",&i,&j);
	for(row=0;row<i;row++){
		for(col=0;col<j;col++){
			scanf("%d",&a[row][col]);
		}
	}
	for(row=0;row<i;row++){
		for(col=0;col<j;col++){
			if(col%2==0){
				printf("%d ",a[row][col]);
			}
			else{
				printf("%d ",a[i-1-row][col]);
			}
		}
		printf("\n");
		}
	
return 0;
}

//Question---2

#include <stdio.h>
 
int main()
{
  int m, n, p, q, c, d, k, sum = 0;
  int first[10][10], second[10][10], arr[10][10];
 
  printf("Enter number of rows and columns of first matrix\n");
  scanf("%d%d", &m, &n);
  printf("Enter elements of first matrix\n");
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &first[c][d]);
 
  printf("Enter number of rows and columns of second matrix\n");
  scanf("%d%d", &p, &q);
 
  if (n != p)
    printf("The multiplication isn't possible.\n");
  else
  {
    printf("Enter elements of second matrix\n");
 
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &second[c][d]);
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          sum = sum + first[c][k]*second[k][d];
        }
 
        arr[c][d] = sum;
        sum = 0;
      }
    }
    printf("Product of the matrices:\n");
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d\t", arr[c][d]);
 
      printf("\n");
    }
  }
  return 0;
}
