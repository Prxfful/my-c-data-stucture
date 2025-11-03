#include <stdio.h>
#include <stdlib.h>
int main() {
    float *marks = (float*)calloc(3, sizeof(float));
    marks[0] = 95.5;
    marks[1] = 88.2;
    marks[2] = 76.9;
    for (int i = 0; i < 3; i++)
        printf("%.1f ", marks[i]);
    free(marks);
    return 0;
}
output:
95.5 88.2 76.9 
