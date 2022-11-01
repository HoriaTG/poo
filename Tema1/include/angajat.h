#ifndef ANGAJAT_H
#define ANGAJAT_H
#include<iostream>
#include<vector>

class angajat
{
private :
    std::string nume;
    int salariu;
    std::string CNP;
    int AniExperienta;
public :
    angajat(const std::string& nume,int salariu,const std::string& CNP,int AniExperienta);

    angajat(const angajat &other);

    angajat &operator=(const angajat &other);

    ~angajat();

    friend std::ostream &operator<<(std::ostream& os, const angajat& ang);

    int getAniExperienta() const ;
};

#endif // ANGAJAT_H
