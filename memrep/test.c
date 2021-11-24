#include <stdio.h>
#include "memrep.h"

void main()
{
    unsigned char       foo = MEMREP1(        "A" );
    unsigned short      bar = MEMREP2(       ":v" );
    unsigned long       baz = MEMREP4(     "Enby" );
    unsigned long long  qux = MEMREP8( "xyzzybar" );

    printf(  "foo= 0x%x @ %p\n", foo, &foo  );
    printf(  "bar= 0x%x @ %p\n", bar, &bar  );
    printf(  "baz= 0x%lx @ %p\n", baz, &baz  );
    printf(  "qux= 0x%llx @ %p\n", qux, &qux  );
}