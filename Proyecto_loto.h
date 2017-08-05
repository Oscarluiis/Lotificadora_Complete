
#ifndef TAREA_2_PROYECTO_LOTO_H
#define TAREA_2_PROYECTO_LOTO_H

#include "Lotificadora.h"

class Proyecto_loto {
public:
    Lotificadora lotifica[5][5];
    int acti;
    float costo;
    std::string var;

    Proyecto_loto();

    float getCosto();

    void add_loti(int,int,std::string);
    void Activos();

};


#endif //TAREA_2_PROYECTO_LOTO_H
