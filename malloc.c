
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    printf("enter no.of integers:");
    scanf("%d",&n);
    int *ptr = (int *)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("memory not available");
        exit(0);
    }
    for(i=0;i<n;i++)
    {
        printf("enter an integer:");
        scanf("%d",ptr+i);
    }
    printf("integres are:");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }
    printf("\naddress of integers are:");
    for(i=0;i<n;i++)
    {
        printf("%d ",(ptr+i));
    }

    return 0;
}
