#include <stdio.h>

int main() {
    void *p = "0x7d48";
    int *a = (int *)p;

    printf("%x\n", *a);
    return 0;
}