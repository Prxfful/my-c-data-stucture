#include <stdio.h>
#include <time.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int sum = 0;
    clock_t start = clock();  // start time
    for(int i = 1; i <= n; i++)
        sum += i;
    clock_t end = clock();    // end time
    printf("Sum = %d\n", sum);
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time taken: %f seconds\n", time_taken);
    return 0;
}
output:
Enter number of elements: 500
Sum = 125250
Time taken: 0.000003 seconds
