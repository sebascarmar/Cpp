/* DEFINICIÓN DE LAS FUNCIONES MIEMBRO DE LA CLASE Circulo */

#include <iostream>
#include "circulo.h"

Circulo::Circulo( double r, double a, double b )
 : Punto( a, b )
{
  setRadio(r);
}

/*--------------------------------------------------------------------------------------------------*/

void Circulo::setRadio( double r ){ radio = ( r >= 0.0 ? r : 0.0); }

/*--------------------------------------------------------------------------------------------------*/

double Circulo::getRadio( void ) const { return radio; }

/*--------------------------------------------------------------------------------------------------*/ 

double Circulo::area() const{ return 3.14159*radio*radio; }

/*--------------------------------------------------------------------------------------------------*/ 

void Circulo::imprime() const 
{
  Punto::imprime();
  std::cout << ", Radio=" << radio;
}









