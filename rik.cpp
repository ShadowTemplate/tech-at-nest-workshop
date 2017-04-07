#include <iostream>
#include <math.h>
#include "random.h"

#DEFINE S 1337

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
	double * A = new double [num];
	double T = 0, M = 0, V = 0;
	for (int i = 0; i < num; i++) {
		A[i] = rand();
	}
	for (int i = 0; i < num; i++) {
		T += A[i];
	}
	M = T / num;
	T = 0;
	for (int i = 0; i < num; i++) {
		T += (A[i] - M) * (A[i] - M);
	}
	V = T / num;
	delete [] A;
	return V;
}