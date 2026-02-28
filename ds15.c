#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
}*top = NULL;
int main()
{
    int choice,value;
    while(1){
            printf("\nMENU\n 1.Push\n 2.Pop\n 3.Display\n 4.Exit\n Enter your choice : ");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1: printf("Enter the value to insert : ");
                              scanf("%d",&value);
                              push(value);
                              break;
                case 2: pop();
                              break;
                case 3: display();
                              break;
                case 4: exit(0);
                              break;
                default: printf("Invalid Input!!!");
            }
      }
      return 0;
}
void push(int value)
{
    struct node * newnode = (struct node *)malloc(sizeof(struct node));
    newnode -> data = value;
        newnode -> next = top;
        top = newnode;
        printf("\n Inserted element %d",value);

}
void pop()
{
    if(top == NULL)
        printf("\nStack is Empty");
    else{
        struct node * temp = top;
        printf("\nDeleted element %d",temp -> data);
        temp = temp -> next;
        free(temp);
    }
}
void display()
{
    if(top == NULL)
        printf("\nStack is Empty");
    else
    {
        struct node * temp = top;
        while(temp -> next != NULL){
            printf("%d --->",temp -> data);
            temp  = temp -> next;
        }
        printf("%d ---> NULL",temp -> data);
    }
}

