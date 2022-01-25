//
//  practice_2_12.c
//  csappcode
//
//  Created by JackPan on 2022/1/25.
//
typedef unsigned char * byte_pointer;
#include <stdio.h>

void show_bytes(byte_pointer start, size_t len) {
    int i = len - 1;
    for (; i >= 0; i--) {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}

void transfer(int x) {
    int variable = 0xFF;
    int a = x & variable;
    show_int(a);
    int b = ~(x ^ variable);
    show_int(b);
    int c = x | variable;
    show_int(c);
}



int main(int argc, const char * argv[]) {
    transfer(0x8765);
}

