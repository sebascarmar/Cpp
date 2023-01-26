/* ESTE PROGRAMA HACE USO DE LA CLASE Punto */

#include <iostream>
#include <cstdlib>
#include "punto.h"

int main( int argc, char *argv[] )
{
  Punto p1, p2(3.33, 4.44);

  std::cout << "Antes de la asignación:\n"
       << "p1=" << p1 << std::endl
       << "p2=" << p2 << std::endl;

  p1.setPunto(5.55, 6.66);
  p2.setY(7.77);

  std::cout << "\nDespués de la asignación:\n"
       << "p1=" << p1 << std::endl
       << "p2=" << p2 << std::endl;

  return EXIT_SUCCESS;
}
