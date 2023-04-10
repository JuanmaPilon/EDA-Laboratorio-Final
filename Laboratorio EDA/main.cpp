#include<iostream>
#include "definiciones.h"
#include "definicionesRetorno.h"
#include "definicionesFunciones.h"
#include "definicionesFuncionesLineas.h"
#include "definicionesFuncionesPalabras.h"
#include "defDiccionario.h"
#include <string.h>
using namespace std; 

int main (int argc, char *argv[]) {
	Linea cabezalLinea = NULL;//cabezalLinea cabezal de la lista de Lineas, lo que se pasa como parámetros
	Cadena Ingreso = NULL;
	Diccionario palabras;
	palabras = creoDiccionario();
	
// ************** INSERTAR LINEAS ********************************************
	cout << "# # # # # # # # # #  INSERTAR LINEAS  # # # # # # # # # #" << endl;
	cout << "InsertarLinea: ";
	ImprimirResultado(InsertarLinea(cabezalLinea));
	cout << "InsertarLinea: ";
	ImprimirResultado(InsertarLinea(cabezalLinea));
	cout << "InsertarLinea: ";
	ImprimirResultado(InsertarLinea(cabezalLinea));
	cout << "InsertarLinea: ";
	ImprimirResultado(InsertarLinea(cabezalLinea));
	cout << "InsertarLinea: ";
	ImprimirResultado(InsertarLinea(cabezalLinea));

// *************** INSERTAR PALABRAS *****************************************
	cout << "# # # # # # # # # #  INSERTAR PALABRAS  # # # # # # # # # #" << endl;
// ************** EN LINEA 1 *************************************************
	Ingreso = new char[20];
	strcpy(Ingreso,"palabra1");
	ImprimirResultado(InsertarPalabraEnLinea(cabezalLinea,1,1,Ingreso));
	apilar(palabras,Ingreso);
	
	Ingreso = new char[20];
	strcpy(Ingreso,"palabra1");
	ImprimirResultado(InsertarPalabraEnLinea(cabezalLinea,1,2,Ingreso));
	apilar(palabras,Ingreso);
	
	Ingreso = new char[20];
	strcpy(Ingreso,"palabra1.2");
	ImprimirResultado(InsertarPalabraEnLinea(cabezalLinea,1,3,Ingreso));
	apilar(palabras,Ingreso);
	
	cout << "Palabra en posicion erronea: " << endl;
	Ingreso = new char[20];
	strcpy(Ingreso,"palabra4");
	ImprimirResultado(InsertarPalabraEnLinea(cabezalLinea,1,4,Ingreso));
	apilar(palabras,Ingreso);
	
// ************** EN LINEA 2 *************************************************
	Ingreso = new char[20];
	strcpy(Ingreso,"palabra1.2");
	ImprimirResultado(InsertarPalabraEnLinea(cabezalLinea,2,1,Ingreso));

	Ingreso = new char[20];
	strcpy(Ingreso,"palabra2.2");
	ImprimirResultado(InsertarPalabraEnLinea(cabezalLinea,2,2,Ingreso));
	
	Ingreso = new char[20];
	strcpy(Ingreso,"palabra3.2");
	ImprimirResultado(InsertarPalabraEnLinea(cabezalLinea,2,3,Ingreso));

// ************** EN LINEA 3 *************************************************
	Ingreso = new char[20];
	strcpy(Ingreso,"palabra1");
	ImprimirResultado(InsertarPalabraEnLinea(cabezalLinea,3,1,Ingreso));
	apilar(palabras,Ingreso);
	
// ************** EN LINEA 6 *************************************************
	cout << "Palabra en linea erronea: " << endl;
	Ingreso = new char[20];
	strcpy(Ingreso,"palabra1.6");
	ImprimirResultado(InsertarPalabraEnLinea(cabezalLinea,6,1,Ingreso));
	ImprimirResultado(ImprimirTexto(cabezalLinea));

//	apilar(palabras,Ingreso);
	
//	cout << "Diccionario: " << endl;
//	mostrarDiccionario(palabras);
	
// *********** MOSTRAR LINEA *************************************************
	cout << "# # # # # # # # # #  IMPRIMIR LINEA  # # # # # # # # # #" << endl;
	ImprimirResultado(ImprimirLinea(cabezalLinea,2));

// *********** INSERTAR LINEAS EN POSICIONES *********************************
	cout << "# # # # # # # # # #  INSERTAR LINEAS EN POSICION  # # # # # # # # # #" << endl;
	cout << "Insertar linea en posicion 1: ";
	ImprimirResultado(InsertarLineaEnPosicion(cabezalLinea,1));
	cout << "Insertar linea en posicion 3: ";
	ImprimirResultado(InsertarLineaEnPosicion(cabezalLinea,3));
	cout << "Insertar linea en posicion 6: ";
	ImprimirResultado(InsertarLineaEnPosicion(cabezalLinea,6));
	ImprimirResultado(ImprimirTexto(cabezalLinea));
	
//************ BORRAR LINEA **************************************************
	cout << "# # # # # # # # # #  BORRAR LINEAS  # # # # # # # # # #" << endl;
	ImprimirResultado(BorrarLinea(cabezalLinea,1));
	ImprimirResultado(BorrarLinea(cabezalLinea,3));
	ImprimirResultado(ImprimirTexto(cabezalLinea));
	
//************ BORRAR OCURRENCIA DE PALABRA **********************************
	cout << "# # # # # # # # # #  BORRAR OCURRENCIA DE PALABRA  # # # # # # # # # #" << endl;
	ImprimirResultado(BorrarOcurrenciasPalabraEnTexto(cabezalLinea, "palabra1"));
	ImprimirResultado(ImprimirTexto(cabezalLinea));	

//*********** BORRAR TODO ****************************************************
	cout << "# # # # # # # # # #  BORRAR TODO  # # # # # # # # # #" << endl; 
	ImprimirResultado(BorrarTodo(cabezalLinea));
	ImprimirResultado(ImprimirTexto(cabezalLinea));

//******************************************************************************
//******************************************************************************
	
	cabezalLinea = NULL;//cabezalLinea cabezal de la lista de Lineas, lo que se pasa como parámetros
	Ingreso = NULL;
// ************** INSERTAR LINEAS ********************************************
	cout << "# # # # # # # # # #  INSERTAR LINEAS  # # # # # # # # # #" << endl;
	cout << "InsertarLinea: ";
	ImprimirResultado(InsertarLinea(cabezalLinea));
	cout << "InsertarLinea: ";
	ImprimirResultado(InsertarLinea(cabezalLinea));
	cout << "InsertarLinea: ";
	ImprimirResultado(InsertarLinea(cabezalLinea));
	
// *************** INSERTAR PALABRAS *****************************************
	cout << "# # # # # # # # # #  INSERTAR PALABRAS  # # # # # # # # # #" << endl;
// ************** EN LINEA 1 *************************************************
	Ingreso = new char[20];
	strcpy(Ingreso,"palabra1");
	ImprimirResultado(InsertarPalabraEnLinea(cabezalLinea,1,1,Ingreso));
	apilar(palabras,Ingreso);
	
	Ingreso = new char[20];
	strcpy(Ingreso,"palabra1");
	ImprimirResultado(InsertarPalabraEnLinea(cabezalLinea,1,2,Ingreso));
	apilar(palabras,Ingreso);
	
	Ingreso = new char[20];
	strcpy(Ingreso,"palabra1.2");
	ImprimirResultado(InsertarPalabraEnLinea(cabezalLinea,1,3,Ingreso));
	apilar(palabras,Ingreso);
	
// ************** EN LINEA 2 *************************************************
	Ingreso = new char[20];
	strcpy(Ingreso,"palabra1.2");
	ImprimirResultado(InsertarPalabraEnLinea(cabezalLinea,2,1,Ingreso));

	Ingreso = new char[20];
	strcpy(Ingreso,"palabra2.2");
	ImprimirResultado(InsertarPalabraEnLinea(cabezalLinea,2,2,Ingreso));
	
	Ingreso = new char[20];
	strcpy(Ingreso,"palabra.2");
	ImprimirResultado(InsertarPalabraEnLinea(cabezalLinea,2,3,Ingreso));
	
	ImprimirResultado(ImprimirTexto(cabezalLinea));
	
// ************* BORRAR OCURRENCIA PALABRA EN LINEA **************************
	cout << "# # # # # # # # # #  BORRAR OCURRENCIA PALABRA EN LINEA  # # # # # # # # # #" << endl;
	strcpy(Ingreso,"palabra1.2");
	ImprimirResultado(BorrarOcurrenciasPalabraEnLinea(cabezalLinea,1,Ingreso));
	ImprimirResultado(ImprimirTexto(cabezalLinea));

// ************* BORRAR OCURRENCIA PALABRA EN TEXTO **************************
	cout << "# # # # # # # # # #  BORRAR OCURRENCIA PALABRA EN TEXTO  # # # # # # # # # #" << endl;
	ImprimirResultado(BorrarOcurrenciasPalabraEnTexto(cabezalLinea,"palabra2.2"));
	ImprimirResultado(ImprimirTexto(cabezalLinea));
	
	
	return 0;
}

