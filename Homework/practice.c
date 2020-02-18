#include <stdio.h>
#define SIZE 4
int main()
{
    int a[SIZE];
    char *s_ptr = (char *)(a + 1);
    scanf("%x", a);
    scanf("%s", s_ptr);
    scanf("%x", &a[3]);
    printf("%s", (char *)a);
    return 0;
}
