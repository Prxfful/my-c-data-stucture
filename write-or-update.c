#include<stdio.h>
int main(){
    int a[]={2,3,5,7,9};
    int n = sizeof(a)/sizeof(a[0]);
    int index=2;
    int newval = 100;
    if(index>=0 && index<n){
        a[index] = newval;
        for(int i=0;i<n;i++){
            printf("%d ",a[i]);
        }
    }
    else {
        printf("Index out of range");
    }
}
output:
2 3 100 7 9 
