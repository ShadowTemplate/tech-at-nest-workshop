#include <cstdlib>
#include <ctime>
#include <cmath>

double compute_variance(int num) {
    // generate as many random numbers between 0 and 1 as "num"
    // compute and return variance
    srand(time(NULL));
    float numero;
    float quadrati=0;
    float somma=0;
    for(int i=0; i<num; i++){
        numero=(rand()%10000)/10001.0;
        somma+=numero;
        quadrati=quadrati+pow(numero,2);
    }

    return ((quadrati/num)-(pow((somma/num),2)));
}