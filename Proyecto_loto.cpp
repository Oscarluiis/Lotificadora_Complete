#include <iostream>
#include "Proyecto_loto.h"

using namespace std;
Proyecto_loto::Proyecto_loto()
{
    acti=0;
    costo=0;
    var="";
}
void Proyecto_loto::add_loti(int f, int c, std::string name)
{
    if(lotifica[f-1][c-1].getnombre()==""){
        lotifica[f-1][c-1].setNombreLoti(name);

        this->acti++;
    }else{
        cout<<"No disponible  "<<endl;
    }
}

void Proyecto_loto::Activos()
{
    for(int f=0;f<5;f++)
    {
        for(int c=0;c<5;c++)
        {
            var+=lotifica[f][c].getnombre()+"\t";
        }
        cout<<var<<endl;
        var="";
        cout<<"\t"<<endl;
    }
    cout<<this->acti<<" lotificadoras estan activas"<<endl;
}

float Proyecto_loto::getCosto()
{
    for(int f=0;f<5;f++)
    {
        for(int c=0;c<5;c++)
        {
            this->costo+=lotifica[f][c].costoTerreno();
        }
    }
}