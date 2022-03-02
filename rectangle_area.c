#include <stdio.h>
int find_area(int,int);//function prototype
int main()
{
    int l,w,area;
    printf("enter length and width of rectangle:");
    scanf("%d %d",&l,&w);
    area=find_area(l,w);//function call
    printf("area of rectangle=%d",area);

    return 0;
}


int find_area(int x,int y)//function definition
    {
        int area;
        area=x*y;
        return area;
    }

