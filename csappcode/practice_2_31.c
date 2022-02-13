//
//  practice_2_31.c
//  csappcode
//
//  Created by JackPan on 2022/2/13.
//

#include <stdio.h>
#include <limits.h>
// WARNING: This code is buggy.
int tadd_ok(int x, int y) {
    int sum = x + y;
    return (sum -x == y) && (sum - y == x);
}

int main(int argc, const char * argv[]) {
    
    int x = INT_MIN;
    int y = INT_MIN;
    // Want to return not equals 1
    printf("tadd_ok return value: %d\n", tadd_ok(x, y));
    return 0;
}

