/*
 * Student: T. van Beelen
 * Number: 2237326
 * Assignment: 1.3 convert temperatures
 */

#include <stdio.h>

int main() {
    /* Variables */
    double tempC, tempK, tempF;

    /* Receive input for a temperature */
    scanf("%lf", &tempC);

    /* Calculate the temperatures */
    tempK = tempC + 273.15;
    tempF = 1.8*tempC + 32;

    /* Give the output */
    printf("C\tK\tF\n"
           "%.2f\t%.2f\t%.2f\n", tempC, tempK, tempF);
    return 0;
}