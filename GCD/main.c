/*
 * Student: T. van Beelen
 * Number: s2237326
 * Assignment: 3.4
 */

#include <stdio.h>

int gcd (int p, int q) {
    int i;
    for (i = p; i > 0; i--) {
        /* For every i between one of the numbers and 0 check if there is no
         * rest in the division, if this is the case, this is the gcd. If
         * not go one number lower */
        if (p%i ==0 && q%i==0) {
            return i;
        }
    }
    return 1;   /* Return 1 if none is found */
}

int main() {
    /* Variables */
    int p=6;
    int q=15;

    /* Input
     * The scanf function is not working for some random reason ask TA */

    /* Processing */
    int divider = gcd(p, q);
    printf("The GCD is %d\n", divider);

    return 0;
}