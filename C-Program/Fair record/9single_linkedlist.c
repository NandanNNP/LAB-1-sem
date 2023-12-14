#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *link;
};

struct node *header = NULL;

//insert at front

void insert_at_front(int item)
{
	struct node *newnode;
	newnode=(struct node*) malloc(sizeof(struct node));
	if(header==NULL)
	{
	
		//for the first node
		
		newnode-> data = item;
		newnode-> link = NULL;
	
	}
	else            
	{
	
		//for the subsequent nodes
		newnode->data=item;
		newnode->link=header;

	}

	
	header=newnode;
	
	
	
}

//insert at End

void insert_at_end(int item)
{
	struct node *newnode;
	newnode=(struct node*) malloc(sizeof(struct node));
	newnode-> data = item;
	if(header==NULL)
	{
	
		//for the first node
		
		
		newnode-> link = NULL;
		header=newnode;
	
	}
	else
	{
	
		//for the subsequent nodes

		struct node *temp=header;
		while(temp->link!=NULL)
			temp=temp->link;
		temp->link=newnode;
		//newnode->link=NULL;		

	}
	
}

void insert_at_any(int item,int key)
{
	struct node *newnode;
	newnode=(struct node*) malloc(sizeof(struct node));
	struct node *temp=header;
	while((temp->data!=key)&&(temp->link!=NULL))
	{
		temp->link=temp;
	
	}
	if(temp->link=NULL&&temp->data=key)
	{
		
	
	}

}

void traverse()
{
	struct node *ptr;
	ptr = header;
	while(ptr != NULL)
	{
		printf("%d\n",ptr->data);
		ptr = ptr->link;
	}
}

int main()
{
	insert_at_end(10);	
	insert_at_end(20);
	traverse();
	return(0);
}
