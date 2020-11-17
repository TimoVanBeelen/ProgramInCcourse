/*
 * Name: T. van Beelen
 * Number: 2237326
 * Assignment: 2.12
 */

#include <stdio.h>
#include <math.h>

int main() {
    /* Variables */
    int number;
    int result = 1;

    /* Input */
    scanf("%d", &number);

    /* Processing */
    if (number < 2) {
        result =0;
    } else {
        int i;
        for (i =2; i<=sqrt(number); i++) {
            if (number%i != 0) {
                continue;
            } else {
                result = 0;
                break;
            }
        }
    }

    /* Output */
    if (result == 0) {
        printf("%d is not a prime number", number);
    } else printf("%d is a prime number", number);

    return 0;
}
