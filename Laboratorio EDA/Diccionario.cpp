#include<iostream>
#include "definiciones.h"
#include "definicionesRetorno.h"
#include "definicionesFunciones.h"
#include "definicionesFuncionesLineas.h"
#include "definicionesFuncionesPalabras.h"
#include <string.h>
using namespace std; 

//********  FUNCIONES DEL DICCIONARIO  ***************

Diccionario creoDiccionario(){
	return NULL;
}
Diccionario apilar(Diccionario &d,Cadena Ingreso){
	Diccionario nuevaPalabra;
	nuevaPalabra = new _diccionario;
	nuevaPalabra->pal = Ingreso;
	nuevaPalabra->sigPal = d;
//	cout << nuevaPalabra->pal << " ";
	return nuevaPalabra;
}
bool diccionarioVacio(Diccionario d){
	if(d == NULL){
		return true;
	}
	else{
		return false;
	}
}
void mostrarDiccionario(Diccionario d){
	if(diccionarioVacio(d)){
		return;
	}
	else{
		cout << d->pal << endl;
		mostrarDiccionario(d->sigPal);
	}
}


