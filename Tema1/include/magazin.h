#ifndef MAGAZIN_H
#define MAGAZIN_H
#include<iostream>
#include<vector>
#include"angajat.h"
#include"inventar.h"

class magazin
{
    private :
    std::vector<angajat> ang;
    std::vector<inventar> inv;
    std::string adresa;
public :
    magazin(const std::vector<angajat> &ang,const std::vector<inventar> &inv,const std::string& adresa);

    friend std::ostream &operator<<(std::ostream& os, const magazin& mag);

    void CautareVanzator(const magazin& mag,int x);
};

#endif // MAGAZIN_H
