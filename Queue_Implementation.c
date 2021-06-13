#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5
void insertion();
void deletion();
void traverse();
int queue[CAPACITY];
int front=0,rear=0;
int main()
{
while(1)
{
		int ch;
	printf("1.Insertion\n");
	printf("2.Deletion\n");
	printf("3.Traverse\n");
	printf("4.Exit\n");
	printf("Enter your choice\n");\
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			insertion();
			break;
		case 2:
			deletion();
			break;
		case 3:
			traverse();
			break;
		case 4:
			exit(0);
			break;
		default :
			printf("invalid choice\n");
		
	}
}
}
void insertion()
{
	int element;
	printf("Which element you insert\n");
	scanf("%d",&element);
	if(CAPACITY==rear)
	{
		printf("queue is full\n");
	}
	else
	{
		queue[rear]=element;
		rear++;
	}
}

void deletion()
{
	if(front==rear)
	{
		printf("queue is empty\n");
	}
	else
	{
		int i;
		printf("deleted element is %d\n",queue[front]);
		for(i=0;i<rear-1;i++)
		{
			queue[i]=queue[i+1];
		}
		rear--;
	}
}
void traverse()
{
	int i;
	if(front==rear)
	{
		printf("queue is empty\n");
	}
	else
	{
		for(i=front;i<rear;i++)
	{
		printf("%d\t",queue[i]);
		printf("\n");
	}
	}
	
}
