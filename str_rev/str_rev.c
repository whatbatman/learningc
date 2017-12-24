#include <stdio.h>
#include <string.h>

void rev(char str[]);

main()
{
    char *word = "foobar";
    rev(word);
}

void rev(char str[]) 
{
    int i;
    for(i = 0; str[i] != '\0'; i++) {
        printf("%c", str[(strlen(str)-i)-1]);
    }
    printf("\n");
}
