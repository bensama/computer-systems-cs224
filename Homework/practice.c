#include <stdio.h>

#define SIZE 24

int main() {
    char str[SIZE];
    long *u_ptr = (long*)str;
    int *i_ptr = (int *)(u_ptr + 1);
    char *c_ptr = (char *)(i_ptr + 2);

    scanf("%lx %x %x %s", u_ptr, i_ptr, i_ptr + 1, c_ptr);

    printf("str = %s\n", str);  

    return 0;
}
//str = I <3 cs 224!! (*ˆ_ˆ*)