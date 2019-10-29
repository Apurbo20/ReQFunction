#include<stdio.h>
int grade(int x)
{
    int grade;
    if(x>=80 && x<=100)
        printf("A+",grade);
    if(x>=75 && x<=79)
        printf("A",grade);
    if(x>=70 && x<=74)
        printf("A-",grade);
    if(x>=65 && x<=69)
        printf("B+",grade);
}
int main(void)
{
    int marks;
    printf("Enter your marks: \n");
    scanf("%d",&marks);
    grade(marks);
    return 0;
}
