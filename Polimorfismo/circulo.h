/* DEFINICIÓN DE LA CLASE Circulo */

#ifndef CIRCULO_H
#define CIRCULO_H 

#include <iostream>
#include "punto.h"

class Circulo : public Punto 
{
  public:
    Circulo( double r=0.0, double x=0.0, double y=0.0 ); //Constructor predeterminado
    void setRadio( double );
    double getRadio() const;

    virtual double area() const;
    virtual void imprimeNombreFigura() const { std::cout << "Circulo: "; }
    virtual void imprime() const;

  private:
    double radio; 
};


#endif //CIRCULO_H
