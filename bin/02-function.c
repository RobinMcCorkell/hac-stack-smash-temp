#include <stdio.h>
#include <stdlib.h>

void foo(void) {
    printf("hello from foo\n");
}

void hijack(void) {
    printf("HIJACKING COMPLETE\n");
    exit(0);
}

int main(void) {
    foo();
    printf("back in main\n");
    return 1;
}
