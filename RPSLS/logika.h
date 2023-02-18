#ifndef LOGIKA_H
#define LOGIKA_H
#include <string>

using namespace System;

public ref class Logika
{
private:
    int licznikG = 0;
    int licznikK = 0;
    int wyborGracza = 0;
    int losowaCyfra = 0;
    String^ imieGracza; 

public:
    String^ porownaj(); 
    void reset_func();
    int getLicznikG();
    int getLicznikK();
    int koniec();
    int getWyborGracza();
    int getLosowaCyfra();
    int setWyborGracza(int GraczKlik);
    void setImieGracza(String^ imie); 
    String^ getImieGracza(); 
};

#endif

