#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>
#define Newnode (struct node*)malloc(sizeof(struct node))

struct Book
{
	char name[20];
	char author[20];
	struct Book *next;
}*head;


void insert(char* name,char* author)
{
	struct Book* book  = (struct Book *)malloc(sizeof(struct Book));
	strcpy(book->name, name);
	strcpy(book->author, author);
	book->next = NULL;
	
	if(head==NULL)
	{
		head = book;
	}
	else
	{
		book->next = head;
		head = book;
	}
}


void search(char* name1)
{
	struct Book * temp = head;
	
	while(temp!=NULL)
	{
		if(strcmp(name1,temp->name)==0)
		{
			printf("Book with name %s is found!!!!\n",name1);
			printf("Book Name:%s\n",temp->name);
			printf("Author Name:%s\n",temp->author);
			return;
		}
		temp = temp->next;
	}
	printf("Book with name %s is not found!!!!\n",name1);
}


void del(char* name1)
{
	struct Book * temp1 = head;
	struct Book * temp2 = head;
		
	while(temp1!=NULL)
	{
		if(strcmp(name1,temp1->name)==0)
		{
			printf("Book with name %s is found!!!!\n",name1);
		
			if(temp1==temp2)
			{
				head = head->next;
				free(temp1);
			}
			else
			{
				temp2->next = temp1->next;
				free(temp1);
			}
		
			printf("Deleted Successfully!!!!\n");
			return;
		}
	
		temp2 = temp1;
		temp1 = temp1->next;
	}
	printf("Book with name %s is not found!!!!\n",name1);
}


void display()
{
	struct Book * temp = head;
	
	while(temp!=NULL)
	{
		printf("Book Name:%s\n",temp->name);
		printf("Author Name:%s\n",temp->author);
		temp = temp->next;
		printf("\n");
	}
}