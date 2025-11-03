#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr = (int*)malloc(3 * sizeof(int));
    for (int i = 0; i < 3; i++)
        arr[i] = i + 1;

    for (int i = 0; i < 3; i++)
        printf("%d ", arr[i]);
    free(arr);
    return 0;
}
output:
1 2 3 
