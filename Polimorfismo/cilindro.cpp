/* DEFINCIÓN DE LAS FUNCIONES MIEMBRO DE LA CLASE Cilindro */

#include <iostream>
#include "cilindro.h"

Cilindro::Cilindro( double h, double r, double x, double y )
  : Circulo( r, x, y )
{
  setAltura(h);
}

/*--------------------------------------------------------------------------------------------------*/

void Cilindro::setAltura( double h ){ altura = ( h > 0.0 ? h : 0.0 ); }

/*--------------------------------------------------------------------------------------------------*/ 

double Cilindro::getAltura( void ) const { return altura; }

/*--------------------------------------------------------------------------------------------------*/

double Cilindro::area( void ) const 
{  
  return 2*3.14159*getRadio()*altura + 2*Circulo::area(); //getRadio() es usada porque "radio" es privado en Circulo
}

/*--------------------------------------------------------------------------------------------------*/

double Cilindro::volumen( void ) const { return altura*Circulo::area(); }

/*--------------------------------------------------------------------------------------------------*/

void Cilindro::imprime( void ) const
{
  Circulo::imprime();
  std::cout << ", Altura=" << altura;
}
