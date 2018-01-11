#include <stdio.h>

main()
{
    int c, i, whitespace, other;
    int ndigit[10];
    for(i = 0; i < 10; ++i){
        ndigit[i] = 0;
    }

    whitespace, other = 0;

    while((c=getchar()) != '.') {
        if(c == ' ' || c == '\t' || c == '\n') {
            ++whitespace;
        } else if(c >= '0' && c <= '9') {
            ++ndigit[c-'0'];
        } else {
            ++other;
        }
    }

    printf("digits =");
    for (i = 0; i < 10; ++i) {
        printf(" %d", ndigit[i]);
    }
    printf(", whitespace = %d, other = %d\n", whitespace, other);

}
