/*
 * Student: T. van Beelen
 * Number: 2237326
 * Assignment: 3.6
 */

#include <stdio.h>
#include "abc.h"

/* Global variables */
double a, b, c;

void get_parameters(void) {
    /* Get input */
    scanf("%lf\n", &a);
    scanf("%lf\n", &b);
    scanf("%lf", &c);
}


int main() {
    /* Input */
    get_parameters();

    /* Processing */
    abc(a, b, c);

    return 0;
}
