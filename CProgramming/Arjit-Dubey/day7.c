#include<stdio.h>
int main()
{
    int a = 10, b = 20;
    int f_add=0, f_sub=0, f_div=0, f_mul=0;

    f_add = a+b;
    f_sub = a-b;
    f_div = a/b;
    f_mul = a*b;

    printf("\n addition of 2 num. is: %d", f_add);
    printf("\n substraction of 2 num. is: %d", f_sub);
    printf("\n divison of 2 num. is: %d", f_div);
    printf("\n multiplication of 2 num. is: %d", f_mul);

    printf("\n\n");

    return 0;
}