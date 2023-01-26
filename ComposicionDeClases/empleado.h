/* DECLARACIÓN DE LA CLASE Empleado */
#ifndef EMPLEADO_H
#define EMPLEADO_H

#include "fecha.h"

class Empleado
{
  public:
    //constructor por defecto 
    Empleado( const char *, const char *, int, int, int, int, int, int );
    void imprime() const;
    ~Empleado(){};

  private:
    char nombre[25];
    char apellido[25];
    const Fecha fechaNacimiento;
    const Fecha fechaContratacion;
};

#endif //EMPLEADO_H
