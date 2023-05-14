#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
    int i = 1;
    // sort the arguments
    while (i < argc) {
        int j = i + 1;
        while (j < argc) {
            if (strcmp(argv[i], argv[j]) > 0) {
                char *temp = argv[i];
                argv[i] = argv[j];
                argv[j] = temp;
            }
            j++;
        }
        i++;
    }
    // print the arguments
    i = 1;
    while (i < argc) {
        printf("%s\n", argv[i]);
        i++;
    }
    return 0;
}