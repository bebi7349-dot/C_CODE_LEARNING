#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p, n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    p = (int*) malloc(n * sizeof(int));  // allocate memory

    if(p == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }

    printf("Enter %d numbers: ", n);
    for(i=0; i<n; i++) scanf("%d", &p[i]);

    printf("You entered: ");
    for(i=0; i<n; i++) printf("%d ", p[i]);

    free(p);  // release memory
    return 0;
}
