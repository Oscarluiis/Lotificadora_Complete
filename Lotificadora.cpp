
#include "Lotificadora.h"

using namespace std;
Lotificadora::Lotificadora()
{
    nombreLoti="";
    terrenoVend=0;
    UltimaVent=-1;

}
void Lotificadora::setNombreLoti(string nomb) {
    this->nombreLoti=nomb;
}
    string Lotificadora::getnombre() {
    return this->nombreLoti;
}
void  Lotificadora::addTerreno(float)
{
    if (UltimaVent>=10){
        cout<<"Limite de venta"<<endl;
    } else{
        terrenos[terrenoVend].setVaras(var);
        ++terrenoVend;
        ++UltimaVent;
        cout<<"terrenos vendidos"<<endl;
    }
}
int Lotificadora::getTotTerrenoVend()
{
    return this->terrenoVend;
}

float Lotificadora::costoTerreno() {
    float costo_total =0;
    for (int i = 0; i <terrenoVend ; ++i) {
        costo_total+=terrenos[i].getPtrecio();
    }
    return costo_total;
}



