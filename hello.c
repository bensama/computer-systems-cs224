#include <stdio.h>

int main (int argc, char* argv[]) {
    char c = 0xC1;
    int x = 0x76543280;

    printf("%x\n", (int)c);
    printf("%x\n", (unsigned int)c);
    printf("%x\n", (int)((unsigned char)c));

    printf("\n%x\n", x);
    printf("%x\n", (unsigned char)x);
    printf("%x\n", (int)((unsigned char)x));
    printf("%x\n", *((int *)((char *) &x)));
    printf("%x\n", *((unsigned char *)&x));
    printf("%x\n", *((char *)&x));
    return 0;
}