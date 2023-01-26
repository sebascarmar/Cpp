/* CONTROLADOR PARA LA JERARQUÍA Figura, Punto, Circulo, Cilindro */

#include <iostream>
#include <cstdlib>
#include "figura.h"
#include "punto.h"
#include "circulo.h"
#include "cilindro.h"

void apuntadorViaVirtual( const Figura * );
void referenciaViaVirtual( const Figura & );


int main( int argc, char *argv[] )
{
  Punto punto( 7, 11 );                      //crea Punto 
  Circulo circulo( 3.5, 22.0, 8.0 );         //crea Circulo 
  Cilindro cilindro( 10.0, 3.3, 10.0, 10.0 );//crea Cilindro

  punto.imprimeNombreFigura();    //vinculación estática     
  punto.imprime();                //vinculación estática    
  std::cout << "\n";
  
  circulo.imprimeNombreFigura();  //vinculación estática     
  circulo.imprime();              //vinculación estática    
  std::cout << "\n";
  
  cilindro.imprimeNombreFigura();  //vinculación estática     
  cilindro.imprime();              //vinculación estática    
  std::cout << "\n\n";

/*-----------------------------------------------------------------------------------------*/ 

  Figura *arregloDeFiguras[3]; //arreglo de punteros a la clase base Figura

  arregloDeFiguras[0] = &punto;   //elemento 0 apunta al objeto punto de la clase derivada (Punto)
  arregloDeFiguras[1] = &circulo; //elemento 1 apunta al objeto circulo de la clase derivada (Circulo)
  arregloDeFiguras[2] = &cilindro;//elemento 2 apunta al objeto cilindro de la clase derivada (Cilindro)

  std::cout << "Llamadas virtuales a funciones mediante"
            << " apuntadores a la clase base\n";
  for( int i=0; i<3; i++ )//la función es para imprimir lo mismo que arriba pero con vinculación dinámica
    apuntadorViaVirtual( arregloDeFiguras[i] );
  
  
  std::cout << "Llamadas virtuales a funciones mediante"
            << " referencias a la clase base\n";
  for( int j=0; j<3; j++ )//la función es para imprimir lo mismo que arriba pero con vinculación dinámica
    referenciaViaVirtual( *arregloDeFiguras[j] );


  return EXIT_SUCCESS;
}


/* Hace llamadas a funciones virtuales mediante un puntero a la clase base, 
 * con el uso de vinculación estática */
void apuntadorViaVirtual( const Figura *PtrClaseBase )// mismos mensajes (métodos) responden de forma distinta
{                                                     //dependiendo del tipo de objeto del que se trate.
  PtrClaseBase->imprimeNombreFigura();
  PtrClaseBase->imprime();
  std::cout << "\nÁrea=" << PtrClaseBase->area();
  std::cout << "\nVolumen=" << PtrClaseBase->volumen() << "\n\n";
}

/* Hace llamadas a funciones virtuales mediante una referencias a la clase base, 
 * con el uso de vinculación estática */
void referenciaViaVirtual( const Figura &RefClaseBase )// mismos mensajes (métodos) responden de forma distinta
{                                                      //dependiendo del tipo de objeto del que se trate.
  RefClaseBase.imprimeNombreFigura();
  RefClaseBase.imprime();
  std::cout << "\nÁrea=" << RefClaseBase.area();
  std::cout << "\nVolumen=" << RefClaseBase.volumen()<< "\n\n";

}
















