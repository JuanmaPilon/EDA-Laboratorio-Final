#ifndef DEFINICIONESFUNCIONESPALABRAS_H
#define DEFINICIONESFUNCIONESPALABRAS_H

#include "definiciones.h"

void Insertar_Palabra(Linea &l, Posicion posicionLinea, Posicion posicionPalabra, Cadena palabraAIngresar);
int cantPalabras(Linea l,Posicion posicionLinea);
void mostar_Palabras(Linea l);

void mostrarPalabrasRecursiva(Palabra P, Cadena parola);

void Borrar_Palabra(Linea &l,Posicion posicionLinea, Posicion posicionPalabra);
void borrar_ocurrencia_palabra_l(Linea &l, Posicion posicionLinea, Cadena palabraABorrar);
void Borrar_Ocurrencias_Palabra_En_Texto(Linea &l,Cadena palabraABorrar);
#endif
