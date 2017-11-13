#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: %s <string>\n", argv[0]);
        return 1;
    }

    char buffer[64];
    printf("location of buffer = %p\n", buffer);

    strcpy(buffer, argv[1]);

    printf("Return address: %p\n", __builtin_return_address(0));

    return 0;
}
