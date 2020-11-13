/*
 * Student: T. van Beelen
 * Number: 2237326
 * Assignment: 1.4 Geometric series
 */

#include <stdio.h>

double pow(double r, int n);

int main() {
    // Variables
    int N;
    double a, r, S;

    // Input
    printf("Give the multiplier a, number of repetitions N and exp base r for sum a*r^n");
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

double pow(double r, int n) {
    int N;
    double ans=1;

    for (N=0; N<n; N++) {
        ans *= r;
    }
    return ans;
}
