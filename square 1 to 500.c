#include <stdio.h>

void print_squares() {
    int i;
    for (i = 1; i <= 500; i++) {
        printf("The square of %d is: %d\n", i, i*i);
    }
}

int main() {
    print_squares();
    return 0;
}

