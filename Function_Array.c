#include <stdio.h>
#include <stdlib.h>



int function_Array(int x)
{
    if (x > 0)
        printf("%d",x);
    else
        printf("0");
    return 0;
}



int main()
{
    int i;
    int a[10]={1,2,3,4,-1,-2,-3,-4,2,3};
    for (i=1;i<10;i++)
    {
        function_Array(a[i]);
        printf("\n");
    }

}


