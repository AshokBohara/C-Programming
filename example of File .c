#include <stdio.h>

int main() {
    FILE *filePointer;
    char data[50];

    // Writing to a file
    filePointer = fopen("example.txt", "w");
    if (filePointer == NULL) {
        printf("Error opening file.\n");
        return -1;
    }
    fprintf(filePointer, "This is an example of file handling in C.");
    fclose(filePointer);

    // Reading from a file
    filePointer = fopen("example.txt", "r");
    if (filePointer == NULL) {
        printf("Error opening file.\n");
        return -1;
    }
    fgets(data, 50, filePointer);
    printf("Data from file: %s\n", data);
    fclose(filePointer);

    return 0;
}

