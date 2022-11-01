#ifndef MAGAZIN_H
#define MAGAZIN_H
#include<iostream>
#include<vector>
#include"angajat.h"

class magazin
{
    private :
    std::vector<angajat> ang;
    std::string adresa;
public :
    magazin(const std::vector<angajat> &ang , const std::string& adresa);

    friend std::ostream &operator<<(std::ostream& os, const magazin& mag);

    void CautareVanzator(const magazin& mag,int x,std::vector<angajat>& v2);
};

#endif // MAGAZIN_H
