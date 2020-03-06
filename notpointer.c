#include<stdio.h>
int main()
{
    int i,j,a[20][20];
   printf("idk what's going on =\n");
   printf("enter the number that you want to print in matrix form=");
   for(i=1;i<=3;i++)
   {
       for(j=1;j<=3;j++)
       {

           scanf("%d",&a[i][j]);

       }
   }
   printf("your number that you enter is ");
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=5;j++)
       {

           printf("%d",a[i][j]);

       }
       printf("\n");
   }

return 0;

}

