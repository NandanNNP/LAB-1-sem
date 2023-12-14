#include <stdio.h>
int front=-1,rear=-1,q[3],size;
void enq(int item)
{
if (rear==-1 && front==-1)
	{
	front=rear=0;
	q[rear]=item;
	}
else if(front==((rear+1)%size))
	{
	printf("queue is full\n");
	}
else	{
	rear=(rear+1)%size;
	q[rear]=item;
	} 
}
void deq()
{
if(front==-1 && rear==-1)
	{
	printf("queue is empty\n");
	}
else if(front==rear)
	{
	printf("the deleted item is %d\n",q[front]);
	front=rear=-1;
	}
else
	{
	printf("the deleted item is %d\n",q[front]);
	front=((front+1)%size);
	}
}

void disp()
{
int i=front;
if (front==-1 && rear==-1)

