// 52. WAP to find the largest element in the array using Pointer.


#include<stdio.h>
#include<stdlib.h>

int main(){

    int *largest_checker;
    int *array_maker;
    int n;

    printf("Enter total number of array elemetns :      \n");
    scanf("%d",&n);

    array_maker = malloc(sizeof(int)*n);
    largest_checker = malloc(sizeof(int)*n);

    printf("Start entering the array elements :        \n");
    for(int i = 0 ; i < n ; i++){
        scanf("%d",(array_maker+i));
    }

    *(largest_checker) = *(array_maker+0);

    for(int i = 0 ; i < n ; i++){
        if(*(largest_checker) < *(array_maker+i)){
            *(largest_checker) = *(array_maker+i);
        }else{
            continue;
        }
    }

    printf("The largest element is :  %d",*largest_checker);

    free(largest_checker);
    free(array_maker);

    return 0;
}