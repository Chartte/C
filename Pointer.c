#include <stdio.h>

void main()
{
    int a,b;
    int *pointer_1,*pointer_2;
    a=100,b=10;
    pointer_1 = &a;
    pointer_2 = &b;
    printf("%d,%d\n",a,b);
    printf("%d,%d",*pointer_1,*pointer_2);
}




