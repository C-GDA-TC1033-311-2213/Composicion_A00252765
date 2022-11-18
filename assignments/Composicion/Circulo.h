#ifndef CIRCULO_H
#define CIRCULO_H
#include <iostream>
#include "Punto.h"

class Circulo{
    public:
        //Constructores
        Circulo();
        Circulo(double, Punto);
        //Getters
        double getRadio();
        Punto getCentro();
        //Setters
        void setRadio(double);
        void setCentro(Punto);
        void imprime();
        double circunferencia();
        double area();
        void ubicacionPunto(Punto&);
    private:
        double radio;
        Punto centro;
};
#endif //CIRCULO_H