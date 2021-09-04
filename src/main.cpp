/* 
* Tarea programada 1 -> Cobro por Envio de correos
* James Araya Rodríguez - B70528
* Version 000
*/

#ifndef UNIT_TEST

#include <iostream>
#include <vector>
#include "Envio.hpp"
#include "Postal.hpp"
#include "Fedex.hpp"
//#include<memory>

using namespace std;

int main(){
    //Se crean los punteros a los diferentes costos
    Postal * postal1 = new Postal(2,3);
    Postal * postal2 = new Postal(2,2);
    Postal * postal3 = new Postal(2,1);
    Fedex * fedex1 = new Fedex(2,2);
    Fedex * fedex2 = new Fedex(501,2);
    Fedex * fedex3 = new Fedex(5,6);
    Fedex * fedex4 = new Fedex(501,6);
    //Se crea el vector de punteros y se agragan los punteros
    vector <Envio *> arregloEnvios;
    arregloEnvios.push_back(postal1);
    arregloEnvios.push_back(postal2);
    arregloEnvios.push_back(postal3);
    arregloEnvios.push_back(fedex1);
    arregloEnvios.push_back(fedex2);
    arregloEnvios.push_back(fedex3);
    arregloEnvios.push_back(fedex4);
    //Se recorre el vector para sumarlos y almacenar la suma en una variable
    double totalMontoEnvios = 0;
    for (Envio * envio : arregloEnvios)
    {
        totalMontoEnvios += envio->calculoEnvio();
    }
    //Se imprime el monto
    cout << "El monto total de los envíos es de " << totalMontoEnvios << endl;
    //Se destruyen los punteros y se libera memoria
    delete postal1;
    delete postal2;
    delete postal3;
    delete fedex1;
    delete fedex2;
    delete fedex3;
    delete fedex4;

    return 0;
}
#endif