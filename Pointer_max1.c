#include <stdio.h>

void swap(int *pointer_1,int *pointer_2);

void main()
{
    int a,b;
    int *pointer_1,*pointer_2;

    scanf("%d %d",&a,&b);

    pointer_1 = &a;
    pointer_2 = &b;

    if (a<b)
    {
       swap(pointer_1,pointer_2);
    }

    printf("%d > %d",*pointer_1,*pointer_2);

}

void swap(int *pointer_1,int *pointer_2)
{
    int temp;
    temp = *pointer_1;
    *pointer_1 = *pointer_2;
    *pointer_2 = temp;
}


