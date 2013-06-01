#include <stdio.h>

#define upper 300
#define lower -500000
#define step 20
main()
{

    int fahr;

    for(fahr = lower ; fahr <= upper ; fahr = fahr + step)
    {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
}
