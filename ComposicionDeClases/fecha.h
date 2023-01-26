/* DECLARACIÓN DE LA CLASE Fecha */
#ifndef FECHA_H
#define FECHA_H

class Fecha
{
  public:
    //constructor por defecto
    Fecha( int = 1, int = 1, int = 1900 );
    //otros métodos
    void imprime() const;
    //destructor
    ~Fecha(){}

  private:
    int dia, mes, anio;
};

#endif //FECHA_H
