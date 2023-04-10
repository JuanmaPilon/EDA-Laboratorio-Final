#ifndef DEFINICIONESFUNCIONESLINEAS_H
#define DEFINICIONESFUNCIONESLINEAS_H
#include "definiciones.h"

//Crear la lista de las Líneas
Linea crearLinea();//Inicializar cabezal de la lista de líneas

int cantLineas(Linea l);
void insertar_Linea_Principio(Linea &l);//inserta al principio

void insertar_Linea(Linea &l);//inserta al final

void Muestro_Linea(Linea l, Posicion posicionLinea);

void insertar_Linea_Pos(Linea &l,Posicion n);

void Muestro_Texto(Linea l);

void borrar_linea(Linea &l,Posicion posicionLinea);

void borrar_todo(Linea &l);



#endif
