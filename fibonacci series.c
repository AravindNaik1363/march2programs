#include <stdio.h>
#define  data 6//using macros

int fibonacci(int);//function prototype
int main()
{
    
    printf("fibonacci series is:");
    fibonacci(data); //function calling
    return 0;
}

int fibonacci(int n)//function definition
{
    int i,a=0,b=1,c;
    for(i=0;i<n;i++)
    {
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
    }
}
