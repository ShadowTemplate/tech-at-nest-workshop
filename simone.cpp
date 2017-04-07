#include "random.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <iostream>
//
// Created by ZanchiPCP on 07/04/2017.
//
double compute_variance(int num) {
    double *x = new double[num];
    for (int k = 0; k < num; k++) {
        x[k] = ((double) rand())/RAND_MAX;
    }
    double M = 0;
    double m = 0;
    for (int k = 0; k < num; k++) {
        m = m + x[k];
    }
    m = m / num;
    for (int k = 0; k < num; k++) {
        M = M + (x[k] - m) * (x[k] - m);
    }
    delete[] x;
    return M / (num - 1);

}

