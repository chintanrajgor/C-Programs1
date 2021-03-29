#include<stdio.h>
#include<conio.h>
#define MAX 5
void enqueue();
void dequeue();
void display();
int queue_array[MAX];
int rear=-1;
int front=0;
int cnt=0;
void main()
{
    int choice;
    clrscr();
    while(1)
    {
	printf("1.Insert element to queue \n");
	printf("2.Delete element from queue \n");
	printf("3.Display all elements of queue \n");
	printf("4.Quit \n");
	printf("Enter your choice : ");
	scanf("%d", &choice);
	switch (choice)
	{
	    case 1:enqueue();
		   break;
	    case 2:dequeue();
		   break;
	    case 3:display();
		   break;
	    case 4:exit(1);
	    default:
	    printf("Wrong choice \n");
	}
    }
}

void enqueue()
{
    int item;
    if (cnt==MAX)
    printf("Queue Overflow \n");
    else
    {
	printf("Insert the element in queue : ");
	scanf("%d", &item);
	rear=(rear+1)%MAX;
	queue_array[rear] = item;
	cnt++;
    }
}

void dequeue()
{
    if (cnt==0)
    {
	printf("Queue Underflow \n");
	return ;
    }
    else
    {
	printf("Element deleted from queue is : %d\n",queue_array[front]);
	front=front+1;
	cnt--;
    }
}

void display()
{
    int i;
    if (cnt==0)
	printf("Queue is empty \n");
    else
    {
	printf("Queue is : \n");
	for (i=front;i<= cnt-1;i++)
	{
	    printf("%d ",queue_array[i%MAX]);

	}
	printf("\n");
    }
}