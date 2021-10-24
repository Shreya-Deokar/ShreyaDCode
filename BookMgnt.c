/*Write a program for Book Management System using linked list and perform the Insert, Search, Delete and Display Operations*/

#include<stdio.h>
#include<stdlib.h>
#include"singly.h"

int main()
{
	head = NULL;
	int choice;
	char name[20];
	char author[20];
	
	do
	{
		printf("\n........MENU........");
		printf("\n1.Display\n2.Insert\n3.Search\n4.Delete\n5.Exit\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:	printf("\nLinked List=\t\n\n");
					display();
					break;
			case 2:	printf("Enter Book Name:");
					scanf("%s",name);
					printf("Enter Book Author Name:");
					scanf("%s",author);
					insert(name,author);                
					break;
			case 3:	printf("Enter Book Name for Search:");
					scanf("%s",name);
					search(name);
					break;
			case 4: printf("Enter Book Name for Delete:");
					scanf("%s",name);
					del(name);
					break;
			case 5: exit(0);
					break;
			default: printf("Invalid Option");
		}
	}while(choice!=5);
}

/*
........MENU........
1.Display
2.Insert
3.Search
4.Delete
5.Exit
Enter your choice
2
Enter Book Name:ABC
Enter Book Author Name:PQR

........MENU........
1.Display
2.Insert
3.Search
4.Delete
5.Exit
Enter your choice
2
Enter Book Name:JKL
Enter Book Author Name:XYZ

........MENU........
1.Display
2.Insert
3.Search
4.Delete
5.Exit
Enter your choice
2
Enter Book Name:LMO
Enter Book Author Name:HIJ

........MENU........
1.Display
2.Insert
3.Search
4.Delete
5.Exit
Enter your choice
1

Linked List=

Book Name:LMO
Author Name:HIJ

Book Name:JKL
Author Name:XYZ

Book Name:ABC
Author Name:PQR


........MENU........
1.Display
2.Insert
3.Search
4.Delete
5.Exit
Enter your choice
3
Enter Book Name for Search:JKL
Book with name JKL is found!!!!
Book Name:JKL
Author Name:XYZ

........MENU........
1.Display
2.Insert
3.Search
4.Delete
5.Exit
Enter your choice
4
Enter Book Name for Delete:JKL
Book with name JKL is found!!!!
Deleted Successfully!!!!

........MENU........
1.Display
2.Insert
3.Search
4.Delete
5.Exit
Enter your choice
1

Linked List=

Book Name:LMO
Author Name:HIJ

Book Name:ABC
Author Name:PQR


........MENU........
1.Display
2.Insert
3.Search
4.Delete
5.Exit
Enter your choice
5
*/