//
//  practice_3_5.c
//  csappcode
//
//  Created by JackPan on 2022/2/28.
//

#include <stdio.h>

void decode1(long *xp, long *yp, long *zp) {
    long x = *xp;
    long y = *yp;
    long z = *zp;
    *yp = x;
    *zp = y;
    *xp = z;
}
