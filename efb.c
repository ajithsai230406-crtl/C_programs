
#include <stdio.h>
#include <stdlib.h>

// Define the Node structure
struct Node {
    int data;
    struct Node *next;
};

// Initialize the top of the stack as NULL
struct Node *top = NULL;

// Push operation to insert an element
void push(int data) {
    // Create a new node
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Stack Overflow\n");
        return;
    } else {
        newNode->data = data;
        newNode->next = top; // Point new node to the current top
        top = newNode;       // Update top to the new node
        printf("%d pushed to stack\n", data);
    }
}

// Display the stack
void display() {
    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }
    struct Node *temp = top;
    printf("Stack elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function
int main() {
    int n, data;
    printf("Enter the number of elements to insert into the stack: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &data);
        push(data);
    }
    display();
    return 0;
}


