// Guardas 
#ifndef PUNTO_H
#define PUNTO_H
#include <iostream>

class Punto{
    public:
        //Constructor default
        Punto();
        //Constructor con parámetros
        Punto(double, double);
        //Métodos de acceso
        double getX();
        double getY();
        //Métodos modificadores
        void setX(double);
        void setY(double);
        //Adicionales
        void imprime();
        double distancia(Punto&);
    private:
        double x;
        double y;
};

#endif