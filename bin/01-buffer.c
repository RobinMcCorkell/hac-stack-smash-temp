#include <stdio.h>
#include <string.h>

int main(void) {
    int a = 42;
    char string[16];

    strcpy(string, "hello world");
    printf("string is %s\n", string);
    printf("a is %d\n", a);

    return 0;
}
