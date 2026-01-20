// 54. WAP to check whether the string is Palindrome or not using Pointer.


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char *start;
    char *end;
    int flag = 1;

    char string[100];
    printf("Enter a string :        ");
    scanf("%s",string);

    start = &string[0];
    end = &string[strlen(string)-1];

    while(start<end){
        if(*start!=*end){
            flag = 0;
            break;
        }
        start++;
        end--;
    }

    if(flag){
        printf("The string is palindrome ");
    }
    else{
        printf("The string is not palindrome");
    }
    
    


    return 0;
}