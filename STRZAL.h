#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Strzal
{
public:
    int x1,y1;

    string strzal1, strzal2, strzal3, strzal4, strzal5, strzal6, strzal7, strzal8, strzal9;

    int wspolrzedna_x, wspolrzedna_y;

    int trafiony_x, trafiony_y;

    int zapamietany_kierunek;

    char odp2, odp;

    int odp1;

    int licznik=0;

    void strzal_gracza(int **&ulozenie_statkow_komputera);

    void strzal(int **&ulozenie_statkow_komputera,int **&moja_tablica_przechowywana_przez_komputer);
};
