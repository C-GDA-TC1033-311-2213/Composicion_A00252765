#include <cmath>
#include "Punto.h"

// Constructor default
Punto::Punto(){
    x = 0;
    y = 0;
}

// Constructor con parámetros
Punto::Punto(double _x, double _y){
    x = _x;
    y = _y;
}

// Métodos de accesos
double Punto::getX(){
    return x;
}

double Punto::getY(){
    return y;
}

// Métodos modificadores
void Punto::setX(double _x){
    x = _x;
}

void Punto::setY(double _y){
    y = _y;
}

//Adicionales
void Punto::imprime(){
    std::cout << "X: " << x << " - Y: " << y << std::endl;
}

double Punto::distancia(Punto& p){
    double resultado = sqrt(pow((p.x - x),2) + pow((p.y - y),2));
    return resultado;
}
