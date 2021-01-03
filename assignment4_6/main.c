/*
 * Student      : Timo van Beelen, Rauf Mahmud-Zada
 * Numbers      : s2237326, RAUF FIX THIS
 * Assignment   : 4.6
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double vectorMagnitude(int length, double v[length]) {
    /*
     * Input: The vector and its length
     * Output: Magnitude of the vector
     * Function calculates the RSS of the vector and gives this as output
     */
    int i;
    double mag;

    mag = 0;
    for (i = 0; i < length; i++){
        mag += pow(v[i], 2);
    }
    mag = sqrt(mag);

    return mag;
}

int main (void) {
    int dim, num;
    int i, j;
    double *magnitude;
    double **w;

    scanf("%d %d", &dim, &num);     /* Read N and M */
    w = calloc(num, sizeof(double *));     /* Allocate array of M pointers */
    magnitude = calloc(num, sizeof(int));
    for (i=0; i < num; i++) {
        w[i] = calloc(dim, sizeof(double)); /* Allocate space for N dim vector */
        /* Read the vector */
        for (j=0; j<dim; j++) {
            scanf("%lf", &w[i][j]);
        }
    }

    for (i=0; i<num; i++) {
        magnitude[i] = vectorMagnitude(dim, w[i]);
        printf("%.3f\t", magnitude[i]);
    }
    /*
     * FIX THIS
     * Sort the vectors and print them
     */
    return 0;
}
