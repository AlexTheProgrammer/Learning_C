#include <stdio.h>

main()
{
    int n;

    do
    {
        printf("You have gone through this loop %d times ", n);
    }
        while((n=getchar()) != 'N');
}
