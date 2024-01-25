#include<stdio.h>

int main()
{
    int i=1,n;
    printf("enter number:");
    scanf("%d",&n);
    while(i<=10)
      {
         printf("%d*%d=%d\n",n,i,i*n);
         i++;
      }
}