#include <stdio.h>

int main() {
    int arr[5], i, sum = 0;
    float avg;
    printf("Enter 5 numbers: ");
    for(i=0; i<5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = (float)sum / 5;
    printf("Sum = %d\nAverage = %.2f\n", sum, avg);
    return 0;
}

