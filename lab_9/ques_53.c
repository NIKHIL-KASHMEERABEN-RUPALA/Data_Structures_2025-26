// 53. WAP to sort the array elements using Pointer.


#include<stdio.h>
#include<stdlib.h>

int main(){



    int n;
    int *array_maker;

    printf("Enter total number of elements :        \n");
    scanf("%d",&n);

    array_maker = (int *)malloc(sizeof(int)*n);

    printf("Enter array elements :  \n");
    for(int i = 0 ; i < n ; i++){
        scanf("%d",(array_maker+i));
    }


    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<n-i-1 ; j++){
            if(*(array_maker+j) > *(array_maker+j+1)){
                int temp = *(array_maker+j);
                *(array_maker+j) = *(array_maker+j+1);
                *(array_maker+j+1) = temp;
            }
        }
    }


    for(int i = 0 ; i < n ; i++){
        printf("%d ",*(array_maker+i));
    }

    free(array_maker);


    return 0;
}