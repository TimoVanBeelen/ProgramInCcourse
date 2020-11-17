/*
 * Student: T. van Beelen
 * Number: 2237326
 * Assignment: 3.6
 */

#include <stdio.h>
#include <math.h>

/* Global variables */
static int a, b, c;

void get_parameters(void) {
    /* Get input */
    scanf("Give value a: %d\n", &a);
    scanf("Give value b: %d\n", &b);
    scanf("Give value c: %d\n", &c);
    a = 1;
    b = 4;
    c = 10;
}

double calculate_discriminant (double k, double l, double m) {
    return (pow(l, 2)-4*k*m);
}

void abc (double x, double y, double z) {
    /* Variables */
    double d;
    d = calculate_discriminant(x, y, z);

    /* Processing */
    if (d > 0) {
        /* Calculate the two real roots */
        double r1, r2;
        r1 = (-y+sqrt(d))/(2*x);
        r2 = (-y-sqrt(d))/(2*x);
        printf("Root 1: %.1f, root 2: %.1f", r1, r2);
    }
    else if (d < 0) {
        /* Calculate the two imaginary roots */
        double re1, re2;
        double im1, im2;

        re1 = (-y/(2*x));
        im1 = (-d/(2*x));
        re2 = (-y/(2*x));
        im2 = (-d/(2*x));
        printf("Root 1: %.1fi + %.1fi, root 2: %.1f - %.1fi", re1, im1, re2, im2);
    }
    else {
        /* Calculate only (real) root */
        double r1;
        r1 = (-y/(2*x));
        printf("The root is: %.1f", r1);
    }
}

int main() {
    /* Input */
    get_parameters();

    /* Processing */
    abc(a, b, c);

    return 0;
}
