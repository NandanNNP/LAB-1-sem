#include <stdio.h>
int front,rear,q[10],size;
void enq(int item)
{
if (rear==size-1)
	{
	printf("queue is full");
	}
else if(rear==-1 && front==-1)
	{
	front=rear=0;
	q[rear]=item;
	}
else	{
	rear++;
	q[rear]=item;
	} 
}
void deq()
{
if(front==-1)
	{
	printf("queue is empty\n");
	}
else if(front==rear)
	{
	printf("the deleted item is %d\n",q[front]);
	q[front];
	front=rear=-1;
	}
else
	{
	printf("the deleted item is %d\n",q[front]);
	q[front];
	front++;
	}
}

void disp()
{
int i;
if (front>=0)
	{
	printf("queue elements\n");
	for(i=front;i<=rear;i++)
		{
		printf("%d\n",q[i]);
		}
	}
else
	{
	printf("queue is empty\n");
	}
}

int main()
{
int n,item;
front=-1;
rear=-1;
printf("enter the size of the queue(max 10)\n");
scanf("%d",&size);
if(size<=10 && size>1)
	{
	while(1)
		{
		printf("---basic queue---\n0)exit\n1)enqueue\n2)dequeue\n3)display\n ");
		scanf("%d",&n);
		if (n==0)
			{
			printf("you are exited\n");
			break;
			}
		else if (n==1)
			{
			printf("enter the item\n");
			scanf("%d",&item);
			enq(item);
			}
		else if (n==2)
			{
			deq();
			}
		else if (n==3)
			{
			disp();
			}
		else
			{
			printf("your operation is invalid\n");
			}
		}
	
}
return 0;
}

