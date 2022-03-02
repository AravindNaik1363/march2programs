#include <stdio.h>
void swap_1(int,int);//function prototype
int main()
{
    int a,b;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("before swapping numbers are:%d %d\n",a,b);
    swap_1(a,b);//function call
    return 0;
}


void swap_1(int x,int y)//function definition
    {
        x=x+y;
        y=x-y;
        x=x-y;
        printf("after swapping numbers are:%d %d",x,y);
    }
