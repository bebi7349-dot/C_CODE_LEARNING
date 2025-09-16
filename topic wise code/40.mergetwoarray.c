#include <stdio.h>

int main() {
    int arr1[3], arr2[3], arr3[6], i, j;
    printf("Enter 3 numbers for first array: ");
    for(i=0; i<3; i++) scanf("%d", &arr1[i]);

    printf("Enter 3 numbers for second array: ");
    for(i=0; i<3; i++) scanf("%d", &arr2[i]);

    for(i=0; i<3; i++) arr3[i] = arr1[i];
    for(j=0; j<3; j++) arr3[i+j] = arr2[j];

    printf("Merged array: ");
    for(i=0; i<6; i++) printf("%d ", arr3[i]);
    return 0;
}
