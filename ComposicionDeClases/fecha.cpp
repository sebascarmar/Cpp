/* DEFINICIONES DE LAS FUNCIONES MIEMBRO DE LA CLASE Fecha */
#include <iostream>
#include "fecha.h"

/****** CONSTRUCTOR *********************************************************************************/
Fecha::Fecha( int d, int m, int a)
{
  dia = ( (d > 0 && d < 31) ? d : 1 );
  mes = ( (m > 0 && m < 13) ? m : 1 );
  anio = ( (a > 0 && a < 2030) ? a : 1900 );
}

/****** IMPRIME *************************************************************************************/
void Fecha::imprime() const 
{
  std::cout << ( dia<10 ? "0" : "") << dia << "/"
            << ( mes<10 ? "0" : "") << mes << "/"
            << ( anio<10 ? "0" : "") << anio << "/";
}
