#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int rotamt = 13;
    char *rot = argv[1];

    for(int i=0; rot[i]!='\0'; i++) {
        int cc = (int)(rot[i]);
        int f = (int)(cc>0x60&&cc<0x7b);
        int s = (int)(cc>0x40&&cc<0x5b);

        // branchless programming :woozy_face:
        cc=(((cc-97*f+rotamt*f)%(26+101*!f)+97*f)-65*s+rotamt*s)%(26+101*!s)+65*s;
        rot[i] = (char)cc;
    }

    printf("%s\n", rot);
    return 0;
}
