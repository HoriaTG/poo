#ifndef MAMALIGA_H
#define MAMALIGA_H
#include<iostream>
#include<vector>

class mamaliga
{
private :
    std::string culoare;
    std:: string aroma;
    int stoc;
    int pret;
public :

    mamaliga(const std::string& culoare, const std::string& aroma,int stoc,int pret);

    friend std::ostream &operator<<(std::ostream& os, const mamaliga& mam);

    int getPret()const;

    int getStoc()const;

    const std::string& getCuloare()const;

    const std::string& getAroma()const;

};

#endif // MAMALIGA_H
