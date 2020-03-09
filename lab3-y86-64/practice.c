#include <stdio.h>

int main() {
    int a = 9;
    // int b = 9;
    int c;

    // scanf( "%d %d", &a, &b);

    c = (a ^ a);

    printf("%d\n", c);
    return 0;
}