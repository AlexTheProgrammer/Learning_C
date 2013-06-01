#include<stdio.h>

main()
{

long c;
long d;

while ((c=getchar())!=EOF)
    {
        if (c != ' '){
            putchar(' ');
            putchar(c);
            while((d=getchar())!=' ')
            {
                putchar(d);
            }
        }
    }
}
