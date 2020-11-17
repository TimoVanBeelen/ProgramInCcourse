#include <stdio.h>

int f(double x){
    return (x+1) -1;
}

int main (void) {

    printf("%d\n", f(1));

    return 0;
}