/*
 * Student: T. van Beelen
 * Number: 2237326
 * Assignment: 3.6
 */

#include <stdio.h>
#include <math.h>

double a, b, c;

double calculate_discriminant (double k, double l, double m) {
    return ((l*l)-4*k*m);
}

void abc (double initA, double initB, double initC) {
    /* Variables */
    double d;

    a = initA;
    b = initB;
    c = initC;
    d = calculate_discriminant(a, b, c);

    /* Processing */
    if (d > 0) {
        /* Calculate the two real roots */
        double r1, r2;
        r1 = (-b+sqrt(d))/(2*a);
        r2 = (-b-sqrt(d))/(2*a);
        printf("Root 1: %.1f, root 2: %.1f\n", r1, r2);
    }
    else if (d < 0) {
        /* Calculate the two imaginary roots */
        double re1, re2;
        double im1, im2;

        re1 = (-b/(2*a));
        im1 = (-d/(2*a));
        re2 = (-b/(2*a));
        im2 = (-d/(2*a));
        printf("Root 1: %.1f + %.1fi, root 2: %.1f - %.1fi\n", re1, im1, re2, im2);
    }
    else {
        /* Calculate only (real) root */
        double r1;
        r1 = (-b/(2*a));
        printf("The root is: %.1f\n", r1);
    }
}