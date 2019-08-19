#include <stdio.h>
#include <stdlib.h>



int recursion(int x)
{
    int y;
    if (x > 1)
        y = x * recursion(x-1);
    else
        y = 1;
    return y;
}



int main()
{

    int a;
    printf("please input number:\n");
    scanf("%d",&a);
    printf("%d\n",recursion(a));
}


