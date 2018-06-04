#include <iostream>
#include <cstdlib>
#include <ctime>
#include "STRZAL.h"

using namespace std;

void Strzal::strzal_gracza(int **&ulozenie_statkow_komputera)
{
    cout << "Twoja kolej. Podaj wspolrzedne, w ktore strzelasz" << endl;
    cin >> x1 >> y1;
    if(ulozenie_statkow_komputera[x1-1][y1-1]>=2 && ulozenie_statkow_komputera[x1-1][y1-1]<=9)
    {
        cout << "Brawo trafiles!" << endl;
        strzal_gracza(ulozenie_statkow_komputera);
    }
    else
    {
        cout << "Nie trafiles!" << endl;
    }
}

void Strzal::strzal(int **&ulozenie_statkow_komputera,int **&moja_tablica_przechowywana_przez_komputer)
{
    int los=rand()%2+1;

    cout << "Wylosujemy teraz, kto bedzie strzelal jako pierwszy. Orzel(1) czy reszka(2) ?" << endl;

    cin >> odp1;

    if(odp1==1)
    {
        if(los==1)
        {
            cout << "Orzel! Ty zaczynasz" << endl;

            strzal_gracza(ulozenie_statkow_komputera);
        }
        else
        {
            cout << "Reszka! Ja zaczynam!" << endl;
            goto strzal4;
        }
    }

    if(odp1==2)
    {
        if(los==2)
        {
            cout << "Reszka! Ty zaczynasz" << endl;

            strzal_gracza(ulozenie_statkow_komputera);
        }
        else
        {
            cout << "Orzel! Ja zaczynam!" << endl;
            goto strzal4;
        }
    }

strzal4:

    wspolrzedna_x=rand()%10+1;

    wspolrzedna_y=rand()%10+1;

    cout << "Strzelam w punkt (" << wspolrzedna_y << " , " << wspolrzedna_x << ")." << "Czy trafilem? Odpowiedz t lub n" << endl;

    cin >> odp;

    int liczba_masztow=0;

    int licznik=0;

    if(odp=='t')
    {
        if(moja_tablica_przechowywana_przez_komputer[wspolrzedna_x-1][wspolrzedna_y-1]!=1){
            liczba_masztow++;
            licznik++;
            moja_tablica_przechowywana_przez_komputer[wspolrzedna_x-1][wspolrzedna_y-1]=1;
            int kierunek=rand()%4+1;
            trafiony_x=wspolrzedna_x;
            trafiony_y=wspolrzedna_y;
            zapamietany_kierunek=kierunek;
            if(wspolrzedna_y==10)
            {
                kierunek=rand()%4+1;
                if(kierunek==2)
                {
                    kierunek=rand()%4+1;
                }
                zapamietany_kierunek=kierunek;
            }
            if(wspolrzedna_x==10)
            {
                kierunek=rand()%3+1;
                zapamietany_kierunek=kierunek;
            }
            if(wspolrzedna_y==1 && wspolrzedna_x==1)
            {
                kierunek=rand()%2+1;
                zapamietany_kierunek=kierunek;
            }
            if(wspolrzedna_y==10 && wspolrzedna_x==1)
            {
                kierunek=rand()%4+1;
                zapamietany_kierunek=kierunek;
            }
            if(wspolrzedna_y==10 && wspolrzedna_x==10)
            {
                kierunek=rand()%2+3;
                zapamietany_kierunek=kierunek;
            }
            if(wspolrzedna_y==1 && wspolrzedna_x==10)
            {
                kierunek=rand()%2+2;
                zapamietany_kierunek=kierunek;
            }
            if(kierunek==1)
            {
                for(int j=wspolrzedna_y-1;j<wspolrzedna_y;j++)
                {
                    for(int i=wspolrzedna_x;i<wspolrzedna_x+(10-wspolrzedna_x);i++)
                    {
                        cout << "Strzelam w punkt (" << j+1 << " , " << i+1 << ")." << "Czy trafilem? Odpowiedz t lub n" << endl;

                        cin >> odp;

                        if(odp!='t')
                        {

                            goto strzal1;

                        }
                        else
                        {
                            if(i==9)
                            {
                                goto strzal3;
                            }

                            liczba_masztow++;

                            licznik++;

                            moja_tablica_przechowywana_przez_komputer[i][j]=1;

                        }
                    }
                }
            }
            if(kierunek==2)
            {
                for(int i=wspolrzedna_x-1;i<wspolrzedna_x;i++)
                {
                    for(int j=wspolrzedna_y;i<wspolrzedna_y+(10-wspolrzedna_y);j++)
                    {
                        cout << "Strzelam w punkt (" << j+1 << " , " << i+1 << ")." << "Czy trafilem? Odpowiedz t lub n" << endl;

                        cin >> odp;

                        if(odp!='t')
                        {

                            goto strzal1;
                        }
                        else
                        {
                            if(j==9)
                            {
                                goto strzal3;
                            }
                            liczba_masztow++;
                            licznik++;
                            moja_tablica_przechowywana_przez_komputer[i][j]=1;
                        }
                    }
                }
            }
            if(kierunek==3)
            {
                for(int j=wspolrzedna_y-1;j<wspolrzedna_y;j++)
                {
                    for(int i=wspolrzedna_x-2;i>wspolrzedna_x-10;i--)
                    {
                        cout << "Strzelam w punkt (" << j+1 << " , " << i+1 << ")." << "Czy trafilem? Odpowiedz t lub n" << endl;

                        cin >> odp;

                        if(odp!='t')
                        {

                            goto strzal1;
                        }
                        else
                        {
                            if(i==0)
                            {
                                goto strzal3;
                            }
                            liczba_masztow++;
                            licznik++;

                            moja_tablica_przechowywana_przez_komputer[i][j]=1;

                        }
                    }
                }
            }
            if(kierunek==4)
            {
                for(int i=wspolrzedna_x-1;i<wspolrzedna_x;i++)
                {
                    for(int j=wspolrzedna_y-2;j>wspolrzedna_y-10;j--)
                    {
                        cout << "Strzelam w punkt (" << j+1 << " , " << i+1 << ")." << "Czy trafilem? Odpowiedz t lub n" << endl;

                        cin >> odp;

                        if(odp!='t')
                        {

                            goto strzal1;
                        }
                        else
                        {

                            if(j==0)
                            {
                                goto strzal3;
                            }
                            liczba_masztow++;
                            licznik++;

                            moja_tablica_przechowywana_przez_komputer[i][j]=1;
                        }
                    }
                }
            }

        }
        else
        {
strzal1:

            strzal_gracza(ulozenie_statkow_komputera);

            if(licznik==1)
            {
                goto strzal2;
            }
            else
            {
                goto strzal3;
            }
        }


        if(licznik==1)
        {
strzal2:

            int kierunek1;
            kierunek1=rand()%4+1;
            moja_tablica_przechowywana_przez_komputer[trafiony_x-1][trafiony_y-1]=1;
            if(trafiony_y==10)
            {
                kierunek1=rand()%3+2;

            }
            if(trafiony_x==10)
            {
                kierunek1=rand()%3+1;

            }
            if(trafiony_y==1 && trafiony_x==1)
            {
                kierunek1=rand()%2+1;

            }
            if(trafiony_y==10 && trafiony_x==1)
            {
                kierunek1=rand()%4+1;

            }
            if(trafiony_y==10 && trafiony_x==10)
            {
                kierunek1=rand()%2+3;

            }
            if(trafiony_y==1 && trafiony_x==10)
            {
                kierunek1=rand()%2+2;

            }
            if(kierunek1==1)
            {
                for(int j=trafiony_y-1;j<trafiony_y;j++)
                {
                    for(int i=trafiony_x;i<trafiony_x+(10-trafiony_x);i++)
                    {
                        cout << "Strzelam w punkt (" << j+1 << " , " << i+1 << ")." << "Czy trafilem? Odpowiedz t lub n" << endl;

                        cin >> odp;

                        if(odp!='t')
                        {

                            zapamietany_kierunek=kierunek1;
                            trafiony_x=i+1;
                            trafiony_y=j+1;

                            goto strzal1;

                        }
                        else
                        {
                            liczba_masztow++;
                            licznik++;

                            zapamietany_kierunek=kierunek1;
                            trafiony_x=i+1;
                            trafiony_y=j+1;

                            moja_tablica_przechowywana_przez_komputer[i][j]=1;

                        }
                    }
                }
            }
            if(kierunek1==2)
            {
                for(int i=trafiony_x-1;i<trafiony_x;i++)
                {
                    for(int j=trafiony_y;i<trafiony_y+(10-trafiony_y);j++)
                    {
                        cout << "Strzelam w punkt (" << j+1 << " , " << i+1 << ")." << "Czy trafilem? Odpowiedz t lub n" << endl;

                        cin >> odp;

                        if(odp!='t')
                        {

                            goto strzal1;
                        }
                        else
                        {
                            liczba_masztow++;
                            licznik++;

                            zapamietany_kierunek=kierunek1;
                            trafiony_x=i+1;
                            trafiony_y=j+1;

                            moja_tablica_przechowywana_przez_komputer[i][j]=1;
                        }
                    }
                }
            }
            if(kierunek1==3)
            {
                for(int j=trafiony_y-1;j<trafiony_y;j++)
                {
                    for(int i=trafiony_x-2;i>trafiony_x-10;i--)
                    {
                        cout << "Strzelam w punkt (" << j+1 << " , " << i+1 << ")." << "Czy trafilem? Odpowiedz t lub n" << endl;

                        cin >> odp;

                        if(odp!='t')
                        {

                            goto strzal1;
                        }
                        else
                        {
                            liczba_masztow++;
                            licznik++;

                            zapamietany_kierunek=kierunek1;
                            trafiony_x=i+1;
                            trafiony_y=j+1;

                            moja_tablica_przechowywana_przez_komputer[i][j]=1;

                        }
                    }
                }
            }
            if(kierunek1==4)
            {
                for(int i=trafiony_x-1;i<trafiony_x;i++)
                {
                    for(int j=trafiony_y-2;j>trafiony_y-10;j--)
                    {
                        cout << "Strzelam w punkt (" << j+1 << " , " << i+1 << ")." << "Czy trafilem? Odpowiedz t lub n" << endl;

                        cin >> odp;

                        if(odp!='t')
                        {

                            goto strzal1;
                        }
                        else
                        {

                            liczba_masztow++;
                            licznik++;

                            zapamietany_kierunek=kierunek1;
                            trafiony_x=i+1;
                            trafiony_y=j+1
                                    ;

                            moja_tablica_przechowywana_przez_komputer[i][j]=1;
                        }
                    }
                }
            }

        }
        if(licznik>1)
        {
strzal3:

            int kierunek2;
            moja_tablica_przechowywana_przez_komputer[trafiony_x-1][trafiony_y-1]=1;
            if(trafiony_y==10)
            {
                kierunek2=rand()%3+2;

            }
            if(trafiony_x==10)
            {
                kierunek2=rand()%3+1;

            }
            if(trafiony_y==1 && trafiony_x==1)
            {
                kierunek2=rand()%2+1;

            }
            if(trafiony_y==10 && trafiony_x==1)
            {
                kierunek2=rand()%4+1;

            }
            if(trafiony_y==10 && trafiony_x==10)
            {
                kierunek2=rand()%2+3;

            }
            if(trafiony_y==1 && trafiony_x==10)
            {
                kierunek2=rand()%2+2;

            }
            if(zapamietany_kierunek==1)
            {
                for(int j=trafiony_y-1;j<trafiony_y;j++)
                {
                    for(int i=trafiony_x-2;i>trafiony_x-10;i--)
                    {
                        cout << "Strzelam w punkt (" << j+1 << " , " << i+1 << ")." << "Czy trafilem? Odpowiedz t lub n" << endl;

                        cin >> odp;

                        if(odp!='t')
                        {
                            cout << " " << liczba_masztow << "masztowiec zbity!" << endl;
strzal7:
                            strzal_gracza(ulozenie_statkow_komputera);
                            goto strzal4;
                        }
                        else
                        {
                            if(i==0)
                            {
                                cout << "Przeszedem cala plansze!" << endl;
                                goto strzal7;
                            }
                            licznik++;
                            liczba_masztow++;
                            trafiony_x=i+1;
                            trafiony_y=j+1;

                            moja_tablica_przechowywana_przez_komputer[i][j]=1;

                        }
                    }
                }
            }
            if(zapamietany_kierunek==2)
            {
                for(int i=trafiony_x-1;i<trafiony_x;i++)
                {
                    for(int j=trafiony_y-2;j>trafiony_y-10;j--)
                    {
                        cout << "Strzelam w punkt (" << j+1 << " , " << i+1 << ")." << "Czy trafilem? Odpowiedz t lub n" << endl;

                        cin >> odp;

                        if(odp!='t')
                        {
                            cout << " " << liczba_masztow << "masztowiec zbity!" << endl;
strzal6:
                            strzal_gracza(ulozenie_statkow_komputera);
                            goto strzal4;
                        }
                        else
                        {
                            licznik++;
                            if(j==0)
                            {
                                cout << "Przeszedem cala plansze!" << endl;
                                goto strzal6;
                            }
                            liczba_masztow++;
                            trafiony_x=i+1;
                            trafiony_y=j+1;

                            moja_tablica_przechowywana_przez_komputer[i][j]=1;
                        }
                    }
                }
            }
            if(zapamietany_kierunek==3)
            {
                for(int j=trafiony_y-1;j<trafiony_y;j++)
                {
                    for(int i=trafiony_x;i<trafiony_x+(10-trafiony_x);i++)
                    {
                        cout << "Strzelam w punkt (" << j+1 << " , " << i+1 << ")." << "Czy trafilem? Odpowiedz t lub n" << endl;

                        cin >> odp;

                        if(odp!='t')
                        {
                            cout << " " << liczba_masztow << "masztowiec zbity!" << endl;
strzal8:
                            strzal_gracza(ulozenie_statkow_komputera);
                            goto strzal4;
                        }
                        else
                        {

                            if(i==9)
                            {
                                cout << "Przeszedem cala plansze!" << endl;
                                goto strzal8;
                            }
                            licznik++;
                            liczba_masztow++;
                            trafiony_x=i+1;
                            trafiony_y=j+1;

                            moja_tablica_przechowywana_przez_komputer[i][j]=1;

                        }
                    }
                }
            }
            if(zapamietany_kierunek==4)
            {
                for(int i=trafiony_x-1;i<trafiony_x;i++)
                {
                    for(int j=trafiony_y;i<trafiony_y+(10-trafiony_y);j++)
                    {
                        cout << "Strzelam w punkt (" << j+1 << " , " << i+1 << ")." << "Czy trafilem? Odpowiedz t lub n" << endl;

                        cin >> odp;

                        if(odp!='t')
                        {
                            cout << " " << liczba_masztow << "masztowiec zbity!" << endl;
strzal9:
                            strzal_gracza(ulozenie_statkow_komputera);
                            goto strzal4;
                        }
                        else
                        {
                            if(j==9)
                            {
                                cout << "Przeszedem cala plansze!" << endl;
                                goto strzal9;
                            }
                            licznik++;
                            liczba_masztow++;
                            trafiony_x=i+1;
                            trafiony_y=j+1;

                            moja_tablica_przechowywana_przez_komputer[i][j]=1;
                        }
                    }
                }
            }
        }
    }
    else
    {
        goto strzal4;
    }
    strzal(ulozenie_statkow_komputera,moja_tablica_przechowywana_przez_komputer);
}
