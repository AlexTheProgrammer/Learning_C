#include<stdio.h>

int power(int m, int n)
{
    int x;
    if (n > 1)
       x = m*power(m , (n-1));
    else x = m;

    return x;
}
main()
{
    int y = power(6 ,3);
    printf("2 to the power three is %d " , y);
}
