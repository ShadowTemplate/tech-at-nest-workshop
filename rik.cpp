#include <iostream>
#include <math.h>
#include "random.h"

#DEFINE S 1337

// Ref: https://en.wikipedia.org/wiki/Uniform_distribution_(continuous)#Moments

int main() {
	srand(S);
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

double compute_variance(int num) {
	double A * = new double [num];
	for (int i = 0; i < num; i++) {
		A[i] = rand();
	}
}