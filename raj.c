#include<stdio.h>
int main()
{
   int n,f = 1,i;
   printf("Enter the value of n :");
   scanf("%d",&n);
   if(n<0){
      printf("Factorial of negative number is not defined.\n");
      return 1;
   }
   for(i = 2;i<=n;i++)
   {
      f = f*i;
   }
   printf("factorial of %d is :%d",n,f);
   return 0;
}