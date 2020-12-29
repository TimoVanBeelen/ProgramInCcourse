/*
 * Student: T. van Beelen
 * Number: 2237326
 * Assignment: 1.4 Geometric series
 */

#include <stdio.h>
#include <math.h>

int main() {
    // Variables
    int N;
    double a, r, S;

    // Input
    scanf("%lf %d %lf", &a, &N, &r);

    // Calculation
    int n;
    for(n = 0; n<=N; n++) {
        S += a*pow(r, n);
    }

    // Output
    printf("%.2f", S);

    return 0;
}