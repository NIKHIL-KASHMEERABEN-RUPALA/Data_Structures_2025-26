// 55. WAP to define a C structure named Student (roll_no, name, branch and
// batch_no) and also to access the structure members using Pointer.


#include<stdio.h>
#include<stdlib.h>

struct Student{
    int roll_no;
    char name[30];
    char branch[30];
    int batch_no;
};

int main(){

    struct Student s1;
    struct Student *ptr1;

    ptr1 = &s1;

    printf("Enter the roll_no of student_1 :        ");
    scanf("%d",&ptr1->roll_no);


    printf("Enter the name of student_1 :       ");
    scanf("%s",ptr1->name);

    printf("Enter the branch of student_1 :     ");
    scanf("%s",ptr1->branch);

    printf("Enter the batch_no of student_1 :       ");
    scanf("%d",&ptr1->batch_no);



    printf("\nStudent Details:\n");
    printf("Roll No   : %d\n", ptr1->roll_no);
    printf("Name      : %s\n", ptr1->name);
    printf("Branch    : %s\n", ptr1->branch);
    printf("Batch No  : %d\n", ptr1->batch_no);






    return 0;
}