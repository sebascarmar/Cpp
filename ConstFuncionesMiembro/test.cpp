/* INTENTO DE ACCEDER A UN OBJETO CONSTANTE CON FUNCIONES MIEMBRO NO CONSTANTES */
#include <iostream>
#include <cstdlib>
#include "hora.h"

int main( int argc, char *argv[] )
{
  Hora levantarse( 6, 45, 0 );    //objeto No constante
  const Hora mediodia( 12, 0, 0 );//objeto constante

                              //  OBJETO            FUNCION MIEMBRO 
  levantarse.setHora(18);     // no constante        no constante
  //mediodia.setHora(12);       // constante           no constante ---------> ERROR

  levantarse.getHora();       // no constante        constante
  mediodia.getHora();         // consante            constante

  mediodia.getMinuto();       // constante           constante

  mediodia.imprimeMilitar();  // constante           constante
  //mediodia.imprimeEstandar(); // constante           no constante ---------> ERROR
  std::cout << std::endl;

  return EXIT_SUCCESS;
}
