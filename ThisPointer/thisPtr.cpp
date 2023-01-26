/* USO DEL PUNTERO this PARA HACER REFERENCIA A MIEMBROS DEL OBJETO */
#include <iostream>

/****** DECLARACIÓN Y DEFINICIÓN DE LA CLASE Prueba *************************************************/
class Prueba
{
  public:
    Prueba( int = 0 );//constructor predeterminado
    void imprime() const;
  private:
    int x;
};//fin de la clase Prueba

Prueba::Prueba( int a ){ x = a; } //definción del costructor

void Prueba::imprime() const 
{
  std::cout << "         x = " << x
            << "\n   this->x = " << this->x
            << "\n (*this).x = " << (*this).x << std::endl;
 
}//fin de la función imprime

/****** FUNCIÓN main ********************************************************************************/
int main( int argc, char *argv[] )
{
  Prueba objetoPrueba(12);
  objetoPrueba.imprime();

  return 0; 
}//fin de la función main
