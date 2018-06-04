#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Polozenie
{
public:
    int wspolrzedna_x, wspolrzedna_y, kierunek;
    const int N=10;
    int wielkosc;
    int ile;
    void losowanie_polozenia(int **&ulozenie_statkow_komputera);
    void wypelnij(int **&ulozenie_statkow_komputera);
    void drukuj(int **&ulozenie_statkow_kompuetra);
    void usun();
};
