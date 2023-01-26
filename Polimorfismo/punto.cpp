/* DEFINICIONES DE LAS FUNCIONES MIEMBRO DE LA CLASE Punto  */

#include <iostream>
#include "punto.h"

Punto::Punto( double a, double b ){ setPunto(a, b); }

/*--------------------------------------------------------------------------------------------------*/ 

void Punto::setPunto( double a, double b )
{
  x = a;
  y = b;
}

/*--------------------------------------------------------------------------------------------------*/ 

void Punto::imprime() const
{ 
  std::cout << "(" << x << ";" << y << ")";
}
