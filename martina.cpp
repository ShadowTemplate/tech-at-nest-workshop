//
// Created by martina on 07/04/17.
//
#include <cstdlib>
#include <time.h>
#include <cmath>

double compute_variance(int samples){
        srand(time(NULL));
        double singolo=0, quadrato=0, numero;
        for(int i=0; i<samples; i++){
            numero=(rand()%100001)/100000.0;
            singolo+=numero;
            quadrato+=pow(numero,2);
            }
        return (quadrato/samples)-pow((singolo/samples),2);



}