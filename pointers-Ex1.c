#include <stdio.h>
int main() {
    int num = 10;
    int *ptr;  
    ptr = &num; 
    printf("Before modification:\n");
    printf("num = %d\n", num);
    *ptr = 20;  
    printf("After modification:\n");
    printf("num = %d\n", num);
    return 0;
}
output:
Before modification:
num = 10
After modification:
num = 20
