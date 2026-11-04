#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;

    printf("Initial value: %d\n", *ptr);
    ptr++;
    printf("After ptr++ (next element): %d\n", *ptr);
    ptr = ptr + 2; 
    printf("After ptr + 2: %d\n", *ptr);
    ptr--;
    printf("After ptr-- (previous element): %d\n", *ptr);
    int *p1 = &arr[3];
    int *p2 = &arr[0];
    printf("Distance (p1 - p2): %ld elements\n", p1 - p2);
    return 0;
}