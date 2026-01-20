// 50. WAP to get and print the array elements using Pointer.


#include<stdio.h>
#include<stdlib.h>

int main(){

    int *arr_memory;

    
    
    int n;
    printf("Enter total number of array elements : \n");  
    scanf("%d",&n);
    arr_memory = (int *)malloc(sizeof(int)*n);

    printf("Start entering array elemetns : \n");   
    for (int i = 0 ; i < n ; i++){
        scanf("%d",(arr_memory+i));
    }

    printf("Your array elements are : \n"); 
    for(int i = 0 ; i <n ; i++){
        printf("%d ",*(arr_memory+i));
    }



    return 0;
}