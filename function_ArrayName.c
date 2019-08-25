#include <stdio.h>
#include <stdlib.h>


void function_ArrayName(int x[10]);

void main()
{
    int a[10]={1,2,3,4,-1,-2,-3,-4,2,3};
    function_ArrayName(a);
}

void function_ArrayName(int x[10])
{
    int i;
    for (i=0;i<10;i++)
    {
        if (x[i] > 0)
        {
                printf("%d\n",x[i]);
        }

        else
        {
                printf("0\n");
        }

    }

}



