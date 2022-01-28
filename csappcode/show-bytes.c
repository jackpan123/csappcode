//
//  show-bytes.c
//  csappcode
//
//  Created by JackPan on 2022/1/23.
//

#include <stdio.h>
#include <string.h>
typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    size_t i;
    for (i = 0; i < len; i++) {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x) {
    show_bytes((byte_pointer) &x, sizeof(void *));
}

void test_show_bytes(int val) {
    int ival = val;
    float fval = (float) ival;
    int *pval = &ival;
    show_int(ival);
    show_float(fval);
    show_pointer(pval);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    // example 1
//    test_show_bytes(12345);
    
    // example 2
//    const char *cha = "12345";
//    int i = 6;
//    show_bytes((byte_pointer) cha, sizeof(cha));
//    show_bytes((byte_pointer) &i, sizeof(i));
    
    // example 3
//    short x = 12345;
//    short mx = -x;
//    show_bytes((byte_pointer) &x, sizeof(short));
//    show_bytes((byte_pointer) &mx, sizeof(short));
    
    // example 4
//    short int v = -12345;
//    unsigned short uv = (unsigned short) v;
//    printf("v = %d, uv = %u\n", v, uv);
    
    
    // 2.2.4 example2
    unsigned  u = 4294967295u;
    int tu = (int) u;
    printf("u = %u, tu = %d\n", u, tu);
    
    
    return 0;
}
