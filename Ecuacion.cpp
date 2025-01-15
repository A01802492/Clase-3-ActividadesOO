#include "Ecuacion.h"
#include <iostream>

using namespace std;

Ecuacion::Ecuacion()
{
    a = 0;
    b = 0;
    c = 0;
    res1 = 0;
    res2 = 0;
}

void Ecuacion::setValorA()
{
    cout<<"Introduce el valor de A: ";
    cin>> a;
}

void Ecuacion::setValorB()
{
    cout<<"Introduce el valor de B: ";
    cin>> b;
}

void Ecuacion::setValorC()
{
    cout<<"Introduce el valor de C: ";
    cin>> c;
}

float Ecuacion::getValorA()
{
    return a;
}

float Ecuacion::getValorB()
{
    return b;
}

float Ecuacion::getValorC()
{
    return c;
}

float Ecuacion::calculaResultado1()
{
    res1 = ((b*b)+((4*a*c)*0.5))/(2*a);
    return res1;
}

float Ecuacion::calculaResultado2()
{
    res2 = ((b*b)-((4*a*c)*0.5))/(2*a);
    return res2;
}

void Ecuacion::imprimeResultado(float res1, float res2)
{
    cout<<"El valor de x1 es: "<<res1;
    cout<<" y el valor de x2 es: "<<res2<<endl;
}

Ecuacion::~Ecuacion()
{

}

