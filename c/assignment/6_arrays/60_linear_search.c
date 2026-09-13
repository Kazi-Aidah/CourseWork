// 60. C Program to Search an Element in an Array (Linear Search)
#include<stdio.h>
int main() {
    int n, i, key, found = 0, arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("%d found at index %d.\n", key, i);
            found = 1;
        }
    }

    if(!found)
        printf("%d not found.\n", key);

    return 0;
}
