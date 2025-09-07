#include <stdio.h>
float average(int arr[], int n) {
 int sum = 0, i;
 for (i = 0; i < n; i++)
 sum += arr[i];
 return (float)sum / n;
} 
int main() {
 int n, i;
 printf("Enter number of elements: ");
 scanf("%d", &n);
 int arr[n];
 printf("Enter %d elements:\n", n);
 for (i = 0; i < n; i++)
 scanf("%d", &arr[i]);
 printf("Average = %.2f\n", average(arr, n));
return 0;
}