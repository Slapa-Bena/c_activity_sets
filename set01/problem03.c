#include <stdio.h>

int input();
int add(int a, int b);
void output(int a, int b, int sum);

int input()
{
    int num;
    printf("enter the number \n");
    scanf("%d",&num);
    return num;
}

int add(int a, int b)
{
    return a+b;
}

void output(int a,int b, int sum)
{
    printf("the sum of %d and %d id %d \n",a,b,sum);
    
}

int main()
{

    int num,num1,result;

    num=input();
    num1=input();

    result=add(num,num1);

    output(num,num1,result);


   

    return 0;
}