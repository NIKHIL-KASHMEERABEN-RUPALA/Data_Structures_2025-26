// 51. WAP to calculate the sum of n numbers using Pointer.


#include<stdio.h>
#include<stdlib.h>

int main(){

    int *address_ptr;
    int n;

    printf("Enter total number of numbers :     ");
    scanf("%d",&n);

    address_ptr = (int *)malloc(sizeof(int)*n);

    int sum = 0 ;

    printf("Start Entering numbers you wanna add\n");
    for(int i = 0 ; i < n ; i++){
        scanf("%d",(address_ptr+i));
    }

    for(int i = 0 ; i<n ; i++){
        sum = sum + *(address_ptr+i);
    }

    printf("the sum total is :   %d   ",sum);


    return 0;
}