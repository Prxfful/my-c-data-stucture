#include <stdio.h>
#include <time.h>
int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    clock_t start = clock();  
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++)
            ; 
    }
    clock_t end = clock();   
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time taken: %f seconds\n", time_taken);
    return 0;
}
output:
Enter size: 1000
Time taken: 0.000830 seconds
