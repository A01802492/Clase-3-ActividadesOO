#ifndef INVIERTE_H
#define INVIERTE_H

class Invierte
{
    private:
        float R;
        float N;
        float P;
        float dineroF;
    public:
        Invierte();
        void setValorR();
        void setValorN();
        void setValorP();

        float getValorR();
        float getValorN();
        float getValorP();

        float calculaGanancia();
        void imprimeGanancia(float dineroF);

        virtual ~Ecuacion();

};

#endif
