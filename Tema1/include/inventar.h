#ifndef INVENTAR_H
#define INVENTAR_H
#include<iostream>
#include<vector>
#include"undita.h"
#include"carlig.h"
#include"mamaliga.h"

class inventar
{
private :
    std::vector<undita> und;
    std::vector<carlig> carr;
    std::vector<mamaliga> mam;
public :

    inventar(const std::vector<undita> &und, const std::vector<carlig> &carr, const std::vector<mamaliga> &mam);

    friend std::ostream &operator<<(std::ostream& os, const inventar& inv);

    void CalculInv();

    void CreareMonturaIdeala();
};

#endif // INVENTAR_H
