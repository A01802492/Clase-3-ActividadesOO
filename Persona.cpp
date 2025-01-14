#include "Persona.h"
#include <iostream>

using namespace std;

Persona::Persona()
{
    peso = 0;
    estatura = 0;
    imc = 0;
}

void Persona::setPeso()
{
    cout << "Introduce el peso en kg: ";
    cin >> peso;
}

void Persona::setEstatura()
{
    cout << "Introduce la estatura en metros: ";
    cin >> estatura;
}

float Persona::getPeso()
{
    return peso;
}

float Persona::getEstatura()
{
    return estatura;
}

float Persona::calculaIMC()
{
    imc = peso / (estatura * estatura);
    return imc;
}

void Persona::imprimeIMC(float imc)
{
    cout << "El IMC de la persona es: "<<imc<<endl;
}

Persona::~Persona()
{

}
