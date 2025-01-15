#ifndef ECUACION_H
#define ECUACION_H

class Ecuacion
{
    private:
        float a;
        float b;
        float c;
        float res1;
        float res2;
    public:
        Ecuacion();
        void setValorA();
        void setValorB();
        void setValorC();

        float getValorA();
        float getValorB();
        float getValorC();

        float calculaResultado1();
        float calculaResultado2();
        void imprimeResultado(float res1, float res2);

        virtual ~Ecuacion();
};

#endif