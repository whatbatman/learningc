#include <stdio.h>

main()
{
    int c, nl;
    nl = 0;

    while ((c = getchar()) != EOF) {
        ++nl;
        printf("%d\n", nl);
    }
}
