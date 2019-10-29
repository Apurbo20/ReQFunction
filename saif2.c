#include<stdio.h>
int age(int a)
{
    return 2019-a;
}
int main(void)
{
    int x;
    printf("Give your birth year:\n");
    scanf("%d",&x);
    int n=age(x);
    printf("Age is %d",n);
    return 0;
}
