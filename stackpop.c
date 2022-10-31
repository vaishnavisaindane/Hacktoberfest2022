#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void push();
void pop();
void display();

int stack[100],x,n,top= -1 ;

void main()
{
  printf("Enter the size of the stack :\n");
  scanf("%d",&n);

  push();
  display();
  pop();
  display();

getch();
}

void push()
{
   if(top >= n-1)
     printf("Stack is full\n");
   else
   {
     printf("Enter the element that you want to push :\n ");
     scanf("%d",&x);
     top++;
     stack[top] = x;
   }
}

void pop()
{

   if(top <= -1)
     printf("Stack is empty\n");
   else
   {
     printf("\nThe popped element is : %d\n",stack[top]);
     top--;
   }
}

void display()
{
 int i;
  if(top >= 0 )
  {
    printf("\nThe element in the stack : \n");
    for (i=top; i>=0 ; i--)
    printf("%d",stack[i]);
  }
  else
    printf("Stack is empty\n");

}
