#include <cstdlib>
#include <ctime>;
#include <math.h>

using namespace std;

double compute_variance(int num){
    double exp=0, exp2=0;
    srand(time(NULL));
    
    double *sample = new double [num];
    for (int i=0; i<num; i++){
        sample[i]= (rand() % 1000001) / 1000000.0;
        exp+=sample[i];
        exp2+=pow(sample[i],2);        
    }
    delete [] sample;

    return ((exp2/num)-(pow(exp/num, 2)));
}
