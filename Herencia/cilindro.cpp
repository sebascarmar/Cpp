/* DEFINICIONES DE LAS FUNCIONES MIEMBRO DE LA CLASE Cilindro */

#include "cilindro.h"

/****** CONSTRUCTOR *********************************************************************************/
Cilindro::Cilindro( double h, double r, double x, double y )
:Circulo( r, x, y )
{
  setAltura(h);
}

/****** ESTABLECE EL VALOR DE altura DE Cilindro ****************************************************/
void Cilindro::setAltura( double h )
{
  altura = ( h >= 0.0 ? h : 0.0 );
}

/****** OBTIENE EL VALOR DE altura DE Cilindro ******************************************************/
double Cilindro::getAltura( void ) const 
{
  return altura;
}

/****** CALCULA Y RETORNA EL ÁREA SUPERFICIAL DE Cilindro *******************************************/
double Cilindro::area( void ) const
{
  return 2*3.141519*radio*altura + 2*Circulo::area();
}

/****** CALCULA Y RETORNA EL VOLUMEN DE Cilindro ****************************************************/
double Cilindro::volumen() const
{
  return Circulo::area()*altura;
}

/****** SOBRECARGA DEL OPERADOR << ******************************************************************/
std::ostream &operator<<( std::ostream &auxOut, const Cilindro &cil ) 
{
  auxOut << static_cast<Circulo>(cil)
         << ", altura=" << cil.altura;
  
  return auxOut;
}






