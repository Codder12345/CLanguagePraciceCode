#include <stdio.h>

#define MAX_SIZE 100

void rotateArray(int arr[], int size, int n) {
    int temp, i, j;
    
    // Rotate 'n' times
    for (i = 0; i < n; i++) {
        // Store the first element of the array
        temp = arr[0];
        
        // Shift each element to the left by one position
        for (j = 0; j < size - 1; j++) {
            arr[j] = arr[j + 1];
        }
        
        // Place the first element at the end of the array
        arr[size - 1] = temp;
    }
}

int main() {
    int arr[MAX_SIZE];
    int size, n, i;
    
    // Input array size and elements
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input number of rotations
    printf("Enter the number of rotations: ");
    scanf("%d", &n);
    
    // Perform rotations
    rotateArray(arr, size, n);
    
    // Output the rotated array
    printf("Rotated Array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
