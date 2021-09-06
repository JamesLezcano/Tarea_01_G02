#include "Postal.hpp"

/**
 * Constructor con par�metros de la Clase postal.
 * 
 * @param kilometros entero que medira los kilometros del envio.
 * @param clase entero que determinara la clase a la que pertenece el envio
 */
Postal::Postal(int kilometros,int clase){
    this->kilometros=kilometros;
    this->clase=clase;
}

/**
 * M�todo CalculoEnvio  
 * 
 * Devuelve el costo del envio segun la clase y los kilometros recorridos
 * 
 * @return retorna el monto que costara el envio
 */
double Postal::calculoEnvio(){
    int kilometros=this->kilometros;
    int clase=this->clase;
    double monto=0.0;
    if (kilometros<=3){
        if (clase==1){
            monto=0.195;
        } 
        if (clase==2){
            monto= 0.0195;
        }   
        if (clase==3){
            monto= 0.0150;
        }    
    }
    if(kilometros<9 && kilometros>3){
         if (clase==1){
            monto=0.450;
        } 
        if (clase==2){
            monto= 0.0450;
        }   
        if (clase==3){
            monto= 0.0160;
        }  
    }
    if (kilometros>=9){
         if (clase==1){
            monto=0.500;
        } 
        if (clase==2){
            monto= 0.0500;
        }   
        if (clase==3){
             monto= 0.0170;
        }  
    }
    return monto;
}