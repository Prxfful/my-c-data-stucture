// insert a beginning
#include<stdio.h>
#define CAP 10
int main(){
    int arr[CAP]={5,4,3,2,1};
    int n = 5;
    int x = 67;
    if(n<CAP){
        for(int i=n;i>0;i--){
            arr[i] = arr[i-1];
        }
        arr[0]=x;
        n++;
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
    }
    else{
        printf("Array is Full\n");
    }
    return 0;
}
output:
67 5 4 3 2 1 
