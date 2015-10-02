// Marco Antonio Montero Chavarría
#include "Gaussian.hh"
#include "Comunicacion.hh"
#include <iostream>


int main(void){
Gaussian gau; 
Comunicacion com;
//double temp;
double mu = 2;
double sigma = 0.2;


//srand(time(NULL));//seed para ran()


///////////////////////////////////////////////////////////
////Transmisión de un mensaje//////////////////////////////

com.send();
com.deform_mensaje(mu,sigma);
com.receive();




////////////////////////////////////////////////////////
/*for(int i=0; i<100; ++i){
	temp = gau.generarGaussiana(mu,sigma);
	vector[i] = temp;		
}
*/
/*
char mensaje[10] = "Hello";

cout << mensaje[2] << endl;

mensaje[2] = 'Z';
cout << mensaje[2] << endl;
*/
}
