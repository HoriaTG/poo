#include "carlig.h"

carlig::carlig(int dimensiune, const std::string& culoare,int stoc,int pret)
{
    this-> dimensiune = dimensiune;
    this-> culoare = culoare;
    this-> stoc = stoc;
    this-> pret = pret;
}
    std::ostream &operator<<(std::ostream& os, const carlig& carr)
{
    os <<"Dimensiune : "<<carr.dimensiune<<std::endl<<"Culoare : "<<carr.culoare<<std::endl<<"Stoc : "<<carr.stoc<<std::endl<<"Pret : "<<carr.pret<<" lei"<< std::endl;
    return os;
}
int carlig::getPret()
const
{
    return pret;
}
int carlig::getStoc()
const
{
    return stoc;
}
const std::string& carlig::getCuloare() const
{
    return culoare;
}
int carlig::getDimensiune() const
{
    return dimensiune;
}
