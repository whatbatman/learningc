#include <stdio.h>

/*
 * show the length of each word typed.
 * word is any character that is not a whitespace or a digit.
 * start tracking when a word has begun, once non letter is found stop tracking.
 * reset the word counter
 */


main() {
    printf("hello world\n");
    int c, whitespace, digit, wc;
    char word[10];
    wc = 0;
    while ((c = getchar()) != '.')
    {
        if(c != ' ' | c != '\t' | c != '\n' | !(c >= '0' && c <= '9'))
        {
            W_START = 1;
            W_END = 0;
        } else
        {
            W_START = 1;
            W_END = 0;
        }
        wc++;
    }
    printf("wc: %d", wc);
}
