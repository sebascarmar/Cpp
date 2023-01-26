/* DEFINICIONES DE LAS FUNCIONES MIEMBRO DE LA CLASE Punto */

#include <iostream>
#include "punto.h"

/****** CONSTRUCTOR *********************************************************************************/
 Punto::Punto( double a, double b )
{
  setPunto( a, b );
}

 /****** ESTABLECE VALORES DE x E y DE Punto *********************************************************/ 
void Punto::setPunto( double a, double b )
{
  x = a;
  y = b;
}

/****** ESTABLECE EL VALOR DE x DE Punto ************************************************************/
void Punto::setX( double a )
{
  x = a;
}

/****** ESTABLECE EL VALOR DE y DE Punto ************************************************************/
void Punto::setY( double b )
{
  y = b;
}

/****** OBTEIENE EL VALOR DE x DE Punto *************************************************************/
double Punto::getX() const
{
  return x; 
}

/****** OBTEIENE EL VALOR DE y DE Punto *************************************************************/
double Punto::getY() const
{
  return y; 
}

/****** SOBRECARGA DE OPERADOR << *******************************************************************/
std::ostream &operator<<( std::ostream &auxOut, const Punto &p)
{
  auxOut << "(" << p.x << ";" << p.y << ")";

  return auxOut;
}








