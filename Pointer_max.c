#include <stdio.h>

void main()
{
    int a,b;
    int *pointer_1,*pointer_2,*pointer;

    scanf("%d %d",&a,&b);

    pointer_1 = &a;
    pointer_2 = &b;

    if (a<b)
    {
       pointer = pointer_1;
       pointer_1 = pointer_2;
       pointer_2 = pointer;
    }

    printf("%d,%d\n",a,b);
    printf("%d > %d",*pointer_1,*pointer_2);
}




