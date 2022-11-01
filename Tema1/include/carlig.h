#ifndef CARLIG_H
#define CARLIG_H
#include<iostream>
#include<vector>

class carlig
{
private :
    int dimensiune;
    std::string culoare;
    int stoc;
    int pret;
public :

    carlig(int dimensiune, const std::string& culoare,int stoc,int pret);

    friend std::ostream &operator<<(std::ostream& os, const carlig& carr);

    int getPret()const;

    int getStoc()const;

    const std::string& getCuloare()const;

    int getDimensiune()const;
};

#endif // CARLIG_H
