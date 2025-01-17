#include <iostream>
#include "Persona.h"
#include "Temperatura.h"
#include "Planeta.h"
#include "Ecuacion.h"
#include "Invierte.h"

using namespace std;

int main()
{
    cout<<"Ejercicio 1"<<endl;
    Persona P1;
    P1.setPeso();
    P1.setEstatura();
    cout<<"El peso de la persona: "<<P1.getPeso();
    cout<<" La estatura de la persona: "<<P1.getEstatura()<<"m"<<endl;
    P1.imprimeIMC(P1.calculaIMC());

    cout<<"Ejercicio 2"<<endl;
    Temperatura T1;
    T1.setTemperaturaC();
    cout<<T1.getTemperaturaC()<<" grados celcius";
    T1.imprimeTemperatura(T1.calculaTemperatura());

    cout<<"Ejercicio 3"<<endl;
    Planeta Pl1;
    Pl1.setEdadT();
    Pl1.imprimeEdad(Pl1.calculaEdadJ(), Pl1.calculaEdadM(), Pl1.calculaEdadV(), Pl1.calculaEdadS());

    cout<<"Ejercicio 4"<<endl;
    Ecuacion E1;
    E1.setValorA();
    E1.setValorB();
    E1.setValorC();
    E1.imprimeResultado(E1.calculaResultado1(), E1.calculaResultado2());

    cout<<"Ejercicio 5"<<endl;
    Invierte I1;
    I1.setValorR();
    I1.setValorN();
    I1.setValorP();
    cout<<"Su inversión de "<<I1.getValorP()<<" euros";
    cout<<" en un periodo de "<<I1.getValorN()<<" años";
    cout<<" con una tasa de interés de "<<I1.getValorR();
    I1.imprimeGanancia(I1.calculaGanancia());
    
}