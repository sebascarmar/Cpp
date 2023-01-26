/* DEFINCIONES DE LAS FUNCIONES MIEMBRO DE LA CLASE Hora CON EL USO DEL PUNTERO this*/

#include <iostream>
#include "hora.h"

/****** CONSTRUCTOR *********************************************************************************/
Hora::Hora( int h, int m, int s )
{
  setHora(h, m, s);
}

/****** SETTERS *************************************************************************************/
Hora &Hora::setHora( int h, int m, int s )
{
  setHora(h); 
  setMinuto(m);
  setSegundo(s); 

  return *this;
}
/*--------------------------------------------------------------------------------------------------*/ 
Hora &Hora::setHora( int h )
{
  hora = ( (h>0 && h<24) ? h : 0 );
  return *this;
}
/*--------------------------------------------------------------------------------------------------*/
Hora &Hora::setMinuto( int m )
{
  minuto = ( (m>0 && m<60) ? m : 0 );
  return *this;
}
/*--------------------------------------------------------------------------------------------------*/ 
Hora &Hora::setSegundo( int s )
{
  segundo = ( (s>0 && s<60) ? s : 0 ); 
  return *this;
}

/****** GETTERS *************************************************************************************/ 
int Hora::getHora( void ) const { return hora; }
/*--------------------------------------------------------------------------------------------------*/ 
int Hora::getMinuto( void ) const { return minuto; }
/*--------------------------------------------------------------------------------------------------*/ 
int Hora::getSegundo( void ) const { return segundo; }

/****** PRINT FUNCTIONS *****************************************************************************/
void Hora::imprimeMilitar( void ) const
{
  //if( hora < 10 ){ std::cout << 0 ;}
  //std::cout << hora << ":";
  //if( minuto < 10 ){ std::cout << 0 ;}
  //std::cout << minuto; 

  std::cout << (hora < 10 ? "0" : "") << hora << ":"
            << (minuto < 10 ? "0" : "") << minuto;
}
/*--------------------------------------------------------------------------------------------------*/ 
void Hora::imprimeEstandar( void ) const
{
  //std::cout << ( hora == 12 ? 12 : hora % 12 ) << ":";
  //if( minuto < 10 ){ std::cout << 0 ;}
  //std::cout << minuto << ":"; 
  //if( segundo < 10 ){ std::cout << 0 ;}
  //std::cout << segundo << ( hora < 12 ? " AM" : " PM");

  std::cout << ( (hora == 0 || hora == 12) ? 12 : hora %12 )
            << ":" << (minuto < 10 ? "0" : "") << minuto
            << ":" << (segundo < 10 ? "0" : "") << segundo
            << (hora < 12 ? " AM" : " PM");
}








