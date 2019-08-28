#include <stdio.h>
#include <stdlib.h>


int function_Static_Varible(int a);


void main()
{
    int i;
    for (i=1;i<=5;i++)
    {

        printf("%d!=%d\n",i,function_Static_Varible(i));
    }

}

int function_Static_Varible(int a)
{

    static x = 1;
    x = x * a;
    return x;
}





