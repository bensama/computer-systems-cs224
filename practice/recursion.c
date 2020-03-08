#import <stdio.h>

int array[] = {1,2,3};

int main() {
    int *rdx = array;
    int rsi  = 3;
    recursive_sum(rdx, rsi);
}

int recursive_sum(int *rdx, int rsi) {
    int eax = 0;        // xorq %eax, %eax
    if(rsi == 0) {      // andq %rsi, %rsi
        goto done;      // je done
    }

    eax = recursive_sum(rdx + 1, rsi - 1) + *rdx;

done:
    return eax;
}