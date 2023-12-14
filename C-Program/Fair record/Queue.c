#include <stdio.h>

int FRONT=-1,REAR=-1;

void enqueue(int q[],int n)
{	
	int item;
	
	
	if(REAR==n-1)
		printf("\nQueue is Full\n");
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
			REAR++;
			q[REAR]=item;
		}
}

void dequeue()
{
	if(FRONT==-1)
	    printf("\nQueue is empty\n");
	else if(FRONT==REAR)
	    FRONT=REAR=-1;
	else
	    FRONT++;
	        

}

void display(int q[],int n)
    {
        if(FRONT==-1 && REAR==-1)
            printf("\nQueue is empty\n");
        else
        	printf("The elements are :\t")
            for(int i=FRONT;i<n;i++)
            		{
            			printf("%d\t",q[i]);
            		}
    }


int main ()
{
	int n,choice;
	printf("\nenter the no of elements in Queue : \t");
	scanf("%d",&n);
	int q[n];
	printf("Enter your choice below \n");
	while(1)
	{
		printf("\n--basic Queue operations--\n\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\nWhat is your choice :\t ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				enqueue(q,n);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display(q,n);
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
