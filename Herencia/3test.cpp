/* DEFINICIONES DE LAS FUNCIONES MIEMBRO DE LA CLASE Cilindro */

#include <iostream>
#include <cstdlib>
#include "cilindro.h"

int main( int argc, char *argv[] )
{
  Cilindro cil1(5.0, 2.5), cil2(5.5, 4.0, 77.2), cil3(7.0, 6.0, -2.1, 4.2);

  std::cout << "Antes de la asignación:\n"
            << "cil1: " << cil1 << std::endl
            << "cil2: " << cil2 << std::endl
            << "cil3: " << cil3 << std::endl
            << "Área de cil1: " << cil1.area() << std::endl
            << "Área de cil2: " << cil2.area() << std::endl
            << "Área de cil3: " << cil3.area() << std::endl
            << "Volumen de cil1: " << cil1.volumen() << std::endl
            << "Volumen de cil2: " << cil2.volumen() << std::endl
            << "Volumen de cil3: " << cil3.volumen() << std::endl;
  
  cil1.setPunto(2.0, 2.0);
  cil2.setAltura(25.55);
  cil3.setRadio(2.33);

  std::cout << "\nDespués de la asignación:\n"
            << "cil1: " << cil1 << std::endl
            << "cil2: " << cil2 << std::endl
            << "cil3: " << cil3 << std::endl
            << "Área de cil1: " << cil1.area() << std::endl
            << "Área de cil2: " << cil2.area() << std::endl
            << "Área de cil3: " << cil3.area() << std::endl
            << "Volumen de cil1: " << cil1.volumen() << std::endl
            << "Volumen de cil2: " << cil2.volumen() << std::endl
            << "Volumen de cil3: " << cil3.volumen() << std::endl;


  return EXIT_SUCCESS;
}
