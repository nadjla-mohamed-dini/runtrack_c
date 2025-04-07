#ifndef MANHATTAN_H
#define MANHATTAN_H


typedef struct {
    int a;
    int b;
}distance;

// Macro préprocesseur pour obtenir la valeur absolue
#define ABS(x) ((x) < 0 ? -(x) : (x))


int manhattan(distance p1, distance p2);

#endif 
