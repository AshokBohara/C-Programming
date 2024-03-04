#include <stdio.h>

int main() {
    int x = 10;
    int y = 5;
    int max_value;

    // Using the conditional operator to determine the maximum value
    max_value = (x > y) ? x : y;

    printf("The maximum value is: %d\n", max_value);

    return 0;
}

