#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>
using namespace std;

double compute_variance(int num){
    srand(time(NULL));
    double number, s = 0, sq = 0;
    for(int i = 0; i < num; i++){
        number = (rand() % 101) / 100.0;
        s += number;
        sq += pow(number, 2);
    }
    s /= num;
    sq /= num;
    return sq - pow(s, 2);
}