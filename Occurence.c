/* Find total occurences of each digits(0-9) using function */

#include<stdio.h>

int occurence(int n);//Function declaration

int main()//main function
{

	int n;

	printf("Enter a number:");//Accepting a number
	scanf("%d",&n);
	occurence(n);//Calling a function 

}

int occurence(int n)//Function for checking digit occurence
{
	int i,j,k,cnt;

	for(i=0;i<10;i++)
	{
		printf("\nOccurence of %d is:",i);
		cnt=0;
		for(j=n;j>0;j=j/10)
		{
			k = j % 10;
            		if (k==i) 
            		{
                		cnt++;
            		}
		}
		printf("%d",cnt);
	}

}

/*
OUTPUT:
Enter a number:5689

Occurence of 0 is:0
Occurence of 1 is:0
Occurence of 2 is:0
Occurence of 3 is:0
Occurence of 4 is:0
Occurence of 5 is:1
Occurence of 6 is:1
Occurence of 7 is:0
Occurence of 8 is:1
Occurence of 9 is:1
*/