#include <iostream>
#include <vector>
#include "angajat.h"
#include "carlig.h"
#include "inventar.h"
#include "magazin.h"
#include "mamaliga.h"
#include "undita.h"

using namespace std;

int main()
{
    angajat ang1 = angajat("Florin",1700,"5020808255698",8);
    angajat ang2 = angajat("Horia",2000,"5020808144751",10);
  ///  angajat ang3 = ang2; // aici am apelat cc
    angajat ang3 = angajat("Vali",2500,"5632525144478",12);
  ///  ang3 = ang2; //Aici am apelat op=

    std::vector<angajat> v1;
    v1.push_back(ang1);
    v1.push_back(ang2);
    v1.push_back(ang3);

    undita und1 = undita(3,"carbon",4,50);
    undita und2 = undita(5,"fibra de sticla",6,70);
    undita und3 = undita(4,"carbon 20T",10,20);

    std::vector<undita> v2;
    v2.push_back(und1);
    v2.push_back(und2);
    v2.push_back(und3);
    /// Am creat vectorul cu undite

    carlig carr1 = carlig(6,"rosu",50,20);
    carlig carr2 = carlig(8,"rosu",60,10);
    carlig carr3 = carlig(10,"albastru",70,40);

    std::vector<carlig> v3;
    v3.push_back(carr1);
    v3.push_back(carr2);
    v3.push_back(carr3);
    /// Am creat vectorul cu carlige

    mamaliga mam1 = mamaliga("galben","usturoi",10,50);
    mamaliga mam2 = mamaliga("galben","capsuna",10,60);
    mamaliga mam3 = mamaliga("rosu","pepene",15,70);

    std::vector<mamaliga> v4;
    v4.push_back(mam1);
    v4.push_back(mam2);
    v4.push_back(mam3);
    /// Am creat vectorul cu mamaligi

    inventar inv = inventar(v2,v3,v4); /// Am creat inventarul cu obiecte de vanzare
    std::vector<inventar> v5;
    v5.push_back(inv);

    magazin mag1 = magazin(v1,v5,"Kogalniceanu 14");
    std::vector<magazin> v6;
    v6.push_back(mag1);

    for(auto i=0ull;i<v1.size();i++)
    {
        std::cout<<"Angajatul "<<i+1<<" : "<<std::endl;
        std::cout<<v1[i];
        std::cout<<std::endl;
    }
    /// Afisez angajatii
    std::cout<<"============================"<<std::endl<<std::endl;

   std::cout<<mag1; // Afisez datele magazinului

   std::cout<<"============================"<<std::endl<<std::endl;

    for(auto i=0ull;i<v2.size();i++)
    {
        std::cout<<"Tipul "<<i+1<<" de undita : "<<std::endl;
        std::cout<<v2[i];
        std::cout<<std::endl;
    }
    std::cout<<"============================"<<std::endl<<std::endl;
    /// Afisez unditele

    for(auto i=0ull;i<v3.size();i++)
    {
        std::cout<<"Tipul "<<i+1<<" de carlig : "<<std::endl;
        std::cout<<v3[i];
        std::cout<<std::endl;
    }
    std::cout<<"============================"<<std::endl<<std::endl;
    /// Afisez carligele

    for(auto i=0ull;i<v4.size();i++)
    {
        std::cout<<"Tipul "<<i+1<<" de mamaliga : "<<std::endl;
        std::cout<<v4[i];
        std::cout<<std::endl;
    };
    std::cout<<"============================"<<std::endl<<std::endl;
    /// Afisez mamaligile


      std::cout<<inv; //Afisez inventarul magazinului

      std::cout<<"============================"<<std::endl<<std::endl;

    inv.CalculInv();   // Functie membru care calculeaza valoarea totala a inventarului
    std::cout<<std::endl<<std::endl<<"============================"<<std::endl<<std::endl;

    inv.CreareMonturaIdeala();  //Functie membru care realizeaza montura ideala
        std::cout<<"============================"<<std::endl<<std::endl;

    mag1.CautareVanzator(mag1,10);   // FUnctie membru care cauta vanzatori cu anii de experienta pe care ii vreau eu
        std::cout<<"============================"<<std::endl<<std::endl;

  return 0;
}
