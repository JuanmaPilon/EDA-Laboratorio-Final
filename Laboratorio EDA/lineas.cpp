#include<iostream>
using namespace std;
#include"definiciones.h"
#include "definicionesRetorno.h"
#include "definicionesFunciones.h"
#include "definicionesFuncionesLineas.h"
#include "definicionesFuncionesPalabras.h"
#include <string.h>
//FUNCIONES RETORNO REFERIDAS A LAS LÍNEAS

//Inserta una linea al final
TipoRetorno InsertarLinea(Linea &l){
	insertar_Linea(l);
	return OK;
}

//Inserta una linea en la posición indicada 
TipoRetorno InsertarLineaEnPosicion(Linea &l, Posicion posicionLinea){
	Linea auxL = l;
	int cont = 1;

	if((posicionLinea >= 1) && (posicionLinea <= cantLineas(l) + 1)){
		
		while(cont < (posicionLinea - 1)){//llegar a la linea
			cont++;
			auxL = auxL->sigLinea;
		}
		if(posicionLinea == 1){
			//insertar al principio
			insertar_Linea_Principio(l);
		}
		else{
			//insertar linea en posicion
			insertar_Linea_Pos(l,posicionLinea);
		}
		return OK;
	}
	else{
		return ERROR;
	}
}
	
//Borra la linea de la posicion indicada
TipoRetorno BorrarLinea(Linea &l,Posicion posicionLinea){

	if(!esVacia(l) && posicionValida(l,posicionLinea)){
		borrar_linea(l,posicionLinea);
		return OK;
	}
	else{
		return ERROR;
	}
}
	
//Borra todas las lineas
TipoRetorno BorrarTodo(Linea &l){
	if (esVacia(l)){
		return OK;
	}else{
		borrar_todo(l);
		return OK;
	}
}
	
//Imprime el texto (todas las palabras ingresadas
TipoRetorno ImprimirTexto(Linea l){
	if(esVacia(l)){//si la lista es vacía
		cout << "Texto vacio. ";
		return OK;
	}
	else{//la lista no es vacia
		Muestro_Texto(l);
		return OK;
	}
}
	
//Comprime el texto
TipoRetorno ComprimirTexto()
{
	return NO_IMPLEMENTADA;
}
