/* DEFINICIÓN DE LA CLASE Cilindro */

#ifndef CILINDRO_H
#define CILINDRO_H

#include <iostream>
#include "circulo.h"

class Cilindro : public Circulo
{
  public:
    Cilindro( double h=0.0, double r=0.0, double x=0.0, double y=0.0 ); //constructor por defecto
    void setAltura( double );
    double getAltura() const;

    virtual double area() const;
    virtual double volumen() const;
    virtual void imprimeNombreFigura() const { std::cout << "Cilindro: "; }
    virtual void imprime() const;

  private:
    double altura; 
};


#endif //CILINDRO_H



