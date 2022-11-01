#include "angajat.h"

angajat::angajat(const std::string& nume,int salariu,const std::string& CNP,int AniExperienta)
{
    this->nume = nume;
    this->salariu = salariu;
    this->CNP = CNP;
    this->AniExperienta = AniExperienta;
}

angajat::angajat(const angajat &other) : nume{other.nume} , salariu(other.salariu) , CNP(other.CNP) , AniExperienta(other.AniExperienta)
{
    //  std::cout << "Constructor de copiere" << std::endl;
}


angajat &angajat::operator=(const angajat &other)
{
    nume = other.nume;
    salariu = other.salariu;
    CNP =other.CNP;
    AniExperienta = other.AniExperienta;
    return *this;
}

angajat::~angajat()
{
     ///   std::cout<<"Destructor";
}

std::ostream &operator<<(std::ostream& os, const angajat& ang)
{
    os <<"Nume : "<< ang.nume<<std::endl<<"Salariu : "<<ang.salariu<<std::endl<<"CNP : "<<ang.CNP<<std::endl<<"Ani experienta : "<<ang.AniExperienta<<std::endl;
    return os;
}

int angajat::getAniExperienta() const {return AniExperienta;}
