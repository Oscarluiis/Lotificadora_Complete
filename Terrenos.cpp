

#include "Terrenos.h"

Terrenos::Terrenos()
{
    this->var=0;
}
void Terrenos::setVaras(float vara)
{
    this->var=vara;
}
float Terrenos::getVara()
{
    return this->var;
}
float Terrenos::getMetros()
{
    return this->getVara()*0.6987;
}
float Terrenos::getPtrecio()
{
    return this->getMetros()*80;

}