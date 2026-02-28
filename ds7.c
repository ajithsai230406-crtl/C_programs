/*Single Linked List*/
#include <stdio.h>
#include <stdlib.h>

void insertatbeginning(int);
void insertatend(int);
void insertbetween(int, int, int);
void display();
void removebeginning();
void removeend();
void removespecific(int);

struct node {
    int data;
    struct node* next;
} *head = NULL;

void main() {
    int choice, choice1, value, loc1, loc2;

    while (1) {
        printf("\n\n*****MENU*****\n\n 1.Insert\n 2.Delete\n 3.Display\n 4.Exit\n Enter your choice : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);

                while (1) {
                    printf("Where do you want to insert? \n 1.At Beginning\n 2.At End\n 3.In Between\n Enter your choice : ");
                    scanf("%d", &choice1);

                    switch (choice1) {
                        case 1:
                            insertatbeginning(value);
                            break;
                        case 2:
                            insertatend(value);
                            break;
                        case 3:
                            printf("Enter values between which you want to insert: ");
                            scanf("%d%d", &loc1, &loc2);
                            insertbetween(value, loc1, loc2);
                            break;
                        default:
                            printf("\nWrong Input!! Try Again!!!");
                            continue;
                    }
                    break;
                }
                break;

            case 2:
                printf("\nHow do you want to delete?\n 1.From Beginning\n 2.From End\n 3.Specific\n Enter your choice : ");
                scanf("%d", &choice1);

                switch (choice1) {
                    case 1:
                        removebeginning();
                        break;
                    case 2:
                        removeend();
                        break;
                    case 3:
                        printf("\nEnter the value to delete: ");
                        scanf("%d", &loc2);
                        removespecific(loc2);
                        break;
                    default:
                        printf("\nWrong Input!! Try Again!!!");
                }
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);

            default:
                printf("\nWrong Input!! Try Again!!!");
        }
    }
}

void insertatbeginning(int value) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = head;
    head = newnode;

    printf("\nOne node inserted at the beginning!!");
}

void insertatend(int value) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
    } else {
        struct node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newnode;
    }

    printf("\nOne node inserted at the end!!");
}

void insertbetween(int value, int loc1, int loc2) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;

    if (head == NULL) {
        printf("\nList is empty, inserting at the beginning!!");
        newnode->next = NULL;
        head = newnode;
    } else {
        struct node* temp = head;
        while (temp != NULL && temp->data != loc1 && temp->data != loc2)
            temp = temp->next;

        if (temp == NULL) {
            printf("\nLocation not found!!");
        } else {
            newnode->next = temp->next;
            temp->next = newnode;
            printf("\nOne node inserted in between!!");
        }
    }
}

void removebeginning() {
    if (head == NULL) {
        printf("\nList is empty!!");
    } else {
        struct node* temp = head;
        head = head->next;
        free(temp);

        printf("\nOne node removed from the beginning!!");
    }
}

void removeend() {
    if (head == NULL) {
        printf("\nList is empty!!");
    } else if (head->next == NULL) {
        free(head);
        head = NULL;

        printf("\nOne node removed from the end!!");
    } else {
        struct node* temp = head;
        while (temp->next->next != NULL)
            temp = temp->next;

        free(temp->next);
        temp->next = NULL;

        printf("\nOne node removed from the end!!");
    }
}

void removespecific(int value) {
    if (head == NULL) {
        printf("\nList is empty!!");
    } else if (head->data == value) {
        struct node* temp = head;
        head = head->next;
        free(temp);

        printf("\nNode with value %d removed!!", value);
    } else {
        struct node* temp = head;
        struct node* prev = NULL;

        while (temp != NULL && temp->data != value) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == NULL) {
            printf("\nValue not found!!");
        } else {
            prev->next = temp->next;
            free(temp);

            printf("\nNode with value %d removed!!", value);
        }
    }
}

void display() {
    if (head == NULL) {
        printf("\nList is empty!!");
    } else {
        struct node* temp = head;

        printf("\nList elements are : ");
        while(temp -> next != NULL)
        {
            printf("\n%d --->NULL",temp -> data);
            temp = temp ->next;
        }
        printf("\n%d --->NULL",temp ->data);
    }
}
