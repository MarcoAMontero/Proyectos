// Marco Antonio Montero Chavarría
#include "Gaussian.hh"
#include "Comunicacion.hh"
#include <iostream>
#include "Rayleigh.hh"

int main(void){
Gaussian gau; 
Comunicacion com;
Rayleigh ray;
int tipo;

double mu = 10.0;
double sigma = 3.0;

///////////////////////////////////////////////////////////
///Inicialización canal //////////////////////////////
tipo = com.inicializar();


////////////////prueba de distribución////////////////////

//double valores_gau[100];
int bin[20]={0};
int j;
int i;
double valor;
srand(time(NULL));

if(tipo == 1){
cout << "Histograma creado a partir de valores generados por la clase Gaussian"<<endl;

// Se obtiene un pequeño histograma para la función deseada.
for(i = 0 ; i < 500; i++){
   valor = gau.generarGaussiana(mu,sigma);
   int j = (int)floor(valor);

 if(j >=0 &&  j < 20){
	bin[j]++;
	}
}

for(i= 0; i < 20;i++){
	for( j= 0 ; j < bin[i]; j++){
	cout << "*";
	}
	cout << endl;
}
}
else if(tipo==2){

cout << "Histograma creado a partir de valores generados por la clase Rayleigh"<<endl;

// Se obtiene un pequeño histograma para la función deseada.
for(i = 0 ; i < 400; i++){
   valor = ray.generarRayleigh(sigma);
   int j = (int)floor(valor);

 if(j >=0 &&  j < 20){
	bin[j]++;
	}
}

for(i= 0; i < 20;i++){
	for( j= 0 ; j < bin[i]; j++){
	cout << "*";
	}
	cout << endl;
}

}
////// Transmision de un mensaje a través del canal con el ruido deseado
com.send();
com.deform_mensaje(mu,sigma,tipo);
com.receive();


}
