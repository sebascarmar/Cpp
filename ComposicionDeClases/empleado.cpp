/* DEFINICIONES DE LAS FUNCIONES MIEMBRO DE LA CLASE Empleado */
#include <iostream>
#include <cstring> 
#include "empleado.h"

/****** CONSTRUCTOR *********************************************************************************/
Empleado::Empleado( const char *nom, const char *ape, 
                    int dNac, int mNac, int aNac, 
                    int dCon, int mCon, int aCon )
:fechaNacimiento(dNac, mNac, aNac), fechaContratacion(dCon, mCon, aCon)
{
  int longitud = strlen( nom );
  longitud = (longitud<25 ? longitud : 24);
  strncpy(nombre, nom, longitud);
  nombre[longitud] = '\0';
  
  longitud = strlen( ape );
  longitud = (longitud<25 ? longitud : 24);
  strncpy(apellido, ape, longitud);
  apellido[longitud] = '\0';
}

/****** IMPRIMIE ************************************************************************************/
void Empleado::imprime() const 
{
  std::cout << apellido << ", " << nombre <<"\n Contratado: ";
  fechaContratacion.imprime();
  std::cout << "\n Fecha de nacimiento: ";
  fechaNacimiento.imprime();
  std::cout << std::endl;

}






