#include <stdio.h>

int main(int argc, char *argv[])
{
    char c = 0xC1;
    int x = 0x76543280;

    printf("%x\n", (int)c);
    printf("%x\n", (unsigned int)c);
    printf("%x\n", (int)((unsigned char)c));

    printf("\n%0x\n", x);
    printf("%0x\n", (unsigned char)x);
    printf("%0x\n", (int)((unsigned char)x));
    printf("%0x\n", *((int *)((char *)&x)));
    printf("%0x\n", *((unsigned char *)&x));
    printf("%0x\n", *((char *)&x));

    return 0;
}