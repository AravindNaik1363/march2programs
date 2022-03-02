#include <stdio.h>
void swap_1(int *, int *); //function prototype   
int main()  
{  
    int a=23,b=32;
    printf("Before swapping the values in main a = %d, b = %d\n",a,b); // printing the value of a and b in main  
    swap_1(&a,&b); //function calling 
    printf("After swapping values in main a = %d, b = %d\n",a,b); // The values of actual parameters do change in call by reference, a = 23, b = 32
}  
void swap_1 (int *a, int *b)  
{  
    int temp;   
    temp = *a;  
    *a=*b;  
    *b=temp;  
    printf("After swapping values in function a = %d, b = %d\n",*a,*b);  
}  
