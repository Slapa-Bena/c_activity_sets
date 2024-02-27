#include <stdio.h>

int input(int *a,int *b, int *c)
{
    printf("enter three number: \n");
    scanf("%d%d%d",&a ,&b ,&c);
    return 0;


}

void compare(int a,int b,int c,int *largest)
{
    if(a>b || a>c)
    {
        *largest=a;

    }
    else if(b>a || b>c)
    {
        *largest=b;
    }
    else {
        *largest=c;
    }
}

void output(int a, int b,int c,int largest)
{
    printf("the largest is %d",largest);

}

int main(){

    int num1,num2,num3,largest;

    num1=input;
    num2=input;
    num3=input;

    compare(num1,num2,num3,&largest);

    output(num1,num2,num3,largest);

    return 0;


}