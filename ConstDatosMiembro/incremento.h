/* DEFINICIÓN DE LA CLASE Incremento */

#ifndef INCREMENTO_H
#define INCREMENTO_H

class Incremento
{
  public:
    Incremento( int c = 0, int a = 0 );
    void sumaIncremento(){ cuenta += aumento; };
    void imprimir() const;

  private:
    int cuenta;
    const int aumento;//dato miembro constante
};


#endif //INCREMENTO_H

