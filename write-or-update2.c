#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    int index = 0;
    int newval = 24;
    if(index>=0 && index<n){
        a[index]=newval;
        for(int i=0;i<n;i++){
            printf("%d ",a[i]);
        }
    }
    else{
        printf("Index out of range");
    }
}
output:
24 2 3 4 5 
