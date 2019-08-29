#include <stdio.h>

void swap(int *p1,int *p2);

void main()
{
    int a,b,c;
    int *pointer_1,*pointer_2,*pointer_3;

    scanf("%d %d %d",&a,&b,&c);

    pointer_1 = &a;
    pointer_2 = &b;
    pointer_3 = &c;


    if (a<b)
    {
       swap(pointer_1,pointer_2);
    }
    if (a<c)
    {
       swap(pointer_1,pointer_3);
    }
    if (b<c)
    {
       swap(pointer_2,pointer_3);
    }
    printf("%d > %d > %d",*pointer_1,*pointer_2,*pointer_3);
}

void swap(int *p1,int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}


