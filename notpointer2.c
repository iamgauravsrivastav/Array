#include<stdio.h>
int main()
{
    static int i;
    ++i;
    printf("the value of i is =%d",i);
    return 0;
}
