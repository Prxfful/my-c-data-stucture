#include<stdio.h>
int main(){
    int num=20;
    int *ptr;
    ptr=&num;
    printf("value of num:%d\n",num);
    printf("adress of num:%d\n",&num);
    printf("value stored in ptr(adress of num):%d\n",ptr);
    printf("value pointed by ptr:%d\n",*ptr);
}
output:
value of num:20
adress of num:470516820
value stored in ptr(adress of num):470516820
value pointed by ptr:20
