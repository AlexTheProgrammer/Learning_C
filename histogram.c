#include<stdio.h>
#define OUT 0
#define IN 1
#define HISTSIZE 20
main()
{
    int c, i, j,k, nwords, state;
    int wordlength[HISTSIZE];

    nwords = 0;
    state  = OUT;
    for(i = 0; i <HISTSIZE; i++)
        wordlength[i] = 0;

    while((c=getchar()) != EOF){
        if (c =='\n' || c == '\t' || c == ' '){
            if (state == IN){
            state = OUT;
            ++wordlength[nwords];
            nwords = 0;
            }

        }else{
            ++nwords;
            state = IN;
        }
    }
    for(i = 0 ; i<HISTSIZE ; i++ ){
            if (i>0) printf("length %2.d", i);
            for(j = 0; j < wordlength[i]; j++)
                printf(" 1");
            printf("\n");
    }

 }
