#include "manhattan.h"
#include <stdio.h>


int manathan (distance p1, distance p2) {
    return ABS(p1.x - p2.x) + ABS(p1.y - p2.y);
}
