#include <stdio.h>
int main() {
    int n, i, x, a[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("\nEnter the elements:\n");
    for (i = 0; i < n; i++) {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("\nEnter the element to be searched: ");
    scanf("%d", &x);
    int found = 0; 
    for (i = 0; i < n; i++) {
        if (a[i] == x) {
            printf("Element is found at position %d\n", i+1);
            found = 1;  
            break; 
        }
    }
    if (!found) {
        printf("Element not found\n");
    }
    return 0;
}
