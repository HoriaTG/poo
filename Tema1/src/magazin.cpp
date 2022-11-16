#include "magazin.h"

magazin::magazin(const std::vector<angajat> &ang,const std::vector<inventar> &inv,const std::string& adresa)
{
    this->ang = ang;
    this->inv = inv;
    this->adresa = adresa;
}
std::ostream &operator<<(std::ostream& os, const magazin& mag)
{
    for(int i=0; i<(int)mag.ang.size(); i++)
        os<< mag.ang[i]<<std::endl;
    return os;
}

void magazin::CautareVanzator(const magazin& mag,int x)
{
    for(int i=0; i<(int)mag.ang.size(); i++)
    {
        if(this->ang[i].getAniExperienta()>=x)
        std::cout<<mag.ang[i]<<std::endl;
    }
}
