#include "magazin.h"

magazin::magazin(const std::vector<angajat> &ang , const std::string& adresa)
{
    this->ang = ang;
    this->adresa = adresa;
}
std::ostream &operator<<(std::ostream& os, const magazin& mag)
{
    os<< mag.ang[0]<<std::endl<<mag.ang[1]<<std::endl<<mag.ang[2]<< std::endl;
    return os;
}

void magazin::CautareVanzator(const magazin& mag,int x,std::vector<angajat>& v2)
{
    for(int i=0; i<3; i++)
    {
        if(v2[i].getAniExperienta()>=x)
        std::cout<<mag.ang[i]<<std::endl;
    }
}
