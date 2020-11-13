/*
 * Student: T. van Beelen
 * Number: 2237326
 * Assignment: 2.2
 */

#include <stdio.h>

int main() {
    char c;

    c = 'a';
    printf("%c=%d\n", c, c);

    c = 'z';
    printf("%c=%d\n", c, c);

    c = 'a';
    printf("%c %c %c\n", c, c+1, c+2);

    for (c='a'; c<='z'; c++) {
        printf("%c", c);
    }
    printf("\n");
    return 0;
}
