#include<stdio.h>
main()
    {
      int nc;

      nc = 0;
      while(getchar() != EOF)
        if (getchar()=='\n') ++nc;
      printf("%10d\n",nc);

    }
