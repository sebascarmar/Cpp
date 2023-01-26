/* DEFINICIÓN DE LA CLASE Hora CON MIEMBROS CONSTANTES */
#ifndef HORA_H
#define HORA_H

class Hora 
{
  public:
    Hora( int = 0, int = 0, int = 0 );//constructor PREDETERMINADO

    //setters
    void setHora( int, int, int );
    void setHora( int );
    void setMinuto( int);
    void setSegundo( int );

    //getters
    int getHora() const;
    int getMinuto() const;
    int getSegundo() const;

    //print functions
    void imprimeMilitar() const;
    void imprimeEstandar(); //debería ser const

  private:
    int hora;
    int minuto;
    int segundo;
};


#endif //HORA_H 
