/* INTENTO DE ACCEDER A UN OBJETO CONSTANTE CON FUNCIONES MIEMBRO NO CONSTANTES */
#include <iostream>
#include <cstdlib>
#include "hora.h"

int main( int argc, char *argv[] )
{
  Hora levantarse;    //objeto No constante

  levantarse.setHora(6, 45, 1).imprimeEstandar();
  std::cout << std::endl;

  levantarse.setHora(15).imprimeEstandar();
  std::cout << std::endl;

  levantarse.setSegundo(35).imprimeMilitar();
  std::cout << std::endl;

  return EXIT_SUCCESS;
}
