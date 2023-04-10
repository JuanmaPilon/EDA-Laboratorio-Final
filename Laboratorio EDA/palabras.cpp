#include<iostream>
using namespace std;
#include"definiciones.h"
#include "definicionesRetorno.h"
#include "definicionesFunciones.h"
#include "definicionesFuncionesLineas.h"
#include "definicionesFuncionesPalabras.h"
#include <string.h>
//FUNCIONES RETORNO REFERIDAS A LAS PALABRAS

//Inserta una palabra en la posicion indicada
//TipoRetorno InsertarPalabraEnLinea(Linea &l, Diccionario &d, Posicion posicionLinea, Posicion posicionPalabra, Cadena palabraAIngresar){
TipoRetorno InsertarPalabraEnLinea(Linea &l, Posicion posicionLinea, Posicion posicionPalabra, Cadena palabraAIngresar){
	if(posicionValida(l,posicionLinea) && posValida(l, posicionLinea, posicionPalabra)){
		Insertar_Palabra(l,posicionLinea,posicionPalabra,palabraAIngresar);
//		apilar (d,palabraAIngresar);
		return OK;
	}
	else{
		return ERROR;
	}
}
	
TipoRetorno ImprimirLinea(Linea l, Posicion posicionLinea){	
	if(!esta(l,posicionLinea)){//si no está
		cout << posicionLinea << ": La posicion de la linea no es valida";
		return ERROR;
	}
	else{//si si está
		Muestro_Linea(l, posicionLinea);
		return OK;
	}	
}
//Elimina la palabra indicada 
TipoRetorno BorrarPalabra(Linea &l, Posicion posicionLinea, Posicion posicionPalabra){
	if(posicionValida(l,posicionLinea) && (posicionPalabra > 0 && posicionPalabra <= cantPalabras(l,posicionLinea)) && (posicionPalabra <= MAX_CANT_PALABRAS_X_LINEA)){
		Borrar_Palabra(l,posicionLinea,posicionPalabra);
		return OK;
	}
	else{
		return ERROR;
	}
}
//Elimina la palabra indicada, todas las veces que aparece en la linea
TipoRetorno BorrarOcurrenciasPalabraEnLinea(Linea &l, Posicion posicionLinea, Cadena palabraABorrar){
	if(posicionValida(l, posicionLinea)){
		borrar_ocurrencia_palabra_l(l, posicionLinea, palabraABorrar);
		return OK;
	}else{
		return ERROR;
	}
}
//Borra la palabra indicada, todas las veces que aparece en el texto
TipoRetorno BorrarOcurrenciasPalabraEnTexto(Linea &l, Cadena palabraABorrar){
	Borrar_Ocurrencias_Palabra_En_Texto(l,palabraABorrar);
	return OK;
}
