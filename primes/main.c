/*
 * Name: T. van Beelen
 * Number: 2237326
 * Assignment: 3.3
 */


#include <stdio.h>
#include <math.h>


int is_prime(number) {
    /* Variables */
    int result = 1;

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

    return result;
}


int main() {
    /* Variables */
    int low_lim;
    int high_lim;

    /* Input */
    scanf("Give a lower bound: %d\n", &low_lim);
    scanf("Give a upper bound: %d\n", &high_lim);

    /* Check values & print */
    int i;
    for (i = low_lim; i<=high_lim; i++) {
        if (is_prime(i) == 1) {
            printf("%d\n", i);
        }
    }

    return 0;
}