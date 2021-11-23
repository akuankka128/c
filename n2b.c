#include <stdlib.h>
#include <stdio.h>
#include <math.h>

char *n2b(long x, int y)
{
    char *t = (char *) malloc(y * sizeof(char));
    int aux = 0;

    for(; x != 0; aux++) {
        // no branches allowed
        t[y - aux] = '0' + 1 * (x & 1);
        x = x >> 1;
    }

    t[aux] = '\0';
    return t;
}

void main(int argc, char* argv[])
{
    long num = strtol(argv[1], NULL, 10);
    int bits = (int)log2(num);
    printf("%s", n2b(num, bits));
}
