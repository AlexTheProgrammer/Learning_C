/*FoldLine should take input and print it over several lines so that no line is longer than n chars */

#include <stdio.h>

#define MAXCHAR 20

main()
{
    int i;
    int c;

    i = 0;
    while ((c = getchar()) != EOF){
        if (i > MAXCHAR){
            printf("\n");
            i = 0;
        }

        if( c == '\n')
            i = 0;

        putchar(c);

        ++i;
    }
}
