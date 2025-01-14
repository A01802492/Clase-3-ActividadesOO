#ifndef TEMPERATURA_H
#define TEMPERATURA_H

class Temperatura
{
    private:
        float tempC;
        float tempF;

    public:
        Temperatura();
        void setTemperaturaC();
        float getTemperaturaC();
        float calculaTemperatura();
        void imprimeTemperatura(float tempF);

};

#endif