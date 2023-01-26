/* DEMOSTRACIÓN DE LA COMPOSICIÓN: UN OBJETO DENTRO DE OTRO OBJETO */
#include <iostream>
#include <cstdlib>
#include "empleado.h"

int main( int argc, char *argv[] )
{
  Empleado e( "Roberto", "Jimenez", 24, 7, 1949, 8, 3, 1988 );

  std::cout << "\n";
  e.imprime();


  return EXIT_SUCCESS;
}
