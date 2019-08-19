#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>



/*
int sqrt(int x)
{
    int z;
    for (z=0;z*z!=x;z++)
    {

        void;

    }
    return z;
}
*/
double pow(double x, double y)
{
    double z;
    for (z=1;y>0;y--)
    {
       z = z*x;
    }
    return z;
}

int factorial(int y)
{
    int z=1;
    for (;y>0;y--)
    {
        z = z*y;
    }
    return z;
}

int main()
{
    printf("%d\n",factorial(pow(2,2)));
    printf("%d",factorial(pow(3,2)));
    /*
    int re1,re2,result;
    re1=factorial(pow(2,2));
    re2=factorial(pow(3,2));
    result= re1+re2;
    printf("%d",result);


    */
}


