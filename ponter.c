#include <stdio.h>

int main() {
    int num = 10;
    int *ptr;  // Declare a pointer to an integer
    
    ptr = &num; // Assign the address of num to ptr
    
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of ptr: %p\n", ptr); // Printing the value of ptr (address of num)
    printf("Value pointed to by ptr: %d\n", *ptr); // Dereferencing ptr to access the value
    
    return 0;
}

