#ifndef PLANETA_H
#define PLANETA_H

class Planeta
{
    private: 
        float edadT;
        float edadM;
        float edadV;
        float edadJ;
        float edadS;
    
    public:
        Planeta();
        void setEdadT();
        float getEdadT();
        float calculaEdadM();
        float calculaEdadV();
        float calculaEdadJ();
        float calculaEdadS();
        void imprimeEdad(float edadJ, float edadM, float edadS, float edadV);
        virtual ~Planeta();

};
#endif