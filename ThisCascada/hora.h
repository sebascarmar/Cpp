/* DECLARACIÓN DE LA CLASE Hora QUE PERMITE REALIZAR LLAMADAS A FUNCIONES MIEMBRO EN CASACADA */
#ifndef HORA_H
#define HORA_H

class Hora 
{
  public:
    Hora( int = 0, int = 0, int = 0 );//constructor PREDETERMINADO

    //setters
    Hora &setHora( int, int, int );
    Hora &setHora( int );
    Hora &setMinuto( int);
    Hora &setSegundo( int );

    //getters
    int getHora() const;
    int getMinuto() const;
    int getSegundo() const;

    //print functions
    void imprimeMilitar() const;
    void imprimeEstandar() const; 

  private:
    int hora;
    int minuto;
    int segundo;
};


#endif //HORA_H 
