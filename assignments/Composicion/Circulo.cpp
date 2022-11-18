#include "Circulo.h"

//Implementación de la clase
Circulo::Circulo(){
    radio = 1;
}

Circulo::Circulo(double _radio, Punto _centro){
    radio = _radio;
    centro = _centro;
}

//Métodos de acceso o getters
double Circulo::getRadio(){
    return radio;
}

Punto Circulo::getCentro(){
    return centro;
}

//Métodos modificadores
void Circulo::setRadio(double _radio){
    radio = _radio;
}

void Circulo::setCentro(Punto _centro){
    centro = _centro;
}

// Adicionales
void Circulo::imprime(){
    std::cout << "--------------------------" << std::endl;
    std::cout << "Circulo de radio: " << radio << std::endl;
    std::cout << "Centro del circulo: ";
    centro.imprime();
    std::cout << "--------------------------" << std::endl;
}

double Circulo::circunferencia(){
    double circunf = 3.1416 * 2 * radio;
    return circunf;
}

double Circulo::area(){
    return 3.1416 * radio * radio;
}

void Circulo::ubicacionPunto(Punto& p1){
    double dist = centro.distancia(p1);
    if (dist < radio){
        std::cout << "El punto está DENTRO del círculo" << std::endl;
    }else if(dist > radio){
        std::cout << "El punto está FUERA del círculo" << std::endl;
    }else{
        std::cout << "El punto está SOBRE la circunferencia" << std::endl;
    }
}