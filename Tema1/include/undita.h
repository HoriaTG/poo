#ifndef UNDITA_H
#define UNDITA_H
#include<iostream>
#include<vector>

class undita
{
private :
    int lungime;
    std::string material;
    int stoc;
    int pret;
public :

    undita(int lungime, const std::string& material,int stoc,int pret);

    friend std::ostream &operator<<(std::ostream& os, const undita& und);

    int getPret()const;

    int getStoc()const;

     const std::string& getMaterial()const;

     int getLungime()const;
};

#endif // UNDITA_H
