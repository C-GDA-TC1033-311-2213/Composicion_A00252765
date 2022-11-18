#include <iostream>
#include "Circulo.h"
using namespace std;

int main() {
  //Escribe aquí tu código para probar tus clases.
  Circulo c;
  c.imprime();
  Punto p(5,5);
  Circulo c1(3, p);
  c1.imprime();
  std::cout << "Circunferencia de circulo c: " << c.circunferencia() << std::endl;
  std::cout << "Area de circulo c: " << c.area() << std::endl;
  c.ubicacionPunto(p);
  return 0;
}
