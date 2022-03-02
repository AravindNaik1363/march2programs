#include <stdio.h>
#define  data 6//using macros

int fibonacci(int);//function prototype
int main()
{
    printf("fib(%d) is %d",data,fibonacci(data)); //function calling
    return 0;
}

int fibonacci(int n)//function definition
{
    if(n<=1)
        return n;
    else
    {
        return (fibonacci(n-1)+fibonacci(n-2));
    }
}
