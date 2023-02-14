#ifndef LOGIKA_H
#define LOGIKA_H
#include <string>

value class Logika
{
private:
    int licznikG;
    int licznikK;
    int wyborGracza;
    int losowaCyfra;
 
public:
    std::string porownaj();
    void reset_func();
    int getLicznikG();
    int getLicznikK();
    int koniec();
    int getWyborGracza();
    int getLosowaCyfra();
    int setWyborGracza(int GraczKlik);
};
#endif
