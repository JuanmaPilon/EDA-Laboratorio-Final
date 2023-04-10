#ifndef DEFINICIONES_H
#define DEFINICIONES_H
//DEFINICIONES GENERALES
#define MAX_CANT_PALABRAS_X_LINEA 3

//************  ESTRUCTURAS GENERALES  *****************************
typedef char* Cadena;

enum _retorno{
	OK, 
	ERROR, 
	NO_IMPLEMENTADA
};

typedef enum _retorno TipoRetorno;

typedef unsigned int Posicion;

//*************  ESTRUCTURA PALABRAS  ******************************

typedef struct _word{
	Cadena palabrinia; //donde se guarda la palabra ingresada 
	_word *sigPalabrinia; //puntero a la siguiente palabra
}*Palabra;

//*************  ESTRUCTURA LINEAS  *********************************
typedef struct _line{
	Palabra grupoPalabra; //puntero que indica las palabras ingresadas en la linea
	_line *sigLinea; //puntero a la siguiente linea
}*Linea;

//**************  ESTRUCTURA DICCIONARIO  ****************************
typedef struct _diccionario{
	Cadena pal;
	_diccionario *sigPal;
}*Diccionario;

#endif


