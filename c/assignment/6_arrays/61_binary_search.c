// 61. C Program to Search an Element in an Array (Binary Search)
#include<stdio.h>
int main() {
    int n, i, key, low, high, mid, arr[100];

    printf("Enter number of elements (sorted): ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0; high = n - 1;
    while(low <= high) {
        mid = (low + high) / 2;
        if(arr[mid] == key) {
            printf("%d found at index %d.\n", key, mid);
            return 0;
        } else if(arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("%d not found.\n", key);

    return 0;
}
