/*Check whether the the array is palindrome or not */

#include<stdio.h>

int palindrome(int arr[], int n) //Function for check palindrome
{
	
	int i,flag=1;
	
	for(i=0; i<=n/2 && n!=0; i++)
	{
		if(arr[i]!=arr[n-i-1])
			flag=0;
		break;
	}
	
	if(flag==1)
	{
		printf("\nGiven Array is Palindrome");
	}
	else	
		printf("\nGiven Array is Not Palindrome");

}

int main()
{
	int n,i;
	
	int arr[] = {10,20,30,40,30,20,10};
	
	n = sizeof(arr)/sizeof(arr[0]);
	
	printf("Given Array is:");
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	
	palindrome(arr,n);

}

/*
Given Array is:10       20      30      40      30      20      10
Given Array is Palindrome
*/