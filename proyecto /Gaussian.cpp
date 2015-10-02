// Marco Antonio Montero Chavarría
// Generar ruido gaussiano usando rand() y método Box- Muller
#include "Gaussian.hh"
#include <iostream>
Gaussian :: Gaussian(){
}

Gaussian :: ~Gaussian(){
}

double Gaussian :: generarGaussiana(double mu, double sigma){ 
// usando método Marsaglia derivado de Box-Muller

	double w;
	double z0; 
	double z1 = 0;
	double u1, u2;
	bool segundo_valor;
	segundo_valor = true;

	if (!segundo_valor){		

	z0=z1;
	segundo_valor = true;// se ocupa usar ambos Z generados pero no se devuelven los dos al mismo tiempo
	}
	else{
	
		do
		{
	    	u1 = 2*(rand()/ (double) RAND_MAX) -1;// hago que u1 y u2 sean uniformes pero definidos 
	    	u2 = 2*(rand()/ (double) RAND_MAX) -1;// entre -1 y 1
	    	w=  u1 * u1 + u2 * u2;
		}
		while ( w == 0.0 || w >=1.0 );// tomo solo los puntos que esten en el circulo unitario

	//z0 = sqrt(-2.0 * log(u1)) * cos(tau * u2); //formulas box muller
	//z1 = sqrt(-2.0 * log(u1)) * sin(tau * u2);
	w = sqrt( (-2.0 * log( w ) ) / w ); //VERSIÓN MODIFICADA polar Marsaglia
	z0 = u1 * w;
	z1 = u2 * w;
	segundo_valor = false;
	}
	return (z0 * sigma + mu);
}

