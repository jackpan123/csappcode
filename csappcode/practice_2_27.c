//
//  practice_2_27.c
//  csappcode
//
//  Created by JackPan on 2022/2/13.
//

#include <stdio.h>
#include <limits.h>
int uadd_ok(unsigned x, unsigned y) {
    int sum = x + y;
    printf("sum is %d\n", sum);
    return sum < x || sum < y ? -1 : 1;
}

int main(int argc, const char * argv[]) {
    
    unsigned x = UINT_MAX;
    unsigned y = 3;
    printf("uadd_ok return value: %d\n", uadd_ok(x, y));
    return 0;
}
