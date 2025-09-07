#include <stdio.h>

int main() {
    int arr[50], n, key, left, right, mid, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n); // array must be sorted
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    left = 0;
    right = n - 1;

    while (left <= right) {
        mid = (left + right) / 2;

        if (arr[mid] == key) {
            printf("Element %d found at index %d\n", key, mid);
            return 0;
        }
        else if (arr[mid] < key) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    printf("Element %d not found\n", key);

    return 0;
}
