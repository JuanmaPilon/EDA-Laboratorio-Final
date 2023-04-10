#include<iostream>
using namespace std;
#include"definiciones.h"
#include "definicionesRetorno.h"
#include "definicionesFunciones.h"
#include "definicionesFuncionesLineas.h"
#include "definicionesFuncionesPalabras.h"
#include <string.h>

//Crear la lista de las Líneas
Linea crearLinea(){//Inicializar cabezal de la lista
	return NULL;
};
	
int cantLineas(Linea l){
	int cont = 0;
	Linea auxL = l;
	while(auxL->sigLinea != NULL){
		cont++;
		auxL = auxL->sigLinea;
	}
	return cont;
}

//insertar linea al principio	
void insertar_Linea_Principio(Linea &l){
	Linea nuevaLinea = NULL;
	nuevaLinea = new _line;
	nuevaLinea->grupoPalabra = NULL;
	nuevaLinea->sigLinea = l;	
	l = nuevaLinea;
}
	
void insertar_Linea_Pos(Linea &l,Posicion n){//inserta linea en otro lado / crear linea vacia 
	int cont = 1;
//	Linea ant;
	Linea auxL;
	Linea nuevaLinea = NULL;
	nuevaLinea = new _line;
	nuevaLinea->grupoPalabra = NULL;
	auxL = l;

	while(cont < (n - 1)){//llegar a la linea anterior
		cont++;
		auxL = auxL->sigLinea;
	}
	nuevaLinea->sigLinea = auxL->sigLinea;
	auxL->sigLinea = nuevaLinea;
}

void insertar_Linea(Linea &l){//inserta linea al final / crear linea vacia 
	Linea nuevaLinea = NULL;//nueva linea apunta a NULL
	nuevaLinea = new _line();
	nuevaLinea->grupoPalabra = NULL;
	Linea ultimaLinea = l;//auxiliar que guarda el cabezal
	nuevaLinea->sigLinea = NULL;
	
	if(esVacia(l)){
		l = nuevaLinea;
	}
	else{
		while(ultimaLinea->sigLinea != NULL){//existe una linea
			ultimaLinea = ultimaLinea->sigLinea; 
		}
		ultimaLinea->sigLinea  = nuevaLinea;
	}
}

void Muestro_Linea(Linea l, Posicion posicionLinea){
	Linea auxL = l;
	Posicion cont = 1;
	while(cont < posicionLinea){
		auxL = auxL->sigLinea;
		cont++;
	}
	Palabra auxP = auxL->grupoPalabra;
	cont = 0;
	cout << posicionLinea << ": ";
	while(cont < cantPalabras(auxL,1)){
		cont++;
		cout << auxP->palabrinia << " ";
		auxP = auxP->sigPalabrinia;
	}
	cout << endl;
}


void Muestro_Texto(Linea l){
	for(int i=1;i <= cantLineas(l)+1; i++){
		Muestro_Linea(l,i);
	}
	cout << "FIN" << endl;
}

	
void borrar_linea(Linea &l,Posicion posicionLinea){
	int cont = 1;
	Linea aux = l;
	Linea borrar;
	int cantidadPalabras = cantPalabras(l, posicionLinea);

		if(posicionLinea == 1){
			borrar = l; 
			l = aux->sigLinea;
		}
		else{
			while(!esVacia(aux) && cont < (posicionLinea-1)){//llega a la linea
				cont ++;
				aux = aux->sigLinea;
			}
			borrar = aux->sigLinea; //linea a borrar
			aux->sigLinea = borrar->sigLinea;//
			//borrar todas las palabras
		}
		for(int i=1; i <= cantidadPalabras;i++){
			Borrar_Palabra(borrar,1,1);
		}
		delete borrar;
}
	
void borrar_todo(Linea &l){
	int cantidadLineas = cantLineas(l);
	for(int i=0; i <= cantidadLineas;i++){
		borrar_linea(l,1);
	}
}
