/* DEFINICIÓN DE LA CLASE Circulo */

#ifndef CIRCULO_H
#define CIRCULO_H

#include <iostream>
#include "punto.h"

class Circulo : public Punto
{
  friend std::ostream &operator<<( std::ostream &, const Circulo & );

  public:
    Circulo( double r=0.0, double x=0.0, double y=0.0 );
    void setRadio( double );
    double getRadio() const;
    double area() const;
    ~Circulo(){};
  
  protected:
    double radio;
};

#endif //CIRCULO_H 
