/* DEFINICIÓN DE LA CLASE Punto */

#ifndef PUNTO_H
#define PUNTO_H

#include <iostream>

class Punto
{
  friend std::ostream &operator<<( std::ostream &, const Punto & );

  public:
    Punto( double = 0.0, double = 0.0 );
    void setPunto( double, double );
    void setX( double );
    void setY( double );
    double getX() const;
    double getY() const;
    ~Punto(){};
  
  protected:
    double x;
    double y;
};


#endif //PUNTO_H




