#include <stdio.h>

main()
{
    int c;

while((c = getchar()) != EOF){
    if (c == '\t')
        {
        putchar(' ');
        putchar(' ');
        putchar(' ');
        putchar(' ');
        }
    else putchar(c);
    }
}
