/* USO DE UN INICIALIZADOR DE MIEMBROS PARA INCIALIZAR UNA CONSTANTE DE UN TIPO DE DATO PREDEFINIDO */
#include <iostream>
#include <cstdlib>
#include "incremento.h"

int main( int argc, char *argv[] )
{
  Incremento valor(10, 5);

  std::cout << "Antes del incremento: ";
  valor.imprimir();
  std::cout << std::endl;

  for( int j=0; j<3; j++)
  {
    valor.sumaIncremento();
    std::cout << "Después del incremento " << j+1 << ":";
    valor.imprimir();
    std::cout << std::endl;
  }

  return EXIT_SUCCESS;
}
