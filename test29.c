#include <stdio.h>

int binarySearch(int arr[], int size, int key) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if key is present at mid
        if (arr[mid] == key) {
            return mid;  // Return the index of the key
        }

        // If key is greater, ignore the left half
        if (arr[mid] < key) {
            left = mid + 1;
        } else {
            // If key is smaller, ignore the right half
            right = mid - 1;
        }
    }

    return -1;  // Return -1 if the key is not found
}

int main() {
    int n, key;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &key);

    int result = binarySearch(arr, n, key);
    if (result != -1) {
        printf("Element %d found at position %d\n", key, result + 1);  // Result+1 for 1-based index
    } else {
        printf("Element %d not found in the array\n", key);
    }
    return 0;
}
