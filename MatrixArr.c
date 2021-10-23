/* Find Multiplication of two matrices */

#include<stdio.h>

void accept(int arr[10][10],int r,int c) //Function for accept values of matrix
{
	int i,j;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
}

void display(int a[10][10],int r,int c) //Function for display a matrix
{
	int i,j;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}

void multiply(int a[10][10],int b[10][10],int r1,int c1,int c2) //Function for multiplication of matrices
{
	int i,j,x[10][10],k;
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			x[i][j] = 0;
			
			for(k=0;k<c1;k++)
			{
				x[i][j] = x[i][j]+(a[i][k]*b[k][j]);
			}
		}
	}
	
	printf("\nMultiplication of Matrix:\n");
	display(x,r1,c2);
}



int main()
{
	int a[10][10],b[10][10];
	int r1,r2,c1,c2;
	
	printf("For 1st Matrix:\n");
	printf("Enter how many rows:");
	scanf("%d",&r1);
	printf("Enter how many columns:");
	scanf("%d",&c1);
	
	printf("\nFor 2nd Matrix:\n");
	printf("Enter how many rows:");
	scanf("%d",&r2);
	printf("Enter how many columns:");
	scanf("%d",&c2);
	
	printf("\nEnter Elements of 1st Matrix:");
	accept(a,r1,c1);
	printf("\nEnter Elements of 2nd Matrix:");
	accept(b,r2,c2);
	
	printf("\nMatrix A:\n");
	display(a,r1,c1);
	
	printf("\nMatrix B:\n");
	display(b,r2,c2);
	
	
	if(c1==c2)
		multiply(a,b,r1,c1,c2);
	else
		printf("Multiplication Not Possible");
	
}


/*
For 1st Matrix:
Enter how many rows:3
Enter how many columns:3

For 2nd Matrix:
Enter how many rows:3
Enter how many columns:3

Enter Elements of 1st Matrix:1
2
3
4
5
6
7
8
9

Enter Elements of 2nd Matrix:9
8
7
6
5
4
3
2
1

Matrix A:
1       2       3
4       5       6
7       8       9

Matrix B:
9       8       7
6       5       4
3       2       1

Multiplication of Matrix:
30      24      18
84      69      54
138     114     90
*/