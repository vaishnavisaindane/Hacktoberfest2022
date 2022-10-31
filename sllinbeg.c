 #include<stdio.h>
 #include<stdlib.h>

 struct node
 {
   int data;
   struct node *next;
 };
 struct node *head;

void main()
 {
   struct node *ptr;
   int x;
   ptr = (struct node *)malloc(sizeof(struct node));

   if(ptr == NULL)
       printf("\nEnd of linklist\n");
   else
   {
       printf("\nEnter value :\n ");
       scanf("%d",&x);
       ptr->data = x;
       ptr->next = head;
       head = ptr ;
       printf("\n Inserted successfully\n");

   }
getch();
 }

