#include <stdio.h>
int ls(int arr[], int size, int t) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == t) {
            return i;
        }
    }
    return -1; 
}
int main() {
    int arr[] = {2, 4, 6, 8, 10, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int t;
    printf("Enter the number to search: ");
    scanf("%d", &t);
    int result = ls(arr, size, t);
    if (result<0) {
        printf("Element not found in the array.\n");
    } else {
        printf("Element found at pos %d.\n", result+1);   
    }
}
