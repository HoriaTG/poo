#include "inventar.h"

inventar::inventar(const std::vector<undita> &und, const std::vector<carlig> &carr, const std::vector<mamaliga> &mam)
{
    this-> und = und;
    this-> carr = carr;
    this-> mam = mam;
}
std::ostream &operator<<(std::ostream& os, const inventar& inv)
{
    os<<"Undite : "<<std::endl<<"========"<<std::endl<< inv.und[0]<<std::endl<<inv.und[1]<<std::endl<<inv.und[2]<< std::endl<< std::endl;
    os<<"Carlige : "<<std::endl<<"========="<<std::endl<<std::endl<< inv.carr[0]<<std::endl<<inv.carr[1]<<std::endl<<inv.carr[2]<< std::endl<< std::endl;
    os<<"Mamaligi : "<<std::endl<<"=========="<<std::endl<<std::endl<< inv.mam[0]<<std::endl<<inv.mam[1]<<std::endl<<inv.mam[2]<< std::endl<< std::endl;
    return os;
}

void inventar::CalculInv(std::vector<undita>& v2,std::vector<carlig>& v3, std::vector<mamaliga>& v4)
{
    int x = 0;
    for(int i=0; i<3; i++)
    {
        x = x + v2[i].getStoc()*v2[i].getPret() + v3[i].getStoc()*v3[i].getPret() + v4[i].getStoc()*v4[i].getPret();
    }
    std::cout<<x<<" lei ";
}

void inventar::CreareMonturaIdeala(std::vector<undita>& v2,std::vector<carlig>& v3, std::vector<mamaliga>& v4)
{
    std::cout<<"Montura ideala : " <<std::endl<<"================"<<std::endl<<std::endl;
    int maximund=0,maximcarr=0,maximmam=0,indiceund,indicecarr,indicemam;
    for(int i=0; i<3; i++)
    {
        if(v2[i].getPret()>maximund)
        {
            maximund=v2[i].getPret();
            indiceund = i;
        }
        if(v3[i].getPret()>maximcarr)
        {
            maximcarr=v3[i].getPret();
            indicecarr = i;
        }
        if(v4[i].getPret()>maximmam)
        {
            maximmam=v4[i].getPret();
            indicemam = i;
        }
    }
    std::cout<<"Undita ideala : "<<std::endl<<"Lungime : "<<
    v2[indiceund].getLungime()<<" metri "<<std::endl<<"Material : "<<v2[indiceund].getMaterial()<<std::endl<<std::endl<<
    "Carlig ideal : "<<std::endl<<" Dimensiune : "<<v3[indicecarr].getDimensiune()<<std::endl<<" Culoare : "<<v3[indicecarr].getCuloare()
    <<" "<<std::endl<<std::endl<<
    "Mamaliga ideala : "<<std::endl<<"Culoare : "<<v4[indicemam].getCuloare()<<std::endl<<"Aroma : "<<v4[indicemam].getAroma()<<std::endl;
}
