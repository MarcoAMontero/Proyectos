#include <iostream>
#include "Comunicacion.hh"
#include <cstring>
#include <string>
#include "Gaussian.hh"

Comunicacion :: Comunicacion(){

/*char mensaje[] = {};
char mensaje_resultante[] ={};
*/
}

Comunicacion :: ~Comunicacion(){
}

bool Comunicacion :: send(void){

char mensaje[70]=" "; 
int i; 
cout<< "Escriba el mensaje que quiere enviar:" << mensaje << endl;
cin.getline(mensaje,70);
cout<< "Este es el mensaje que se enviará: \n" << mensaje << endl;
cout<<"Enviando mensaje espere..."<< endl;


int size = strlen(mensaje);
for(i = 0; i < size ; i++){
	canal.push(&mensaje[i]);
	}

return true;

}

bool Comunicacion :: deform_mensaje(double mu,double sigma){

Gaussian gau;
srand(time(NULL));
char mensaje[70];
int gaussian_noise;
int size = strlen(mensaje);
int i; 
	for(i = 0; i < size ; i++){

	gaussian_noise = gau.generarGaussiana(mu,sigma);
	if(gaussian_noise > mu){

	  mensaje[i] = *(canal.top().c_str());
	  mensaje[i] = 'z';
	  canal.pop();
	}
	else{
	  mensaje[i]= *(canal.top().c_str());
	  canal.pop();
	}
  	}	
	

	for(i=0 ; i < size; i++){

	canal.push(&mensaje[i]);
	}

return true;
}



bool Comunicacion :: receive(void){

char mensaje_resultante[70];
int size = strlen(mensaje_resultante);
int i; 
for(i = 0; i < size ; i++){

	mensaje_resultante[i]=*(canal.top().c_str());
	canal.pop();
}

cout << "Procesando mensaje obtenido...." << endl;
cout << "El mensaje recibido es : \n"<< mensaje_resultante << endl;


return true;
}

