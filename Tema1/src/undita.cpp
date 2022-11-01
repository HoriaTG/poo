#include "undita.h"

undita::undita(int lungime, const std::string& material,int stoc,int pret)
{
    this->lungime = lungime;
    this->material = material;
    this->stoc = stoc;
    this->pret = pret;
}
std::ostream &operator<<(std::ostream& os, const undita& und)
{
    os <<"Lungime : "<< und.lungime<<" metri "<<std::endl<<"Material : "<<und.material<<std::endl<<"Stoc : "<<und.stoc<<std::endl<<"Pret : "<<und.pret<<" lei"<< std::endl;
    return os;
}

int undita::getPret()
const
{
    return pret;
}
int undita::getStoc()
const
{
    return stoc;
}
const std::string& undita::getMaterial() const
{
    return material;
}
int undita::getLungime()
const
{
    return lungime;
}
