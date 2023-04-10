#ifndef DEFINICIONESRETORNO_H
#define DEFINICIONESRETORNO_H

#include "definiciones.h"
//DEFINICIONES DE LAS FUNCIONES DE TipoRetorno
/*estas son las solicitadas por el lab*/

//Inserta una linea al final
TipoRetorno InsertarLinea(Linea &l);
//Inserta una linea en la posición indicada 
TipoRetorno InsertarLineaEnPosicion(Linea &l, Posicion posicionLinea);
//borra la linea de la posicion indicada
TipoRetorno BorrarLinea(Linea &l, Posicion posicionLinea);
//Borra todas las lineas
TipoRetorno BorrarTodo(Linea &l);
//Borra la palabra indicada, todas las veces que aparece en el texto
TipoRetorno BorrarOcurrenciasPalabraEnTexto(Linea &l, Cadena palabraABorrar);
//Imprime el texto (todas las palabras ingresadas
TipoRetorno ImprimirTexto(Linea l);
//Comprime el texto
TipoRetorno ComprimirTexto();
//inserta una palabra en la posicion indicada
TipoRetorno InsertarPalabraEnLinea(Linea &l, Posicion posicionLinea, Posicion posicionPalabra, Cadena palabraAIngresar);
//Imprime la linea indicada
TipoRetorno ImprimirLinea(Linea l, Posicion posicionLinea);
//Elimina la palabra indicada 
TipoRetorno BorrarPalabra(Linea &l, Posicion posicionLinea, Posicion posicionPalabra);
//Elimina la palabra indicada, todas las veces que aparece en la linea
TipoRetorno BorrarOcurrenciasPalabraEnLinea(Linea &l, Posicion posicionLinea, Cadena palabraABorrar);

#endif
