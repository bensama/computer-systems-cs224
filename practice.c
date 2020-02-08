#include <stdio.h>

int main() {
    char p[0] = {0x77ad5f32};

    int *a = (int *)p;
    printf("%x", *a);

    return 0;
}