#include<stdio.h>
int main()
{
    int n,f;
    printf("Enter the number :");
    scanf("%d",&n);
    f = fact(n);
    printf("\n factorial of a number using recursion is %d",f);
    return (0);

}
fact(int x)
{
    if (x==0)
    return(1);
    else
    return(x*fact(x-1));
}