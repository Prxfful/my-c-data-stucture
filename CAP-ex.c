//Fixed capacity by using macro function called CAP
#include<stdio.h>
#define CAP 10
void printArray(int a[], int n);
void printArray(int a[CAP], int n){
    for(int i=0;i<n&&i<CAP;i++){
        a[i]=i;
        printf("%d ",a[i]);
    }
}
int main(){
    int a[CAP], n=30;
    printArray(a,n);
}
output:
0 1 2 3 4 5 6 7 8 9 
