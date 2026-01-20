// 49. WAP to allocate and de-allocate memory for int, char and float variable at runtime.


#include<stdio.h>
#include<stdlib.h>

int main(){

    int *iptr;
    float *fptr;
    char *cptr;

    iptr = (int *)malloc(sizeof(int));
    fptr = (float *)malloc(sizeof(float));
    cptr = (char *)malloc(sizeof(char));

    if(iptr || fptr || cptr == NULL){
        printf("Memory allocation has been failed\n");
        exit(0);
    }

    *iptr = 10;
    *fptr = 3.14;
    *cptr = 'A';

    printf("Integer value: %d\n", *iptr);
    printf("Float value: %.2f\n", *fptr);
    printf("Character value: %c\n", *cptr);

    free(iptr);
    free(fptr);
    free(cptr);




    return 0;
}