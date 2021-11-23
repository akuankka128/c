#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int isLE() {
    unsigned int construct = 0x0041;
    char *x = (char *) malloc(2);
    char y[2] = "A\0";
    x = (char *)&construct;
    return strcmp(x, y);
}

void main()
{
    int res = isLE();
    printf("%s", res == 0 ? "little-endian" : "big-endian");
}
