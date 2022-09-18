#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //NELEMENTS leírása helytelen, helyes: N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa'; //hiányzik a végéről a ;
    for (int i = 0; i; i++) //hiányoznak a for ciklus értékei
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:" << b[i] << std::endl; //nincs valódi kiiratás és nincs sor végi ;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS; i++) //N_ELEMENTS után ; kell
    {
        atlag += b[i]; //hiányzik a sor végi ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << " Hellow World by Lumiko717 (meghivott MOSZE feladat)" <<std::endl;
    return 0;
}
