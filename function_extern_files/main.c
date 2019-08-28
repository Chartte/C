#include <stdio.h>

void main()
{
    extern void enter_string(char str[]);
    extern void delete_string(char str[],char ch);
    extern void print_string(char str[]);

    char str[5];   //创建数组
    char c;
    enter_string(str);  // 引用数组
    scanf("%c",&c);
    delete_string(str,c);
    print_string(str);
}




