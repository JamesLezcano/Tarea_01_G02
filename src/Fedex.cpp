#include "Fedex.hpp"

/**
 * Constructor con par�metros de la Clase postal.
 * 
 * @param distancia entero que medira los kilometros del envio.
 * @param peso entero que determinara el peso del paquete
 */
Fedex::Fedex(int distancia,int peso){
    this->distancia=distancia;
    this->peso=peso;
}

/**
 * M�todo CalculoEnvio  
 * 
 * Devuelve el costo del envio segun la clase y los kilometros recorridos
 * 
 * @return monto que costara el envio
 */
double Fedex::calculoEnvio(){
    int distancia=this->distancia;
    int peso=this->peso;
    double monto=20.0;
    if(distancia>500){
        monto +=5.00;
    }
    if(peso>4){
        monto+=3.00;
    }
    return monto;
}