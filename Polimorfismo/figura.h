/* DEFINICIÓN DE LA CLASE ABSTRACTA Figura */

#ifndef FIGURA_H
#define FIGURA_H

class Figura 
{
  public:
    virtual double area() const { return 0.0; }
    virtual double volumen() const { return 0.0; }

    //FUNCIONES VIRTUALES PURAS SUSTITUIDAS EN CLASES DERIVADAS
    virtual void imprimeNombreFigura() const = 0;
    virtual void imprime() const = 0;

};

#endif //FIGURA_H 






