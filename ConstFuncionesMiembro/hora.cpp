/* DEFINCIONES DE LAS FUNCIONES MIEMBRO DE LA CLASE Hora */

#include <iostream>
#include "hora.h"

/****** CONSTRUCTOR *********************************************************************************/
Hora::Hora( int h, int m, int s )
{
  setHora(h, m, s);
}

/****** SETTERS *************************************************************************************/
void Hora::setHora( int h, int m, int s )
{
  hora = ( (h>0 && h<24) ? h : 0 );
  minuto = ( (m>0 && m<60) ? m : 0 );
  segundo = ( (s>0 && s<60) ? s : 0 );
}
/*--------------------------------------------------------------------------------------------------*/ 
void Hora::setHora( int h )
{
  hora = ( (h>0 && h<24) ? h : 0 );
}
/*--------------------------------------------------------------------------------------------------*/
void Hora::setMinuto( int m )
{
  minuto = ( (m>0 && m<60) ? m : 0 );
}
/*--------------------------------------------------------------------------------------------------*/ 
void Hora::setSegundo( int s )
{
  segundo = ( (s>0 && s<60) ? s : 0 ); 
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
  if( hora < 10 ){ std::cout << 0 ;}
  std::cout << hora << ":";
  if( minuto < 10 ){ std::cout << 0 ;}
  std::cout << minuto; 
}
/*--------------------------------------------------------------------------------------------------*/ 
void Hora::imprimeEstandar( void )//debería ser const
{
  std::cout << ( hora == 12 ? 12 : hora % 12 ) << ":";
  if( minuto < 10 ){ std::cout << 0 ;}
  std::cout << minuto << ":"; 
  if( segundo < 10 ){ std::cout << 0 ;}
  std::cout << segundo << ( hora < 12 ? " AM" : " PM");
}








