#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int stack[100],n,x,top = -1;
void push();
void display();

void main()
{
   printf("Enter the size of he stack : ");
   scanf("%d",&n);

    push();
    display();

   getch();
}

 void push()
{
   if(top >= n-1 )
   {
      printf("Stack is full");
   }
   else
   {
      printf("Enter the element that you want to push : ");
      scanf("%d",&x);

      top++;
      stack[top] = x;
   }
}

void display()
{
  int i;
  printf("The elements in the stack are : ");

  for(i=top;i>=0;i--)
  {
     printf("%d",stack[i]);
  }
}
