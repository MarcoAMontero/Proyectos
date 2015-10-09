//Marco Antonio Montero Chavarría
// Método para pasar de una distribución uniforme a a una Rayleigh

#include "Rayleigh.hh"

Rayleigh :: Rayleigh(){
}

Rayleigh :: ~Rayleigh(){
}

double Rayleigh :: generarRayleigh(double sigma){

double X;
double U;
//Se necesita un U tal que U sea una variable aleatoria distribuida uniformemente
// entre 0 y 1 por lo tanto puedo usar lo siguiente:
U = rand() * (1.0 / RAND_MAX);
// Por método de la transformación inversa derivado de Box-Muller
X = sqrt(-2.0 * log( U ) ) * sigma;

return X;

}
