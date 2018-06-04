#include <iostream>
#include <cstdlib>
#include <ctime>
#include "LOSOWANIE.h"

void Polozenie::losowanie_polozenia(int **&ulozenie_statkow_komputera)
{

    string polozenie2;

polozenie2:

    cout << "Prosze podac ile i jakiej wielkosci mam zrobic statki" << endl;

    cin >> ile >> wielkosc;

    for(int m=0;m<ile;m++){

        string polozenie1;

        int udane=0;

polozenie1:


        kierunek=rand()%2+1;

        if(kierunek==1)
        {
            wspolrzedna_x=rand()%(10-wielkosc)+1;
            wspolrzedna_y=rand()%2+1;
            int licznik=0;
            if(wspolrzedna_x+(-1+wielkosc)<=10){
                if(wspolrzedna_x==1 && wspolrzedna_y==1){
                    for(int j=wspolrzedna_y-1;j<wspolrzedna_y;j++)
                    {
                        for(int i=wspolrzedna_x-1;i<(wspolrzedna_x+(-1+wielkosc));i++)
                        {
                            if((ulozenie_statkow_komputera[i][j+1]>=2 && ulozenie_statkow_komputera[i][j+1]<=9) || (ulozenie_statkow_komputera[i+1][j+1]>=2 && ulozenie_statkow_komputera[i+1][j+1]<=9) || (ulozenie_statkow_komputera[i+1][j]>=2 && ulozenie_statkow_komputera[i+1][j]<=9))
                            {
                                licznik++;
                            }
                        }
                    }
                    if(licznik==0)
                    {
                        for(int j=wspolrzedna_y-1;j<wspolrzedna_y;j++)
                        {
                            for(int i=wspolrzedna_x-1;i<(wspolrzedna_x+(-1+wielkosc));i++)
                            {
                                ulozenie_statkow_komputera[i][j]=wielkosc;
                            }
                        }
                    }else{
                        goto polozenie1;
                    }
                }
                if(wspolrzedna_x==1 && wspolrzedna_y==10){
                    for(int j=wspolrzedna_y-1;j<wspolrzedna_y;j++)
                    {
                        for(int i=wspolrzedna_x-1;i<(wspolrzedna_x+(-1+wielkosc));i++)
                        {
                            if((ulozenie_statkow_komputera[i][j-1]>=2 && ulozenie_statkow_komputera[i][j-1]<=9) || (ulozenie_statkow_komputera[i+1][j-1]>=2 && ulozenie_statkow_komputera[i+1][j-1]<=9) || (ulozenie_statkow_komputera[i+1][j]>=2 && ulozenie_statkow_komputera[i+1][j]<=9))
                            {
                                licznik++;
                            }
                        }
                    }
                    if(licznik==0)
                    {
                        for(int j=wspolrzedna_y-1;j<wspolrzedna_y;j++)
                        {
                            for(int i=wspolrzedna_x-1;i<(wspolrzedna_x+(-1+wielkosc));i++)
                            {
                                ulozenie_statkow_komputera[i][j]=wielkosc;
                            }
                        }
                    }else{
                        goto polozenie1;
                    }
                }
                if(wspolrzedna_x==1){
                    for(int j=wspolrzedna_y-1;j<wspolrzedna_y;j++)
                    {
                        for(int i=wspolrzedna_x-1;i<(wspolrzedna_x+(-1+wielkosc));i++)
                        {
                            if((ulozenie_statkow_komputera[i][j+1]>=2 && ulozenie_statkow_komputera[i][j+1]<=9) || (ulozenie_statkow_komputera[i+1][j+1]>=2 && ulozenie_statkow_komputera[i+1][j+1]<=9) || (ulozenie_statkow_komputera[i+1][j]>=2 && ulozenie_statkow_komputera[i+1][j]<=9) || (ulozenie_statkow_komputera[i+1][j-1]>=2 && ulozenie_statkow_komputera[i+1][j-1]<=9) || (ulozenie_statkow_komputera[i][j-1]>=2 && ulozenie_statkow_komputera[i][j-1]<=9))
                            {
                                licznik++;
                            }
                        }
                    }
                    if(licznik==0)
                    {
                        for(int j=wspolrzedna_y-1;j<wspolrzedna_y;j++)
                        {
                            for(int i=wspolrzedna_x-1;i<(wspolrzedna_x+(-1+wielkosc));i++)
                            {
                                ulozenie_statkow_komputera[i][j]=wielkosc;
                            }
                        }
                    }else{
                        goto polozenie1;
                    }
                }
                if(wspolrzedna_y==1){
                    for(int j=wspolrzedna_y-1;j<wspolrzedna_y;j++)
                    {
                        for(int i=wspolrzedna_x-1;i<(wspolrzedna_x+(-1+wielkosc));i++)
                        {
                            if((ulozenie_statkow_komputera[i][j+1]>=2 && ulozenie_statkow_komputera[i][j+1]<=9) || (ulozenie_statkow_komputera[i+1][j+1]>=2 && ulozenie_statkow_komputera[i+1][j+1]<=9) || (ulozenie_statkow_komputera[i+1][j+1]>=2 && ulozenie_statkow_komputera[i+1][j+1]<=9)  || (ulozenie_statkow_komputera[i+1][j]>=2 && ulozenie_statkow_komputera[i+1][j]<=9) || (ulozenie_statkow_komputera[i-1][j+1]>=2 && ulozenie_statkow_komputera[i-1][j+1]<=9) || (ulozenie_statkow_komputera[i-1][j]>=2 && ulozenie_statkow_komputera[i-1][j]<=9))
                            {
                                licznik++;
                            }
                        }
                    }
                    if(licznik==0)
                    {
                        for(int j=wspolrzedna_y-1;j<wspolrzedna_y;j++)
                        {
                            for(int i=wspolrzedna_x-1;i<(wspolrzedna_x+(-1+wielkosc));i++)
                            {
                                ulozenie_statkow_komputera[i][j]=wielkosc;
                            }

                        }
                    }else{

                        goto polozenie1;
                    }
                }
                if(wspolrzedna_y==10){
                    for(int j=wspolrzedna_y-1;j<wspolrzedna_y;j++)
                    {
                        for(int i=wspolrzedna_x-1;i<(wspolrzedna_x+(-1+wielkosc));i++)
                        {
                            if((ulozenie_statkow_komputera[i][j-1]>=2 && ulozenie_statkow_komputera[i][j-1]<=9) || (ulozenie_statkow_komputera[i+1][j-1]>=2 && ulozenie_statkow_komputera[i+1][j-1]<=9) || (ulozenie_statkow_komputera[i+1][j]>=2 && ulozenie_statkow_komputera[i+1][j]<=9) || (ulozenie_statkow_komputera[i-1][j-1]>=2 && ulozenie_statkow_komputera[i-1][j-1]<=9) || (ulozenie_statkow_komputera[i-1][j]>=2 && ulozenie_statkow_komputera[i-1][j]<=9))
                            {
                                licznik++;
                            }
                        }
                    }
                    if(licznik==0)
                    {
                        for(int j=wspolrzedna_y-1;j<wspolrzedna_y;j++)
                        {
                            for(int i=wspolrzedna_x-1;i<(wspolrzedna_x+(-1+wielkosc));i++)
                            {
                                ulozenie_statkow_komputera[i][j]=wielkosc;
                            }

                        }
                    }else{

                        goto polozenie1;
                    }
                }
            }
            if(wspolrzedna_x>=2 && wspolrzedna_x<=9 && wspolrzedna_y>=2 && wspolrzedna_y<=9)
            {
                for(int j=wspolrzedna_y-1;j<wspolrzedna_y;j++)
                {
                    for(int i=wspolrzedna_x-1;i<(wspolrzedna_x+(-1+wielkosc));i++)
                    {
                        if((ulozenie_statkow_komputera[i][j+1]>=2 && ulozenie_statkow_komputera[i][j+1]<=9) || (ulozenie_statkow_komputera[i][j-1]>=2 && ulozenie_statkow_komputera[i][j-1]<=9) || (ulozenie_statkow_komputera[i+1][j]>=2 && ulozenie_statkow_komputera[i+1][j]<=9) || (ulozenie_statkow_komputera[i-1][j]>=2 && ulozenie_statkow_komputera[i-1][j]<=9) || (ulozenie_statkow_komputera[i+1][j+1]>=2 && ulozenie_statkow_komputera[i+1][j+1]<=9) || (ulozenie_statkow_komputera[i+1][j-1]>=2 && ulozenie_statkow_komputera[i+1][j-1]<=9) || (ulozenie_statkow_komputera[i-1][j+1]>=2 && ulozenie_statkow_komputera[i-1][j+1]<=9) || (ulozenie_statkow_komputera[i-1][j-1]>=2 && ulozenie_statkow_komputera[i-1][j-1]<=9))
                        {
                            licznik++;
                        }
                    }
                }
                if(licznik==0)
                {
                    for(int j=wspolrzedna_y-1;j<wspolrzedna_y;j++)
                    {
                        for(int i=wspolrzedna_x-1;i<(wspolrzedna_x+(-1+wielkosc));i++)
                        {
                            ulozenie_statkow_komputera[i][j]=wielkosc;
                        }

                    }
                }else{

                    goto polozenie1;
                }
            }
        }
        if(kierunek==2)
        {
            int licznik=0;
            wspolrzedna_x=rand()%10+1;
            wspolrzedna_y=rand()%(10-wielkosc)+1;
            if((wspolrzedna_y+(-1+wielkosc))<=10)
            {
                if(wspolrzedna_x==1 && wspolrzedna_y==10){
                    for(int i=wspolrzedna_x-1;i<wspolrzedna_x;i++)
                    {
                        for(int j=wspolrzedna_y-1;j<(wspolrzedna_y+(-1+wielkosc));j++)
                        {
                            if((ulozenie_statkow_komputera[i][j-1]>=2 && ulozenie_statkow_komputera[i][j-1]<=9) || (ulozenie_statkow_komputera[i+1][j-1]>=2 && ulozenie_statkow_komputera[i+1][j-1]<=9) || (ulozenie_statkow_komputera[i+1][j]>=2 && ulozenie_statkow_komputera[i+1][j]<=9))
                            {
                                licznik++;
                            }
                        }
                    }
                    if(licznik==0)
                    {
                        for(int i=wspolrzedna_x-1;i<wspolrzedna_x;i++)
                        {
                            for(int j=wspolrzedna_y-1;j<(wspolrzedna_y+(-1+wielkosc));j++)
                            {
                                ulozenie_statkow_komputera[i][j]=wielkosc;
                            }

                        }
                    }else{

                        goto polozenie1;
                    }
                }
                if(wspolrzedna_x==1){
                    for(int i=wspolrzedna_x-1;i<wspolrzedna_x;i++)
                    {
                        for(int j=wspolrzedna_y-1;j<(wspolrzedna_y+(-1+wielkosc));j++)
                        {
                            if((ulozenie_statkow_komputera[i][j+1]>=2 && ulozenie_statkow_komputera[i][j+1]<=9) || (ulozenie_statkow_komputera[i+1][j+1]>=2 && ulozenie_statkow_komputera[i+1][j+1]<=9) || (ulozenie_statkow_komputera[i+1][j]>=2 && ulozenie_statkow_komputera[i+1][j]<=9) || (ulozenie_statkow_komputera[i+1][j-1]>=2 && ulozenie_statkow_komputera[i+1][j-1]<=9) || (ulozenie_statkow_komputera[i][j-1]>=2 && ulozenie_statkow_komputera[i][j-1]<=9))
                            {
                                licznik++;
                            }
                        }
                    }
                    if(licznik==0)
                    {
                        for(int i=wspolrzedna_x-1;i<wspolrzedna_x;i++)
                        {
                            for(int j=wspolrzedna_y-1;j<(wspolrzedna_y+(-1+wielkosc));j++)
                            {
                                ulozenie_statkow_komputera[i][j]=wielkosc;
                            }

                        }
                    }else{

                        goto polozenie1;
                    }
                }
                if(wspolrzedna_y==1){
                    for(int i=wspolrzedna_x-1;i<wspolrzedna_x;i++)
                    {
                        for(int j=wspolrzedna_y-1;j<(wspolrzedna_y+(-1+wielkosc));j++)
                        {
                            if((ulozenie_statkow_komputera[i][j-1]>=2 && ulozenie_statkow_komputera[i][j-1]<=9) || (ulozenie_statkow_komputera[i][j+1]>=2 && ulozenie_statkow_komputera[i][j+1]<=9) || (ulozenie_statkow_komputera[i+1][j+1]>=2 && ulozenie_statkow_komputera[i+1][j+1]<=9) || (ulozenie_statkow_komputera[i+1][j-1]>=2 && ulozenie_statkow_komputera[i+1][j-1]<=9) || (ulozenie_statkow_komputera[i+1][j]>=2 && ulozenie_statkow_komputera[i+1][j]<=9))
                            {
                                licznik++;
                            }
                        }
                    }
                    if(licznik==0)
                    {
                        for(int i=wspolrzedna_x-1;i<wspolrzedna_x;i++)
                        {
                            for(int j=wspolrzedna_y-1;j<(wspolrzedna_y+(-1+wielkosc));j++)
                            {
                                ulozenie_statkow_komputera[i][j]=wielkosc;
                            }

                        }
                    }else{

                        goto polozenie1;
                    }
                }
                if(wspolrzedna_y==10){
                    for(int i=wspolrzedna_x-1;i<wspolrzedna_x;i++)
                    {
                        for(int j=wspolrzedna_y-1;j<(wspolrzedna_y+(-1+wielkosc));j++)
                        {
                            if((ulozenie_statkow_komputera[i][j-1]>=2 && ulozenie_statkow_komputera[i][j-1]<=9) || (ulozenie_statkow_komputera[i+1][j-1]>=2 && ulozenie_statkow_komputera[i+1][j-1]<=9) || (ulozenie_statkow_komputera[i+1][j]>=2 && ulozenie_statkow_komputera[i+1][j]<=9) || (ulozenie_statkow_komputera[i-1][j-1]>=2 && ulozenie_statkow_komputera[i-1][j-1]<=9) || (ulozenie_statkow_komputera[i-1][j]>=2 && ulozenie_statkow_komputera[i-1][j]<=9))
                            {
                                licznik++;
                            }
                        }
                    }
                    if(licznik==0)
                    {
                        for(int i=wspolrzedna_x-1;i<wspolrzedna_x;i++)
                        {
                            for(int j=wspolrzedna_y-1;j<(wspolrzedna_y+(-1+wielkosc));j++)
                            {
                                ulozenie_statkow_komputera[i][j]=wielkosc;
                            }

                        }
                    }else{

                        goto polozenie1;
                    }
                }
                if(wspolrzedna_x>=2 && wspolrzedna_x<=9 && wspolrzedna_y>=2 && wspolrzedna_y<=9)
                {
                    for(int i=wspolrzedna_x-1;i<wspolrzedna_x;i++)
                    {
                        for(int j=wspolrzedna_y-1;j<(wspolrzedna_y+(-1+wielkosc));j++)
                        {
                            if((ulozenie_statkow_komputera[i][j+1]>=2 && ulozenie_statkow_komputera[i][j+1]<=9) || (ulozenie_statkow_komputera[i][j-1]>=2 && ulozenie_statkow_komputera[i][j-1]<=9) || (ulozenie_statkow_komputera[i+1][j]>=2 && ulozenie_statkow_komputera[i+1][j]<=9) || (ulozenie_statkow_komputera[i-1][j]>=2 && ulozenie_statkow_komputera[i-1][j]<=9) || (ulozenie_statkow_komputera[i+1][j+1]>=2 && ulozenie_statkow_komputera[i+1][j+1]<=9) || (ulozenie_statkow_komputera[i+1][j-1]>=2 && ulozenie_statkow_komputera[i+1][j-1]<=9) || (ulozenie_statkow_komputera[i-1][j+1]>=2 && ulozenie_statkow_komputera[i-1][j+1]<=9) || (ulozenie_statkow_komputera[i-1][j-1]>=2 && ulozenie_statkow_komputera[i-1][j-1]<=9))
                            {
                                licznik++;
                            }
                        }
                    }
                    if(licznik==0)
                    {
                        for(int i=wspolrzedna_x-1;i<wspolrzedna_x;i++)
                        {
                            for(int j=wspolrzedna_y-1;j<(wspolrzedna_y+(-1+wielkosc));j++)
                            {
                                ulozenie_statkow_komputera[i][j]=wielkosc;
                            }

                        }
                    }
                    else
                    {

                        goto polozenie1;
                    }
                }
            }
        }
    }
    char odp;

    cout << "Czy jeszcze jakies? Odpowiedz t lub n" << endl;

    cin >> odp;

    if(odp=='t')
    {
        goto polozenie2;
    }
}

void Polozenie::drukuj(int **&ulozenie_statkow_komputera)
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout << "\t" << ulozenie_statkow_komputera[i][j];
        }
        cout << endl;
    }
}

void Polozenie::wypelnij(int **&ulozenie_statkow_komputera)
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            ulozenie_statkow_komputera[i][j]=0;
        }
    }
}
