#include <stdio.h>

int FRONT=-1,REAR=-1;

void enqueue(int q[],int n)
{	
	int item;
	
	
	if((REAR+1)%n==FRONT)
		printf("\nC-Queue is Full\n");
	else if(REAR==-1 && FRONT==-1)  
		{
		    printf("\n enter item : \t");
	        scanf("%d",&item);
			FRONT=REAR=0;
			q[REAR]=item;
		}
	else
		{
		    printf("\n enter item : \t");
	        scanf("%d",&item);
			REAR=(REAR+1)%n;
			q[REAR]=item;
		}
}

void dequeue(int n)
{
	if(FRONT==-1)
	    printf("\nC-Queue is empty\n");
	else if(FRONT==REAR)
	    FRONT=REAR=-1;
	else
	    FRONT=(FRONT%n)+1;
	        

}




int main ()
{
	int n,choice;
	printf("\nenter the no of elements in C-Queue : \t");
	scanf("%d",&n);
	int q[n];
	printf("Enter your choice below \n");
	while(1)
	{
		printf("\n--basic C-Queue operations--\n\n1.Enqueue\n2.Dequeue\n3.Peak\n4.Exit\nWhat is your choice :\t ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				enqueue(q,n);
				break;
			case 2:
				dequeue(n);
				break;
			case 3:
				peek(q);
				break;
			case 4:
				break;
			default:
				printf("\nEnter the proper value\n");
				break;
			
		}
		if(choice==4)
			break;
		
	}
	
	
return 0;
}
