#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;
    printf("Entered number of integers :");
    scanf("%d",&n);
     int *ptr = (int*)calloc(n , sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    for (i = 0; i < n; ++i)
    {
        printf("Enter an integer:");
        scanf("%d", ptr+i);
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
