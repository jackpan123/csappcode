//
//  mstore.c
//  csappcode
//
//  Created by JackPan on 2022/2/19.
//

#include <stdio.h>

long mult2(long, long);

void multstore(long x, long y, long *dest) {
    long t = mult2(x, y);
    *dest = t;
}
