#include "Temperatura.h"
#include <iostream>

using namespace std;

Temperatura::Temperatura()
{
    tempC = 0;
    tempF = 0;
}

void Temperatura::setTemperaturaC()
{
    cout<<"Ingrese la temperatura en celcius: ";
    cin >> tempC;
}

float Temperatura::getTemperaturaC()
{
    return tempC;
}

float Temperatura::calculaTemperatura()
{
    tempF = ((tempC*9)/5) + 32;
    return tempF;
}

void Temperatura::imprimeTemperatura(float tempF)
{
    cout<<" equivale a: "<<tempF<<" grados fahrenheit"<<endl;
}

