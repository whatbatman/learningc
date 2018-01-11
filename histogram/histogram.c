#include <stdio.h>

main()
{
    int c, i, d, e;
    char chars[10];

    while(1) {
        printf("[+]\ti: %d\n", i);
        printf("[+]\td: %d\n", d);
        d=0;
        for(i=0; i< 3; i++) {
            scanf(" %c", &chars);
            //chars[i] = c;//getchar();
            d++;
        }
        for(i = 0; i < d; i++) {
            printf("-");
        }
        printf("\n");
    }

        /*while((c=getchar()) != '\n') {
            chars[d] = c;
            d++;
            printf("test\n");
        }*/
        //printf('%d\n', d);
        

}
