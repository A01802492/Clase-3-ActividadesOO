#include <iostream>
#include "Invierte.h"
#include <cmath>

using namespace std;

Invierte::Invierte()
{
    R = 0;
    N = 0;
    P = 0;
    dineroF = 0;
}

void Invierte::setValorR()
{
    cout<<"Ingresa el valor de la tasa de interés: ";
    cin>> R;
}

void Invierte::setValorN()
{
    cout<<"Ingresa la cantidad de años: ";
    cin>> N;
}

void Invierte::setValorP()
{
    cout<<"Ingresa la cantidad de euros que vas a invertir: ";
    cin>> P;
}

float Invierte::getValorR()
{
    return R;
}

float Invierte::getValorN()
{
    return N;
}

float Invierte::getValorP()
{
    return P;
}

float Invierte::calculaGanancia()
{
    dineroF = (P*(1-pow(R/100, N+1)))/(1-(R/100));
    return dineroF;
}

void Invierte::imprimeGanancia(float dineroF)
{
    cout<<" generará una ganancia de: "<<dineroF<<" euros"<<endl;
}

Invierte::~Invierte()
{

}
