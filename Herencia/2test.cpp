/* ESTE PROGRAMA HACE USO DE LA CLASE Circulo */

#include <iostream>
#include <cstdlib>
#include "circulo.h"

int main( int argc, char *argv[] )
{
  Circulo c1, c2(2.55, 3.0, 7.0);

  std::cout << "Antes de la asignación:\n"
            << "c1: " << c1 << std::endl
            << "c2: " << c2 << std::endl
            << "Área de c1: " << c1.area() << std::endl
            << "Área de c2: " << c2.area() << std::endl;
  
  c1.setRadio(8.88);
  c2.setPunto(4.44, -5.55);

  std::cout << "\nDespués de la asignación:\n"
            << "c1: " << c1 << std::endl
            << "c2: " << c2 << std::endl
            << "Área de c1: " << c1.area() << std::endl
            << "Área de c2: " << c2.area() << std::endl;

//  esto es un ejemplo de cómo acceder a la parte de "impresion" de la clase Punto heredada en Circulo
//  Punto p;
//  p = static_cast< Punto >(c2);
//  std::cout << p << std::endl; 

  return EXIT_SUCCESS;
}







