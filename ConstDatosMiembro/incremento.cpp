/* DEFINICIONES DE LAS FUNCIONES MIEMBRO DE LA CLASE Incremento */

#include <iostream>
#include "incremento.h"

Incremento::Incremento( int c, int a )
:aumento(a)//, cuenta(c) |--------------> esta notación es la única forma de inicailizar un dato miembro const
{
  cuenta = c;
}

void Incremento::imprimir() const
{
  std::cout << "Cuenta=" << cuenta << ", Aumento=" << aumento;
}
 
