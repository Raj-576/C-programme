#include<stdio.h>
int cube(int x)
{
    int y;
    y = x*x*x;
    return (y);
}
int main(){
    int n,res;
    printf("Enter the number :");
    scanf("%d",&n);
    res = cube(n);
    printf("cube of n is %d",res);
    return 0;
}