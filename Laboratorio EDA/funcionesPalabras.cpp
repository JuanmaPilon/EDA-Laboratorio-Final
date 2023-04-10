#include<iostream>
using namespace std;
#include"definiciones.h"
#include "definicionesRetorno.h"
#include "definicionesFunciones.h"
#include "definicionesFuncionesLineas.h"
#include <string.h>

void Insertar_Palabra(Linea &l, Posicion posicionLinea, Posicion posicionPalabra, Cadena palabraAIngresar){
	int contPal = 0;//palabras
	int contLin = 1;//lineas
	Linea auxL;//tiene la linea donde queremos insertar
	auxL = l;
	Palabra auxP;//cabezal de las palabras
	Palabra nuevaPalabra;//IGUAL AL CABEZAL DE LAS PALABRAS
	nuevaPalabra = new _word();
	nuevaPalabra->palabrinia = palabraAIngresar;
	
	while(contLin < posicionLinea){//llegar a la linea
		auxL = auxL->sigLinea;
		contLin++;
	}
	auxP = auxL->grupoPalabra;
	
	if(posicionPalabra == 1){//insertar al principio
		nuevaPalabra->sigPalabrinia = auxL->grupoPalabra;
		auxL->grupoPalabra = nuevaPalabra;
	}
	else{//insertar en otro lado
		contPal = 1;		
		while(contPal < posicionPalabra - 1){//busco la posicion donde ingrersar la palabra
			contPal++;
			auxP = auxP->sigPalabrinia;
		}
		nuevaPalabra->sigPalabrinia = auxP->sigPalabrinia;
		auxP->sigPalabrinia = nuevaPalabra;				
	}
}
void Borrar_Palabra(Linea &l,Posicion posicionLinea, Posicion posicionPalabra){
	int cont = 1;
	Linea auxL = l;
	int contLin = 1;
	Palabra borrar;
	
	while(contLin != posicionLinea){//llegar a la linea
		auxL = auxL->sigLinea;
		contLin++;
	}
	Palabra auxP = auxL->grupoPalabra;

	if(posicionPalabra == 1){
		borrar = auxP;
		auxL->grupoPalabra = auxP->sigPalabrinia;
	}
	else{
		while((auxP != NULL) && cont < (posicionPalabra - 1)){//llega a la Palabra
			cont ++;
			auxP = auxP->sigPalabrinia;
		}
		borrar = auxP->sigPalabrinia; //Palabra a borrar
		auxP->sigPalabrinia = borrar->sigPalabrinia;
		
		
	}
	delete borrar;
}	
//retorna la cantidad de palabras de una linea
int cantPalabras(Linea l,Posicion posicionLinea){
	int cont = 1;
	int contP = 0;
	Linea auxL = l;
	Palabra auxP;
	while(cont < posicionLinea){
		cont++;
		auxL = auxL->sigLinea;
	}
	auxP = auxL->grupoPalabra;
	if(auxP == NULL){
		return 0;
	}
	else{
		while(auxP != NULL){
			contP++;
			auxP = auxP->sigPalabrinia;
		}
		return contP;
	}
}

void borrar_ocurrencia_palabra_l(Linea &l, Posicion posicionLinea, Cadena palabraABorrar){
	Linea auxL = l;
	int contLin = 1;
	int contPal = 1;
	int cantidadPalabras = cantPalabras(l, posicionLinea);
	Posicion posicionPalabra = 1;
	
	while(contLin < posicionLinea){//llegar a la linea
		auxL = auxL->sigLinea;
		contLin++;
	}
	Palabra auxP = auxL->grupoPalabra;

	while(contPal <= cantidadPalabras){
		if(!strcmp(auxP->palabrinia,palabraABorrar)){
			auxP = auxP->sigPalabrinia;
			Borrar_Palabra(auxL,1,posicionPalabra);	
		}
		else{	
			posicionPalabra++;
			auxP = auxP->sigPalabrinia;
		}
		contPal++;
	}
}
void Borrar_Ocurrencias_Palabra_En_Texto(Linea &l,Cadena palabraABorrar){
	int cantidadLineas = cantLineas(l);
	Linea auxL = l;
	for(int i=0; i < cantidadLineas;i++){
		borrar_ocurrencia_palabra_l(auxL,1,palabraABorrar);
		auxL = auxL->sigLinea;
	}
}




