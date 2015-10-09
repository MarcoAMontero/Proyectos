#include <iostream>
#include "Comunicacion.hh"
#include <cstring>
#include <string>
#include "Gaussian.hh"
#include "Rayleigh.hh"
Comunicacion :: Comunicacion(){
}

Comunicacion :: ~Comunicacion(){
}

//método que envia un mensaje por el canal

int Comunicacion :: inicializar(void){

int forma;
cout<< "Defina el tipo de ruido que desea en el canal: \n 1.Gaussiano \n 2.Rayleigh" << endl;
cin>>forma;
if(forma == 1)
{
cout << "Ha elegido un canal con ruido gaussiano" << endl;

}
else if(forma == 2){

cout << "Ha elegido un canal con ruido rayleigh" << endl;
}
std::cin.ignore();
cout << endl;
return forma;

}

bool Comunicacion :: send(void){

char mensaje[70]; 
int i; 
cout<< "Escriba el mensaje que quiere enviar:" << endl;
cin.getline(mensaje,70);
cout<< endl;
cout<< "Procesando..."<< endl;
cout<< endl;
cout<< "Este es el mensaje que se enviará: \n" << mensaje << endl;
cout<<"Enviando mensaje espere..."<< endl;


int size = strlen(mensaje);

for(i = 0; i < size ; i++){
	canal.push(&mensaje[i]);
	}

return true;

}

//método que modela el canal que se utiliza

bool Comunicacion :: deform_mensaje(double mu,double sigma,int tipo){

Gaussian gau;
Rayleigh ray;
srand(time(NULL));
char mensaje_canal[70];
double gaussian_noise;
double rayleigh_noise;
int size = strlen(mensaje_canal);
int i; 
double pi = 3.1415;
	cout<< endl;
	cout<< "El mensaje está pasando por el canal.."<< endl;
	cout<< "Espere ..... "<< endl;

	if (tipo == 1){
	for(i = 0; i < size ; i++){
		
	gaussian_noise = gau.generarGaussiana(mu,sigma);
		
		if(gaussian_noise > mu + sigma){// si es mayor a la media más la desviación

	  	mensaje_canal[i] = mensaje_canal[i] + (int)floor(gaussian_noise);
		
	  	
		}
		else{

	  	mensaje_canal[i]= *(canal.top().c_str());
		
		}
	canal.pop();
  	}
	}
	else if(tipo == 2){
	
	for(i = 0; i < size ; i++){
		
	rayleigh_noise = ray.generarRayleigh(sigma);
		
		if(rayleigh_noise > (sigma * sqrt( pi / 2.0 )) + sigma){  // si el valor obtenido es mayor a la media + la desviación

	  	mensaje_canal[i] = ' ';
		
	  	
		}
		else{

	  	mensaje_canal[i]= *(canal.top().c_str());
		
		}
	canal.pop();
  	}
	}	

	for(i=0 ; i < size; i++){

	canal.push(&mensaje_canal[i]);
	}
	

return true;
}

/// método que recibe la información

bool Comunicacion :: receive(void){

char mensaje_resultante[70];
int size = strlen(mensaje_resultante);
int i; 
for(i = 0; i < size ; i++){

	mensaje_resultante[i]=*(canal.top().c_str());
	canal.pop();
}
cout << endl;
cout << "Procesando mensaje obtenido...." << endl;
cout << endl;
cout << "El mensaje recibido es : \n"<< mensaje_resultante << endl;
cout << endl;


return true;
}

