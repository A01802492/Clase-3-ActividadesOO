#include <iostream>
#include "Planeta.h"

using namespace std;

Planeta::Planeta()
{
    edadT = 0;
    edadJ = 0;
    edadM = 0;
    edadV = 0;
    edadS = 0;
}

void Planeta::setEdadT()
{
    cout<<"Ingresa tu edad en la tierra: ";
    cin >> edadT;
}

float Planeta::getEdadT()
{
    return edadT;
}

float Planeta::calculaEdadM()
{
    edadM = (edadT*365)/88;
    return edadM;
}

float Planeta::calculaEdadV()
{
    edadV = (edadT*365)/225;
    return edadV;
}

float Planeta::calculaEdadJ()
{
    edadJ = (edadT*365)/4333;
    return edadJ;
}

float Planeta::calculaEdadS()
{
    edadS = (edadT*365)/10744;
    return edadS;
}

void Planeta::imprimeEdad(float edadJ, float edadM, float edadS, float edadV)
{
    cout<<"Esta sería tu edad en estos planetas: "<<endl;
    cout<<edadJ<<" En Júpiter"<<endl;
    cout<<edadV<<" En Vénus"<<endl;
    cout<<edadM<<" En Mercurio"<<endl;
    cout<<edadS<<" En Saturno"<<endl;
}

Planeta::~Planeta()
{

}