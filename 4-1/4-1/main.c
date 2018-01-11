#include <stdio.h>
#include <stdlib.h>
/*
 * Write the function strindex(s,t)
 * which returns the position of the rightmost occurrence of t in s,
 * or -1 if there is none.
*/

int strindex(char t[], char s[]);
int strlen(char s[]);

int main()
{
    char baseWord[] = "asdfffsadfddddd";
    strindex('f', baseWord);
    return 0;
}

int strindex( char t[], char s[])
{
    int i = 0;
    int pos;
    // you could just increment i until i != '\0' but why when you can
    // implement your own strlen
    for(i = 0; i < strlen(s); ++i) {
        if(s[i+1] == '\0') printf("last char is: %c\n", s[i]);

        if(s[i] == t) pos = i;
    }
    printf("right most %c is: %d", t, pos);
}

/*
    Implemented for "fun"
*/
int strlen(char s[])
{
    int len = 0;
    while(s[len] != '\0') len++;
    //printf("len is: %d\n", len);
    return len;
}
