//read operation using Array
#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int index=3;
    if(index>=0 && index<n){
        int val = arr[index];
        printf("a[%d]= %d",index, val);
    }
}
output:
a[3]= 4
