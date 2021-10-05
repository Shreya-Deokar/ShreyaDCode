/* Write a program to print all perfect numbers between 1 to n */

#include <stdio.h>

int main()
{
	
    	int i,j,n,sum;
    
	printf("Enter a number upto which have perfect numbers: ");//Accpeting a Number
    	scanf("%d",&n);

    	printf("Perfect numbers between 1 to %d:\n",n);
    
	for(i=1;i<=n;i++)//Iteration for 1 to n
    	{
        	sum = 0;
        	
		for(j=1;j<i;j++)//Checking a number is perfect or not
        	{
            		if(i%j == 0)
            		{
                		sum= sum+j;
            		}
        	}
        
		if(sum==i)//If number is perfect then it is printed
        	{
            		printf("%d ",i);
        	}
    	}

    	return 0;
}

/*
OUTPUT:
Enter a number upto which have perfect numbers: 50
Perfect numbers between 1 to 50:
6 28
*/