void cond(long a, long *p) {
    if (p && a > *p) {
        *p = a;
    }
}