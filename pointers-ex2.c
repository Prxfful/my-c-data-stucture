#include<stdio.h>
int main(){
    int arr[5]={5,10,12,43,24};
    int *ptr;
    int i, sum=0;
    ptr =arr;
    for(i=0;i<5;i++){
        sum+=*(ptr+i);
    }
    printf("sum of array elements=%d\n",sum);
    return 0;
}
output:
sum of array element:94
