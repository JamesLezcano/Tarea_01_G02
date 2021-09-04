#ifndef ENVIO_H
#define ENVIO_H

class Envio{
    protected:
        Envio(){} //Costructor por omicion
    public:
        ~Envio(){} // destructor
        virtual double calculoEnvio() = 0;  //metodo para calcular valores

};
#endif