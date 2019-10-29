#include<stdio.h>
int max(int x,int y)
{
    if(x>y)
    return x;
    else
        return y;
}

int main(void)
{
    int a =10,b =25;
    int m = max(a,b);
    printf("Bigger number is: %d\n",m);
    return 0;
}
