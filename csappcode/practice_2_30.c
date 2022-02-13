//
//  practice_2_30.c
//  csappcode
//
//  Created by JackPan on 2022/2/13.
//

#include <stdio.h>
#include <limits.h>
int tadd_ok(int x, int y) {
    int sum = x + y;
    if (x > 0 && y >0 && sum <= 0) {
        return -1;
    }
    
    if (x < 0 && y < 0 && sum >= 0) {
        return -1;
    }
    
    return 1;
}

int main(int argc, const char * argv[]) {
    
    int x = INT_MAX;
    int y = 3;
    // postive overflow -1
    printf("tadd_ok return value: %d\n", tadd_ok(x, y));
    
    int x1 = INT_MIN;
    int y1 = INT_MIN;
    // negative overflow -1
    printf("tadd_ok return value: %d\n", tadd_ok(x1, y1));
    
    int x2 = 6;
    int y2 = -3;
    // negative overflow 1
    printf("tadd_ok return value: %d\n", tadd_ok(x2, y2));
    return 0;
}
