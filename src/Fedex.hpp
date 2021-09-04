#ifndef FEDEX_H
#define FEDEX_H

#include "Envio.hpp"

//Clase encargada de calcular el coste por medio de Correo Postal
class Fedex : public Envio {
    private:
        int distancia;
        int peso;

    public:
        Fedex(int,int);  //constructor con parametros
        virtual double calculoEnvio(); //metodo que devuleve el costo de envio
        
};

#endif