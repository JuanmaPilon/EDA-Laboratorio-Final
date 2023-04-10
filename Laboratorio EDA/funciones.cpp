#include<iostream>
using namespace std;
#include"definiciones.h"
#include "definicionesRetorno.h"
#include "definicionesFunciones.h"
#include "definicionesFuncionesLineas.h"
#include "definicionesFuncionesPalabras.h"
#include <string.h>
//FUNCIONES CREADAS AUXILIARES

//Crear la lista de las Palabras	
Palabra crearPalabra(){//Inicializar cabezal de la lista     
	return NULL;
};
	
//indica si la lista es vacia o no	
bool esVacia(Linea l){
	if(l == NULL){
		return true;
	}
	else{
		return false;
	}
}
	
//Imprime la linea indicada
bool esta(Linea l, Posicion nro){
	Linea aux = l;
	bool esta = false;
	int cont = 1;
	while(l != NULL){//cambiar a esVacia
		if(nro == cont){
			esta = true;
			l = NULL;//para salir del while
		}
		else{
			aux = aux->sigLinea;
			cont++;
		}
	}
	return esta;
}

//valida la posición de la linea
bool posicionValida(Linea l, Posicion n){
	int cont = 1;//hay uno
	Linea aux = l;
	if(esVacia(l) && n == 1){
		return true;
	}
	if(esVacia(l) && n != 1){
		return false;
	};
	while(n != cont && l->sigLinea != NULL){
		aux = aux->sigLinea;
		cont++;		
	}
	if(n == cont){
		return true;
	}
	else{
		return false;
	}
}

//valida la pos de la palabra
bool posValida(Linea l,Posicion posicionLinea,Posicion posicionPalabra){
	int cont = 0 ;
	int contLin = 1;
	Palabra auxP;//cabezal de las palabras
	Linea auxL;
	auxL = l;	

	if(!esVacia(l)){
		while(contLin < posicionLinea && auxL != NULL){//llegar a la linea
			auxL = auxL->sigLinea;
			contLin++;
		}
		if(contLin < posicionLinea || auxL == NULL){//pide una linea que no hay
			return false;
		}
	}
	else{
		return false;
	}
	auxP = auxL->grupoPalabra;
	int cantidadP = cantPalabras(l,posicionLinea);
	if(posicionPalabra > 0 && posicionPalabra <= MAX_CANT_PALABRAS_X_LINEA && cantidadP < MAX_CANT_PALABRAS_X_LINEA ){
		return true;	
	}
	else{
		return false;
	}
}
	
void ImprimirResultado(int retorno){//Imprime el resultado obtenido de las funciones realizadas
	switch(retorno){
		case OK:
			cout << "Resultado: OK";
			break;
		case ERROR:
			cout << "Resultado: ERROR";
			break;
		case NO_IMPLEMENTADA:
			cout << "Resultado: NO_IMPLEMENTADA";
			break;
	}
	cout << endl << endl;
}
	

