#include <iostream>
#include "Comunicacion.hh"
#include <cstring>
#include "Gaussian.hh"

Comunicacion :: Comunicacion(){

/*char mensaje[65] = {};
char mensaje_resultante[65] ={};
*/
}

Comunicacion :: ~Comunicacion(){
}

bool Comunicacion :: send(void){

char mensaje[65] = {"Estructuras de datos y algoritmos es increiblemente divertido"};

cout<< "Este es el mensaje que se enviará: \n" << mensaje << endl;
cout<<"Enviando mensaje espere..."<< endl;

for(int i = 0; i <66 ; i++){
	canal.push(mensaje[i]);
	}

return true;

}

bool Comunicacion :: deform_mensaje(double mu,double sigma){

Gaussian gau;
srand(time(NULL));
char mensaje[65];
int gaussian_noise;

	for(int i = 0; i < 66; i++){

	gaussian_noise = gau.generarGaussiana(mu,sigma);
	if(gaussian_noise > mu){

	  mensaje[i]= canal.top();
	  mensaje[i] = 'z';
	  canal.pop();
	}
	else{
	  mensaje[i]= canal.top();
	  canal.pop();
	}
  	}	
	

	for(int i=0 ; i <66; i++){

	canal.push(mensaje[i]);
	}

return true;
}



bool Comunicacion :: receive(void){

char mensaje_resultante[65];
for(int i = 0; i < 66; i++){

	mensaje_resultante[i]=canal.pop();
}

cout << "Procesando mensaje obtenido...." << endl;
cout << "El mensaje recibido es : \n"<< mensaje_resultante << endl;


return true;
}

