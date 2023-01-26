/* DEFINICIONES DE LAS FUNCIONES MIEMBRO DE LA CLASE Circulo */

#include <iostream>
#include "circulo.h"

/****** CONSTRUCTOR *********************************************************************************/
Circulo::Circulo( double r, double x, double y )
:Punto( x, y )
{
  setRadio(r);
}

/****** ESTABLECE EL VALOR DE radio de Circulo ******************************************************/
void Circulo::setRadio( double r )
{
  radio = ( r >= 0.0 ? r : 0.0 );
}

/****** OBTIENE EL VALOR DE radio DE Circulo ********************************************************/
double Circulo::getRadio( void ) const 
{
  return radio;
}

/****** CALCULA Y RETORNA EL ÁREA DE Circulo ********************************************************/
double Circulo::area( void ) const 
{
  return 3.14159*radio*radio;
}

/****** SOBRECARGA DEL OPERADOR << ******************************************************************/
std::ostream &operator<<( std::ostream &auxOut, const Circulo &c )
{
  auxOut << "Centro=" << static_cast< Punto >(c)
         << ", Radio=" << c.radio ;

  return auxOut;
}






