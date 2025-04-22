#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    for (int i = 1; i < argc; ++i) {
        // Simple setup for CLI Args
        if (strcmp(argv[i], "-V") == 0) {
            printf("Success");
            return 0;
        }

        printf("%s", argv[i]);
        if (i < argc - 1) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
