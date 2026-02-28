#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
struct node * root = NULL;
int len;
void append(void);
void addatbegin(void);
void addatafter(void);
int length(void);
void display(void);
void delete(void);
void main()
{
    int ch;
    while(1)
    {
        printf("Single Linked List Operations : \n");
        printf("1.Append\n");
        printf("2.Add_at_begin\n");
        printf("3.Add_at_after\n");
        printf("4.Length\n");
        printf("5.Display\n");
        printf("6.Delete\n");
        printf("7.Quit\n");

        printf("Enter your choice : ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: append();
                         break;
            case 2: addatbegin();
                         break;
            case 3: addatafter();
                         break;
            case 4: len = length();
                         printf("Length : %d\n",len);
                         break;
            case 5: display();
                         break;
            case 6: delete();
                         break;
            case 7: exit(1);
                         break;
            default : printf("Invalid input\n\n");

        }
    }
}

void append()
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter node data : ");
    scanf("%d",&temp->data);
    temp->link = NULL;
    if(root == NULL)
    {
        root = temp;
    }
    else
    {
        struct node* p;
        p = root;
        while(p->link != NULL)
        {
             p = p->link;
        }
         p->link = temp;
    }
}
int length ()
{
    int count  = 0;
    struct node* temp;
    temp = root;
    while(temp != NULL)
    {
        count++;
        temp = temp->link;
    }
    return count;
}
void display()
{
    struct node* temp;
    temp = root;
    if(temp == NULL)
    {
        printf("List is Empty\n\n");
    }
    else
    {
        while(temp != NULL)
        {
            printf("%d-->",temp->data);
            temp = temp->link;
        }
        printf("\n\n");
    }
}
void addatbegin()
{

}
void addatafter()
{

}
void delete()
{

}
