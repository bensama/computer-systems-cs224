#import <stdio.h>

int array[] = {1,2,3};

int main() {
    int *rdi = array;
    int rsi  = 3;
    recursive_sum(rdx, rsi);
}

int recursive_sum(int *rdi, int rsi) {
    int eax = 0;        // xorq %eax, %eax
    if(rsi == 0) {      // andq %rsi, %rsi
        goto done;      // je done
    }

    rdi = rdi + 1;
    rsi = rsi - 1;
    eax = recursive_sum(rdi + 1, rsi - 1);
    eax = eax + *rdi;
done:
    return eax;
}