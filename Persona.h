#ifndef PERSONA_H
#define PERSONA_H

class Persona
{
    private:
        float peso;
        float estatura;
        float imc;

    public:
        Persona();
        void setPeso();
        void setEstatura();

        float getPeso();
        float getEstatura();

        float calculaIMC();
        void imprimeIMC(float imc);

        virtual ~Persona();


};

#endif