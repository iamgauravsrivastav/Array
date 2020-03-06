
#include<stdio.h>
int main()
{
    int x=5;
    int *j;
    j=&x;
    printf("1   %d   %u\n",x,j);
    printf("2   %d   %u\n",*j,&x);
    printf("3   %u",*&j);

    return 0;
}


