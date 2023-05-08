#include <stdio.h>

int main(void) {

    FILE *pF = fopen("test.txt", "w");

    fprintf(pF, "Hello, World!");

    fclose(pF);

    // Checks if file was successfully removed

    if (remove("test.txt") == 0) {
        printf("The file was removed successfully!");
    }
    else {
        printf("The file was NOT removed successfully!");
    }

}