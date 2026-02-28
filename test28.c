//Linear search
#include <stdio.h>

int main() {
    int n, i, j,key, found = 0;

    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);

    int arr[n];
    printf("\nEnter the elements of the array : ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the element to search for : ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("\nElement %d found at position %d\n", key, i + 1);  // i+1 for 1-based index
    } else {
        printf("\nElement %d not found in the array\n", key);
    }
    printf("\nThe elements in the array are : ",arr[i]);
     for(i = 0;i<n;i++)
        printf("%d, ",arr[i]);
    return 0;
}

