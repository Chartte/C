#include <stdio.h>

int main()
{
    int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
    
    int (*p)[4];
    
    int i,j;

    p = a ;

    printf("Please input row:");
    scanf("%d",&i);
    printf("Please input colum:");
    scanf("%d",&j);

    printf("value=%d",*(*(p+i-1)+j-1));

}



