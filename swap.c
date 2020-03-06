#include<stdio.h>
void swap (int *a, int *b);
int main()
{
    int a,b;
    a=10,b=20;
    printf("the value of m and n is =%d%d",a,b);
    swap(&a ,&b);
    printf("after swaping the value of m and n are");
    printf("%d %d",a,b);
    return 0;
}
void swap (int *m , int *n)
{
int temp;
temp =*m;
*m=*n;

*n=temp;
}
