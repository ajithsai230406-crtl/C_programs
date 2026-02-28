#include <stdio.h>
#include <stdlib.h>

// Define a structure for a linked list node
struct Node {
    int marks;
    struct Node* next;
};

// Function to add a node at the end of the linked list
void append(struct Node** head_ref, int new_marks) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head_ref;

    new_node->marks = new_marks;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }

    last->next = new_node;
}

// Function to calculate the sum of marks
int calculateSum(struct Node* head) {
    int sum = 0;
    while (head != NULL) {
        sum += head->marks;
        head = head->next;
    }
    return sum;
}

// Function to display the marks
void display(struct Node* head) {
    printf("Student Marks: ");
    while (head != NULL) {
        printf("%d ", head->marks);
        head = head->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    // Adding marks of 5 students to the linked list
    append(&head, 85); // Marks of Student 1
    append(&head, 90); // Marks of Student 2
    append(&head, 78); // Marks of Student 3
    append(&head, 88); // Marks of Student 4
    append(&head, 92); // Marks of Student 5

    // Displaying the marks
    display(head);

    // Calculating and displaying the sum
    int totalMarks = calculateSum(head);
    printf("Total Marks of 5 Students: %d\n", totalMarks);

    return 0;
}
