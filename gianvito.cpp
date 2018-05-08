#include <cstdlib>

#define SEED 42

using namespace std;

double compute_variance(int num) {
    //srand(SEED); // srand(time(NULL));

    // generate the sample (numbers between 0 and 1)
    double *sample = new double[num];
    for (int i = 0; i < num; i++) {
        sample[i] = (double) rand() / (double) RAND_MAX;
    }

    // compute the mean
    double mean = 0;
    for (int i = 0; i < num; i++) {
        mean += sample[i];
    }
    mean /= (double) num;

    // compute the variance
    double variance = 0;
    for (int i = 0; i < num; i++) {
        double dtmp = sample[i] - mean;
        variance += dtmp * dtmp;
    }
    delete[] sample;
    return variance / (double) num;
}