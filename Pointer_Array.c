#include <stdio.h>

void main()
{
    int a[5]={1,2,3,4,5};
    int *p,i;
    p =&a;

    for (p=a;p<(a+5);p++)
    {
        printf("%d\n",*p);
    }
}



