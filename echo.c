#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char* argv[]) {
    int start = 1;
    bool suppress = false;

    if (argc > 1) {
        if (strcmp(argv[1], "-n") == 0) {
            suppress = true;
            start = 2;
        }
    }

    for (int i = start; i < argc; ++i) {
        printf("%s", argv[i]);
        if (i < argc - 1) {
            printf(" ");
        }
    }

    if (!suppress) {
        printf("\n");
    }
    return 0;
}
