#include <stdio.h>
int find_area(int *,int *);//function prototype
int main()
{
    unsigned int l,w,area;
    printf("enter length and width of rectangle:");
    scanf("%u %u",&l,&w);
    area=find_area(&l,&w);//function call //passing address of l and b as paramters
    printf("area of rectangle=%d",area);
    return 0;
}


int find_area(int *x,int *y)//function definition //*x is value,x is address
    {
        int area;
        area=(*x)*(*y);
        return area;
    }
