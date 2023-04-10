#ifndef DEFINICIONESFUNCIONES_H
#define DEFINICIONESFUNCIONES_H

#include "definiciones.h"
//DEFINICIONES DE LAS FUNCIONES AUXILIARES

//Crear la lista de las Palabras
Palabra crearPalabra();//Inicializar cabezal de la lista de palabras

bool esta(Linea l, Posicion nro);

//Imprime el resultado obtenido de las funciones realizadas
void ImprimirResultado(int retorno);

bool posicionValida(Linea l, Posicion n);
//recorre para verificar si la la linea indicada existe

bool esVacia(Linea l);

bool posValida(Linea l,Posicion posicionLinea,Posicion posicionPalabra);
#endif
