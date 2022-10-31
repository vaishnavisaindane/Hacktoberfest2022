#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define MAX 50

void enqueue();
void dequeue();
void display();

int queue_array[MAX];

int rear = -1;
int front = -1;

void main()
{
  enqueue();
  dequeue();
  display();

getch();
}

void enqueue()
{
  int x;

  if(rear == MAX -1)
     printf("Queue is full\n");
  else
  {
    if(front == -1)
    {
       front = 0;
       printf("\nEnter the element that you want to insert\n");
       scanf("%d",&x);

       rear++;
       queue_array[rear] = x;
    }

  }
}

void dequeue()
{
  if(front == -1 || front > rear)
     printf("\nThe queue is empty\n");
  else
  {
     printf("\nThe deleted element is %d\n",queue_array[front]);
     front++;
  }
}

void display()
{
  int i;
  if(front == -1 || front > rear )
     printf("\nThe queue is empty\n");
  else
  {
     printf("\nThe elemnt in the queue is \n");

       for(i=front; i<=rear ; i++)
       {
	  printf("\n%d\n", queue_array[i]);
       }
  }
}
