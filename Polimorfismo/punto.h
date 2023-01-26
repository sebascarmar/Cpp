/* DEFINICIÓN DE LA CLASE Punto */

#ifndef PUNTO_H
#define PUNTO_H

#include <iostream>
#include "figura.h"

class Punto : public Figura 
{
  public:
    Punto( double = 0.0, double = 0.0 );//constructor predeterminado
    void setPunto( double, double );
    int getX() const { return x; }
    int getY() const { return y; }

    virtual void imprimeNombreFigura() const { std::cout << "Punto: "; }
    virtual void imprime() const;

  private:
    double x, y; 
};


#endif //PUNTO_H






