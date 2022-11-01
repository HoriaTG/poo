#include "mamaliga.h"

mamaliga::mamaliga(const std::string& culoare, const std::string& aroma,int stoc,int pret)
{
    this-> culoare = culoare;
    this-> aroma = aroma;
    this-> stoc = stoc;
    this-> pret = pret;
}
std::ostream &operator<<(std::ostream& os, const mamaliga& mam)
{
    os <<"Culoare : "<<mam.culoare<<std::endl<<"Aroma : "<<mam.aroma<<std::endl<<"Stoc : "<<mam.stoc<<std::endl<<"Pret : "<<mam.pret<<" lei"<< std::endl;
    return os;
}
int mamaliga::getPret()
const
{
    return pret;
}
int mamaliga::getStoc()
const
{
    return stoc;
}
const std::string& mamaliga::getCuloare() const
{
    return culoare;
}
const std::string& mamaliga::getAroma() const
{
    return aroma;
}
