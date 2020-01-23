#include <stdio.h>

int main(int agrc, char* argv[]) {
    char str0[] = "abc";
    char str1[4] = {0x44, 0x45, 0x46, 0x0};

    char* ptr_str0 = str0;

    printf("str0 = %p\tstr0 = %s\n", ptr_str0, str0);
    printf("str1 = %p\tstr1 = %s\n", str1, str1);

    printf("*((int *)str0) = 0x%04x\n", *((int *)str0));
    printf("*((int *)str1) = 0x%04x\n", *((int *)str1));

    printf("*((int *)str0) = 0x%lx\n", *((long *)str0));
    printf("*((int *)str1) = 0x%lx\n", *((long *)str1));

    scanf("%s", str0);
    printf("str = %s\n", str0);
    printf("*((int *) str) = 0x%x\n", *((int *)str0));
    return 0;
}