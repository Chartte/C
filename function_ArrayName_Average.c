#include <stdio.h>
#include <stdlib.h>


void function_ArrayName_Average(int x[10]);

void main()
{
    int a[10]={19,85,32,66,34,77,98,100,68,31};
    function_ArrayName_Average(a);
}

void function_ArrayName_Average(int x[10])
{
    int i;
    int sum=0;
    for (i=0;i<10;i++)
    {
        sum=sum+x[i];

    }
    printf("%d",sum/10);


}






