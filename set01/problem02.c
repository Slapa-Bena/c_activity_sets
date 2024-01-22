//2. Write a C program to add two numbers.

#include <stdio.h>

int a,b;
int result;

int main()
{
    printf("enter num 1 : \n");
    scanf("%d",&a);
    printf("enter num 2 : \n");
    scanf("%d",&b);

    result=a+b;

    printf("%d",result);
    return 0;
}