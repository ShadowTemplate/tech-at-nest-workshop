#include <iostream>
#include <math.h>
#include "random.h"


// Ref: https://en.wikipedia.org/wiki/Uniform_distribution_(continuous)#Moments

int main() {
    for (int i = 1; i < 9; i++) {
        for (int j = 0; j < 5; j++) {
            int samples = pow(10, i);
            std::cout << "Samples: " << samples << ", variance: " << compute_variance(samples) << std::endl;
        }
        std::cout << std::endl;
    }
    std::cout << "Expected value: " << (double) 1/12 << std::endl;
    return 0;
}