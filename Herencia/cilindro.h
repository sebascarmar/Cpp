/* DEFINICIÓN DE LA CLASE Cilindro */

#ifndef CILINDRO_H
#define CILINDRO_H

#include <iostream>
#include "circulo.h"

class Cilindro : public Circulo
{
    friend std::ostream &operator<<( std::ostream &, const Cilindro & );

  public:
    Cilindro( double h=0.0, double r=0.0, double x=0.0, double y=0.0 );
    void setAltura( double );
    double getAltura() const;
    double area() const;
    double volumen() const;
    ~Cilindro(){};
  
  protected:
    double altura;
};


#endif //CILINDRO_H




