
#ifndef TAREA_2_LOTIFICADORA_H
#define TAREA_2_LOTIFICADORA_H


#include "Terrenos.h"
#include <iostream>


class Lotificadora
{
public:
    float var;
    int terrenoVend;
    int UltimaVent;
    std::string nombreLoti;
    Terrenos terrenos[10];

    Lotificadora();
    std::string getnombre();
    void setNombreLoti(std::string);
    void addTerreno (float);
    int getTotTerrenoVend();


    float costoTerreno ();




};


#endif //TAREA_2_LOTIFICADORA_H
