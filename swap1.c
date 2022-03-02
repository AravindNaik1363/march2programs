#include <stdio.h>
#define a 10
#define b 20
void swap_1(int,int);//function prototype
int main()
{
    printf("before swapping numbers are:%d %d\n",a,b);
    swap_1(a,b);//function call
    return 0;
}


void swap_1(int x,int y)//function definition
    {
        int temp;
        temp=x;
        x=y;
        y=temp;
        printf("after swapping numbers are:%d %d",x,y);
    }
