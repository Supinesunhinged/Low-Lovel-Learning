#include <stdio.h>

int main(void) {
    
    FILE *pF = fopen("test.txt", "r");
    char buffer[255];

    if(pF == NULL) {
        printf("Unable to open file!\n");
    }
    else {
        while(fgets(buffer, 255, pF) != NULL) {
            printf("%s", buffer);
        }
    }
}