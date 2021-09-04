#ifndef POSTAL_H
#define POSTAL_H

#include "Envio.hpp"

//Clase encargada de calcular el coste por medio de Correo Postal
class Postal : public Envio {
    private:
        int kilometros;
        int clase;

    public:
        Postal(int,int); //constructor con parametros
        virtual double calculoEnvio(); //metodo que devuleve el costo de envio
        
};

#endif