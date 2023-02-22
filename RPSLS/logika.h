#ifndef LOGIKA_H
#define LOGIKA_H
#include <string>
#include <marshal.h>

using namespace System;


class Logika
{

// ==== Zmienne prywatne: ====
private:
    int licznikG;
    int licznikK;
    int wyborGracza;
    int losowaCyfra;
    std::string imieGracza;

// ==== Funkcje publiczne: ====
public:
    std::string porownaj();
    void reset_func();
    int getLicznikG();
    int getLicznikK();
    int koniec();
    int getWyborGracza();
    int getLosowaCyfra();
    int setWyborGracza(int GraczKlik);
    std::string setImieGracza(std::string imie);
    std::string getImieGracza(); 
};

#endif

