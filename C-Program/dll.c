#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *right;
	int data;
	struct node *left;
};
struct node *head=NULL;

void insert_front(int item)												//insert at left
{
	struct node *new;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=item;
	new->right=NULL;
	if(head==NULL)
	{
		head=new;
		new->left=NULL;
		printf("\nElement Inserted Succefful at : 1\n");
	}
	else
	{
		head->right=new;
		new->left=head;
		head=new;
		printf("\nElement Inserted Succefful at : 1\n");
		
	}
}


void insert_end(int item)												//insert at End
{
	
}

void display()
{
	if(head==NULL)
		printf("\n<-----LinkedList is Empty----->");
	else
		{
			struct node *temp=head;
			printf("\nDLL Elments :\t");
			while(temp!=NULL)
				{
					printf("%d\t",temp->data);
					temp=temp->right;
				}
		}
		
}

int main()
{
	int item,k,choice;
	printf("\n<-----Double Linked List Operations----->\n");
	while(1)
	{
		printf("\n1.insert at front\n7.Display\n8.Exit\n\nYour choice :\t");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				printf("\nEnter the data to insert at left :\t");
				scanf("%d",&item);
				insert_left(item);
				break;
			case 2:
				display();
				break;
			case 3:
				exit(0);
				break;
				
		}
	}
	
}
