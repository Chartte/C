#include <stdio.h>

int max(int x[]);

int main()
{
    int i,arrary[5];

    for (i=0;i<5;i++)
    {
        printf("Please input no.[%d]numbers:\n",(i+1));
        scanf("%d",&arrary[i]);
    }
    max(arrary);
}

int max(int x[])
{
    int *big,*temp;

    for (big=x,temp=x+1;temp<x+5;temp++)
    {
        if (*temp > *big)
        {
            big = temp;
        }
    }
    printf("%d",*big);

}


