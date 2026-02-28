/*Queue Implementation using arrays*/
#include<stdio.h>
# define n 5
int main()
{
    int queue[n],ch =1,front = 0,rear = 0,i,x = n;
    do
    {
        printf("\n\n***MENU***\n");
        printf(" 1.enqueue\n 2.dequeue\n 3.display\n 4.Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: if(rear == x)
            {
                printf("\nQueue is Full\n");
            }
            else
            {
                printf("\nEnter the element : ");
                scanf("%d",&queue[rear++]);
            }
            printf("\nElement Inserted\n");
            break;
            case 2: if(front == rear)
            {
                printf("\nQueue is Empty!!");
            }
            else
            {
                printf("%d is deleted\n",queue[front++]);
                x++;
            }
            break;
            case 3: printf("\nQueue elements are : ");
                          if(front == rear)
                          {
                              printf("\nQueue is Empty");
                          }
                          else
                          {
                              for(i = front;i < rear;i++)
                              {
                                  printf("%d, ",queue[i]);
                              }
                          }
            printf("\n");
            break;
            case 4: printf("Exit");
                         break;
            default: printf("\nEnter valid choice!!!\n");
        }
    }
    while(ch != 4);
    return 0;
}
