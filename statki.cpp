#include "statki.h"
#include "ui_statki.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <QMessageBox>
#include <QDebug>
#include "strzal.h"
#include "losowanie.h"

STATKI::STATKI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::STATKI)
{
    ui->setupUi(this);

    ui->Tekst->setText("Rozpoczynamy grę w statki. Rozpoczniemy od ustawienia statków. Wybierz na panelu opcje 'Wyzeruj tablice', a następnie wybierz ilość i wielkość statków, zatwierdzając swoje wybory przyciskiem 'Ustaw'. Gdy zostaną ustawione wszystkie statki, wybierz orzeł lub reszka, naciśnij 'Start' i gra się ropocznie.");

    jedynki=0;

    dwojki=0;

    trojki=0;

    czworki=0;

    piatki=0;

    ui->Ilosc1->setText(QString::number(jedynki));

    ui->Ilosc2->setText(QString::number(dwojki));

    ui->Ilosc3->setText(QString::number(trojki));

    ui->Ilosc4->setText(QString::number(czworki));

    ui->Ilosc5->setText(QString::number(piatki));

    il1=0;

    il2=0;

    il3=0;

    il4=0;

    il5=0;

    il11=0;

    il22=0;

    il33=0;

    il44=0;

    il55=0;

    ui->Ustawione1->setText(QString::number(il1));

    ui->Ustawione2->setText(QString::number(il2));

    ui->Ustawione3->setText(QString::number(il3));

    ui->Ustawione4->setText(QString::number(il4));

    ui->Ustawione5->setText(QString::number(il5));

    udane=0;

    wielkosc=0;

    ile=0;

    ulozenie_statkow_komputera=new int *[N];

    for(int i=0;i<N;i++)
    {
        ulozenie_statkow_komputera[i]=new int [N];
    }

    moja_tablica_przechowywana_przez_komputer=new int *[N];

    for(int i=0;i<N;i++)
    {
        moja_tablica_przechowywana_przez_komputer[i]=new int [N];
    }

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            ulozenie_statkow_komputera[i][j]=0;
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            moja_tablica_przechowywana_przez_komputer[i][j]=0;
        }

}
}

STATKI::~STATKI()
{
    delete ui;

    for(int i=0;i<N;i++)
    {
        delete []ulozenie_statkow_komputera[i];
    }

    delete []ulozenie_statkow_komputera;

    for(int i=0;i<N;i++)
    {
        delete []moja_tablica_przechowywana_przez_komputer[i];
    }

    delete []moja_tablica_przechowywana_przez_komputer;
}

void STATKI::on_JedynkaX_clicked()
{
    Strzal::y1=1;
}

void STATKI::on_DwojkaX_clicked()
{
    Strzal::y1=2;
}

void STATKI::on_TrojkaX_clicked()
{
    Strzal::y1=3;
}

void STATKI::on_CzworkaX_clicked()
{
    Strzal::y1=4;
}

void STATKI::on_PiatkaX_clicked()
{
    Strzal::y1=5;
}

void STATKI::on_SzostkaX_clicked()
{
    Strzal::y1=6;
}

void STATKI::on_SiodemkaX_clicked()
{
    Strzal::y1=7;
}

void STATKI::on_OsemkaX_clicked()
{
    Strzal::y1=8;
}

void STATKI::on_DziewiatkaX_clicked()
{
    Strzal::y1=9;
}

void STATKI::on_DziesiatkaX_clicked()
{
    Strzal::y1=10;
}

void STATKI::on_JedynkaY_clicked()
{
    Strzal::x1=1;
}

void STATKI::on_DwojkaY_clicked()
{
    Strzal::x1=2;
}

void STATKI::on_TrojkaY_clicked()
{
    Strzal::x1=3;
}

void STATKI::on_CzworkaY_clicked()
{
    Strzal::x1=4;
}

void STATKI::on_PiatkaY_clicked()
{
    Strzal::x1=5;
}

void STATKI::on_SzostkaY_clicked()
{
    Strzal::x1=6;
}

void STATKI::on_SiodemkaY_clicked()
{
    Strzal::x1=7;
}

void STATKI::on_OsemkaY_clicked()
{
    Strzal::x1=8;
}

void STATKI::on_DziewiatkaY_clicked()
{
    Strzal::x1=9;
}

void STATKI::on_DziesiatkaY_clicked()
{
    Strzal::x1=10;
}

void STATKI::on_Strzal_clicked()
{
    int il101=0;
    int il102=0;
    int il103=0;
    int il104=0;
    int il105=0;
    if(ulozenie_statkow_komputera[x1-1][y1-1]>=1 && ulozenie_statkow_komputera[x1-1][y1-1]<=5){
    if(ulozenie_statkow_komputera[x1-1][y1-1]==1){
        ui->Tekst->setText("Brawo trafiles! Oddaj nastepny strzal!");
        ulozenie_statkow_komputera[x1-1][y1-1]=101;
    }
    if(ulozenie_statkow_komputera[x1-1][y1-1]==2){
        ui->Tekst->setText("Brawo trafiles! Oddaj nastepny strzal!");
        ulozenie_statkow_komputera[x1-1][y1-1]=102;
    }
    if(ulozenie_statkow_komputera[x1-1][y1-1]==3){
        ui->Tekst->setText("Brawo trafiles! Oddaj nastepny strzal!");
        ulozenie_statkow_komputera[x1-1][y1-1]=103;
    }
    if(ulozenie_statkow_komputera[x1-1][y1-1]==4){
        ui->Tekst->setText("Brawo trafiles! Oddaj nastepny strzal!");
        ulozenie_statkow_komputera[x1-1][y1-1]=104;
    }
    if(ulozenie_statkow_komputera[x1-1][y1-1]==5){
        ui->Tekst->setText("Brawo trafiles! Oddaj nastepny strzal!");
        ulozenie_statkow_komputera[x1-1][y1-1]=105;
    }
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(ulozenie_statkow_komputera[i][j]==101){
                    il101++;
                }
                if(ulozenie_statkow_komputera[i][j]==102){
                    il102++;
                }
                if(ulozenie_statkow_komputera[i][j]==103){
                    il103++;
                }
                if(ulozenie_statkow_komputera[i][j]==104){
                    il104++;
                }
                if(ulozenie_statkow_komputera[i][j]==105){
                    il105++;
                }
            }
        }
            int temp1=0;
            int temp2=0;
            int temp3=0;
            int temp4=0;
            int temp5=0;
            if(il101%1==0){
                temp1=il1-il101;
                ui->Ustawione1->setText(QString::number(temp1));
        if(il102%2==0){
            il102=il102/2;
            temp2=il2-il102;
            ui->Ustawione2->setText(QString::number(temp2));
        }
        if(il103%3==0){
            il103=il103/3;
            temp3=il3-il103;
            ui->Ustawione3->setText(QString::number(temp3));
        }
        if(il104%4==0){
            il104=il104/4;
            temp4=il4-il104;
            ui->Ustawione4->setText(QString::number(temp4));
        }
        if(il105%5==0){
            il105=il105/5;
            temp5=il5-il105;
            ui->Ustawione5->setText(QString::number(temp5));
        }
        if(temp1==0 && temp2==0 && temp3==0 && temp4==0 && temp5==0){
            ui->Tekst->setText("Zwyciężyłeś!");
        }
    }
    }
    else
    {
        ui->Tekst->setText("Nie trafiles!");
        strzal(moja_tablica_przechowywana_przez_komputer);
    }
}

void STATKI::on_Jedynka_clicked()
{
    Polozenie::wielkosc=1;
}

void STATKI::on_Dwojka_clicked()
{
    Polozenie::wielkosc=2;
}

void STATKI::on_Trojka_clicked()
{
    Polozenie::wielkosc=3;
}

void STATKI::on_Czworka_clicked()
{
    Polozenie::wielkosc=4;
}

void STATKI::on_Piatka_clicked()
{
    Polozenie::wielkosc=5;
}

void STATKI::on_Jedynka_2_clicked()
{
    Polozenie::ile=1;
}

void STATKI::on_Dwojka_2_clicked()
{
    Polozenie::ile=2;
}

void STATKI::on_Trojka_2_clicked()
{
    Polozenie::ile=3;
}

void STATKI::on_Czworka_2_clicked()
{
    Polozenie::ile=4;
}

void STATKI::on_Piatka_2_clicked()
{
    Polozenie::ile=5;
}

void STATKI::on_Ustaw_clicked()
{
    ustaw();
}

void STATKI::on_Orzel_clicked()
{
    Strzal::odp1=1;
    sprawdzam();
}

void STATKI::on_Reszka_clicked()
{
    Strzal::odp1=2;
    sprawdzam();
}

void STATKI::on_Start_clicked()
{
    ui->Tekst->setText("Wylosujemy, kto rozpocznie grę. Orzel czy reszka?");
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(ulozenie_statkow_komputera[i][j]==1){
                il1++;
                il11++;
            }
            if(ulozenie_statkow_komputera[i][j]==2){
                il2++;
                il22++;
            }
            if(ulozenie_statkow_komputera[i][j]==3){
                il3++;
                il33++;
            }
            if(ulozenie_statkow_komputera[i][j]==4){
                il4++;
                il44++;
            }
            if(ulozenie_statkow_komputera[i][j]==5){
                il5++;
                il55++;
            }
    }
}

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout << "\t" << ulozenie_statkow_komputera[i][j];
        }
        cout << endl;
    }

    il1=il1/1;

    il2=il2/2;

    il3=il3/3;

    il4=il4/4;

    il5=il5/5;

    ui->Ustawione1->setText(QString::number(il1));

    ui->Ustawione2->setText(QString::number(il2));

    ui->Ustawione3->setText(QString::number(il3));

    ui->Ustawione4->setText(QString::number(il4));

    ui->Ustawione5->setText(QString::number(il5));
}

void STATKI::ustaw()
{
    int udane=0;

    string polozenie1;

    polozenie1:

        while(udane!=Polozenie::ile){
            for(int i=udane;i<Polozenie::ile;i++){

                kierunek=rand()%2+1;

                if(kierunek==1)
                {
                    Polozenie::wspolrzedna_x=rand()%(10-Polozenie::wielkosc)+1;
                    Polozenie::wspolrzedna_y=rand()%10+1;
                    int licznik=0;
                    if(Polozenie::wspolrzedna_x+(-1+Polozenie::wielkosc)<=10){
                        if(Polozenie::wspolrzedna_x==1 && Polozenie::wspolrzedna_y==1){
                            for(int j=Polozenie::wspolrzedna_y-1;j<Polozenie::wspolrzedna_y;j++)
                            {
                                for(int i=Polozenie::wspolrzedna_x-1;i<(Polozenie::wspolrzedna_x+(-1+Polozenie::wielkosc));i++)
                                {
                                    if((STATKI::ulozenie_statkow_komputera[i][j+1]>=1 && STATKI::ulozenie_statkow_komputera[i][j+1]<=9) || (STATKI::ulozenie_statkow_komputera[i+1][j+1]>=1 && STATKI::ulozenie_statkow_komputera[i+1][j+1]<=9) || (STATKI::ulozenie_statkow_komputera[i+1][j]>=1 && STATKI::ulozenie_statkow_komputera[i+1][j]<=9))
                                    {
                                        licznik++;
                                    }
                                }
                            }
                            if(licznik==0)
                            {
                                for(int j=Polozenie::wspolrzedna_y-1;j<Polozenie::wspolrzedna_y;j++)
                                {
                                    for(int i=Polozenie::wspolrzedna_x-1;i<(Polozenie::wspolrzedna_x+(-1+Polozenie::wielkosc));i++)
                                    {
                                        STATKI::ulozenie_statkow_komputera[i][j]=Polozenie::wielkosc;
                                    }
                                }
                                udane++;
                            }else{
                                goto polozenie1;
                            }
                        }
                        if(Polozenie::wspolrzedna_x==1 && Polozenie::wspolrzedna_y==10){
                            for(int j=Polozenie::wspolrzedna_y-1;j<Polozenie::wspolrzedna_y;j++)
                            {
                                for(int i=Polozenie::wspolrzedna_x-1;i<(Polozenie::wspolrzedna_x+(-1+Polozenie::wielkosc));i++)
                                {
                                    if((STATKI::ulozenie_statkow_komputera[i][j-1]>=1 && STATKI::ulozenie_statkow_komputera[i][j-1]<=9) || (STATKI::ulozenie_statkow_komputera[i+1][j-1]>=1 && STATKI::ulozenie_statkow_komputera[i+1][j-1]<=9) || (STATKI::ulozenie_statkow_komputera[i+1][j]>=1 && STATKI::ulozenie_statkow_komputera[i+1][j]<=9))
                                    {
                                        licznik++;
                                    }
                                }
                            }
                            if(licznik==0)
                            {
                                for(int j=Polozenie::wspolrzedna_y-1;j<Polozenie::wspolrzedna_y;j++)
                                {
                                    for(int i=Polozenie::wspolrzedna_x-1;i<(Polozenie::wspolrzedna_x+(-1+Polozenie::wielkosc));i++)
                                    {
                                        STATKI::ulozenie_statkow_komputera[i][j]=Polozenie::wielkosc;
                                    }
                                }
                                udane++;
                            }else{
                                goto polozenie1;
                            }
                        }
                        if(Polozenie::wspolrzedna_x==1 && Polozenie::wspolrzedna_y!=1 && Polozenie::wspolrzedna_y!=10){
                            for(int j=Polozenie::wspolrzedna_y-1;j<Polozenie::wspolrzedna_y;j++)
                            {
                                for(int i=Polozenie::wspolrzedna_x-1;i<(Polozenie::wspolrzedna_x+(-1+Polozenie::wielkosc));i++)
                                {
                                    if((STATKI::ulozenie_statkow_komputera[i][j+1]>=1 && STATKI::ulozenie_statkow_komputera[i][j+1]<=9) || (STATKI::ulozenie_statkow_komputera[i+1][j+1]>=1 && STATKI::ulozenie_statkow_komputera[i+1][j+1]<=9) || (STATKI::ulozenie_statkow_komputera[i+1][j]>=1 && STATKI::ulozenie_statkow_komputera[i+1][j]<=9) || (STATKI::ulozenie_statkow_komputera[i+1][j-1]>=1 && STATKI::ulozenie_statkow_komputera[i+1][j-1]<=9) || (STATKI::ulozenie_statkow_komputera[i][j-1]>=1 && STATKI::ulozenie_statkow_komputera[i][j-1]<=9))
                                    {
                                        licznik++;
                                    }
                                }
                            }
                            if(licznik==0)
                            {
                                for(int j=Polozenie::wspolrzedna_y-1;j<Polozenie::wspolrzedna_y;j++)
                                {
                                    for(int i=Polozenie::wspolrzedna_x-1;i<(Polozenie::wspolrzedna_x+(-1+Polozenie::wielkosc));i++)
                                    {
                                        STATKI::ulozenie_statkow_komputera[i][j]=Polozenie::wielkosc;
                                    }
                                }
                                udane++;
                            }else{
                                goto polozenie1;
                            }
                        }
                        if(Polozenie::wspolrzedna_y==1 && Polozenie::wspolrzedna_x!=1 && Polozenie::wspolrzedna_x!=10){
                            for(int j=Polozenie::wspolrzedna_y-1;j<Polozenie::wspolrzedna_y;j++)
                            {
                                for(int i=Polozenie::wspolrzedna_x-1;i<(Polozenie::wspolrzedna_x+(-1+Polozenie::wielkosc));i++)
                                {
                                    if((STATKI::ulozenie_statkow_komputera[i-1][j]>=1 && STATKI::ulozenie_statkow_komputera[i-1][j]<=9) || (STATKI::ulozenie_statkow_komputera[i-1][j+1]>=1 && STATKI::ulozenie_statkow_komputera[i-1][j+1]<=9) || (STATKI::ulozenie_statkow_komputera[i][j+1]>=1 && STATKI::ulozenie_statkow_komputera[i][j+1]<=9) || (STATKI::ulozenie_statkow_komputera[i+1][j+1]>=1 && STATKI::ulozenie_statkow_komputera[i+1][j+1]<=9) || (STATKI::ulozenie_statkow_komputera[i+1][j]>=1 && STATKI::ulozenie_statkow_komputera[i+1][j]<=9))
                                    {
                                        licznik++;
                                    }
                                }
                            }
                            if(licznik==0)
                            {
                                for(int j=Polozenie::wspolrzedna_y-1;j<Polozenie::wspolrzedna_y;j++)
                                {
                                    for(int i=Polozenie::wspolrzedna_x-1;i<(Polozenie::wspolrzedna_x+(-1+Polozenie::wielkosc));i++)
                                    {
                                        STATKI::ulozenie_statkow_komputera[i][j]=Polozenie::wielkosc;
                                    }

                                }
                                udane++;
                            }else{

                                goto polozenie1;
                            }
                        }
                        if(Polozenie::wspolrzedna_y==10 && Polozenie::wspolrzedna_x!=1 && Polozenie::wspolrzedna_x!=10){
                            for(int j=Polozenie::wspolrzedna_y-1;j<Polozenie::wspolrzedna_y;j++)
                            {
                                for(int i=Polozenie::wspolrzedna_x-1;i<(Polozenie::wspolrzedna_x+(-1+Polozenie::wielkosc));i++)
                                {
                                    if((STATKI::ulozenie_statkow_komputera[i][j-1]>=1 && STATKI::ulozenie_statkow_komputera[i][j-1]<=9) || (STATKI::ulozenie_statkow_komputera[i+1][j-1]>=1 && STATKI::ulozenie_statkow_komputera[i+1][j-1]<=9) || (STATKI::ulozenie_statkow_komputera[i+1][j]>=1 && STATKI::ulozenie_statkow_komputera[i+1][j]<=9) || (STATKI::ulozenie_statkow_komputera[i-1][j-1]>=1 && STATKI::ulozenie_statkow_komputera[i-1][j-1]<=9) || (STATKI::ulozenie_statkow_komputera[i-1][j]>=1 && STATKI::ulozenie_statkow_komputera[i-1][j]<=9))
                                    {
                                        licznik++;
                                    }
                                }
                            }
                            if(licznik==0)
                            {
                                for(int j=Polozenie::wspolrzedna_y-1;j<Polozenie::wspolrzedna_y;j++)
                                {
                                    for(int i=Polozenie::wspolrzedna_x-1;i<(Polozenie::wspolrzedna_x+(-1+Polozenie::wielkosc));i++)
                                    {
                                        STATKI::ulozenie_statkow_komputera[i][j]=Polozenie::wielkosc;
                                    }

                                }
                                udane++;
                            }else{

                                goto polozenie1;
                            }
                        }
                        if(Polozenie::wspolrzedna_x>=2 && Polozenie::wspolrzedna_x<=9 && Polozenie::wspolrzedna_y>=2 && Polozenie::wspolrzedna_y<=9)
                        {
                            for(int j=Polozenie::wspolrzedna_y-1;j<Polozenie::wspolrzedna_y;j++)
                            {
                                for(int i=Polozenie::wspolrzedna_x-1;i<(Polozenie::wspolrzedna_x+(-1+Polozenie::wielkosc));i++)
                                {
                                    if((STATKI::ulozenie_statkow_komputera[i][j+1]>=1 && STATKI::ulozenie_statkow_komputera[i][j+1]<=9) || (STATKI::ulozenie_statkow_komputera[i+1][j+1]>=1 && STATKI::ulozenie_statkow_komputera[i+1][j+1]<=9) || (STATKI::ulozenie_statkow_komputera[i+1][j]>=1 && STATKI::ulozenie_statkow_komputera[i+1][j]<=9) || (STATKI::ulozenie_statkow_komputera[i+1][j-1]>=1 && STATKI::ulozenie_statkow_komputera[i+1][j-1]<=9) || (STATKI::ulozenie_statkow_komputera[i][j-1]>=1 && STATKI::ulozenie_statkow_komputera[i][j-1]<=9) || (STATKI::ulozenie_statkow_komputera[i-1][j-1]>=1 && STATKI::ulozenie_statkow_komputera[i-1][j-1]<=9) || (STATKI::ulozenie_statkow_komputera[i-1][j]>=1 && STATKI::ulozenie_statkow_komputera[i-1][j]<=9) || (STATKI::ulozenie_statkow_komputera[i-1][j+1]>=1 && STATKI::ulozenie_statkow_komputera[i-1][j+1]<=9))
                                    {
                                        licznik++;
                                    }
                                }
                            }
                            if(licznik==0)
                            {
                                for(int j=Polozenie::wspolrzedna_y-1;j<Polozenie::wspolrzedna_y;j++)
                                {
                                    for(int i=Polozenie::wspolrzedna_x-1;i<(Polozenie::wspolrzedna_x+(-1+Polozenie::wielkosc));i++)
                                    {
                                        STATKI::ulozenie_statkow_komputera[i][j]=Polozenie::wielkosc;
                                    }

                                }
                                udane++;
                            }else{

                                goto polozenie1;
                            }
                        }
                    }
                }

                if(kierunek==2)
                {
                    int licznik=0;
                    Polozenie::wspolrzedna_x=rand()%10+1;
                    Polozenie::wspolrzedna_y=rand()%(10-Polozenie::wielkosc)+1;
                    if((Polozenie::wspolrzedna_y+(-1+Polozenie::wielkosc))<=10)
                    {
                        if(Polozenie::wspolrzedna_x==1 && Polozenie::wspolrzedna_y==1){
                            for(int i=Polozenie::wspolrzedna_x-1;i<Polozenie::wspolrzedna_x;i++)
                            {
                                for(int j=Polozenie::wspolrzedna_y-1;j<(Polozenie::wspolrzedna_y+(-1+Polozenie::wielkosc));j++)
                                {
                                    if((STATKI::ulozenie_statkow_komputera[i][j+1]>=1 && STATKI::ulozenie_statkow_komputera[i][j+1]<=9) || (STATKI::ulozenie_statkow_komputera[i+1][j+1]>=1 && STATKI::ulozenie_statkow_komputera[i+1][j+1]<=9) || (STATKI::ulozenie_statkow_komputera[i+1][j]>=1 && STATKI::ulozenie_statkow_komputera[i+1][j]<=9))
                                    {
                                        licznik++;
                                    }
                                }
                            }
                            if(licznik==0)
                            {
                                for(int i=Polozenie::wspolrzedna_x-1;i<Polozenie::wspolrzedna_x;i++)
                                {
                                    for(int j=Polozenie::wspolrzedna_y-1;j<(Polozenie::wspolrzedna_y+(-1+Polozenie::wielkosc));j++)
                                    {
                                        STATKI::ulozenie_statkow_komputera[i][j]=Polozenie::wielkosc;
                                    }

                                }
                                udane++;
                            }else{

                                goto polozenie1;
                            }
                        }
                        if(Polozenie::wspolrzedna_x==1 && Polozenie::wspolrzedna_y==10){
                            for(int i=Polozenie::wspolrzedna_x-1;i<Polozenie::wspolrzedna_x;i++)
                            {
                                for(int j=Polozenie::wspolrzedna_y-1;j<(Polozenie::wspolrzedna_y+(-1+Polozenie::wielkosc));j++)
                                {
                                    if((STATKI::ulozenie_statkow_komputera[i][j-1]>=1 && STATKI::ulozenie_statkow_komputera[i][j-1]<=9) || (STATKI::ulozenie_statkow_komputera[i+1][j-1]>=1 && STATKI::ulozenie_statkow_komputera[i+1][j-1]<=9) || (STATKI::ulozenie_statkow_komputera[i+1][j]>=1 && STATKI::ulozenie_statkow_komputera[i+1][j]<=9))
                                    {
                                        licznik++;
                                    }
                                }
                            }
                            if(licznik==0)
                            {
                                for(int i=Polozenie::wspolrzedna_x-1;i<Polozenie::wspolrzedna_x;i++)
                                {
                                    for(int j=Polozenie::wspolrzedna_y-1;j<(Polozenie::wspolrzedna_y+(-1+Polozenie::wielkosc));j++)
                                    {
                                        STATKI::ulozenie_statkow_komputera[i][j]=Polozenie::wielkosc;
                                    }

                                }
                                udane++;
                            }else{

                                goto polozenie1;
                            }
                        }
                        if(Polozenie::wspolrzedna_x==1 && Polozenie::wspolrzedna_y!=1 && Polozenie::wspolrzedna_y!=10){
                            for(int i=Polozenie::wspolrzedna_x-1;i<Polozenie::wspolrzedna_x;i++)
                            {
                                for(int j=Polozenie::wspolrzedna_y-1;j<(Polozenie::wspolrzedna_y+(-1+Polozenie::wielkosc));j++)
                                {
                                    if((STATKI::ulozenie_statkow_komputera[i][j+1]>=1 && STATKI::ulozenie_statkow_komputera[i][j+1]<=9) || (STATKI::ulozenie_statkow_komputera[i+1][j+1]>=1 && STATKI::ulozenie_statkow_komputera[i+1][j+1]<=9) || (STATKI::ulozenie_statkow_komputera[i+1][j]>=1 && STATKI::ulozenie_statkow_komputera[i+1][j]<=9) || (STATKI::ulozenie_statkow_komputera[i+1][j-1]>=1 && STATKI::ulozenie_statkow_komputera[i+1][j-1]<=9) || (STATKI::ulozenie_statkow_komputera[i][j-1]>=1 && STATKI::ulozenie_statkow_komputera[i][j-1]<=9))
                                    {
                                        licznik++;
                                    }
                                }
                            }
                            if(licznik==0)
                            {
                                for(int i=Polozenie::wspolrzedna_x-1;i<Polozenie::wspolrzedna_x;i++)
                                {
                                    for(int j=Polozenie::wspolrzedna_y-1;j<(Polozenie::wspolrzedna_y+(-1+Polozenie::wielkosc));j++)
                                    {
                                        STATKI::ulozenie_statkow_komputera[i][j]=Polozenie::wielkosc;
                                    }

                                }
                                udane++;
                            }else{

                                goto polozenie1;
                            }
                        }
                        if(Polozenie::wspolrzedna_y==1 && Polozenie::wspolrzedna_x!=1 && Polozenie::wspolrzedna_x!=10){
                            for(int i=Polozenie::wspolrzedna_x-1;i<Polozenie::wspolrzedna_x;i++)
                            {
                                for(int j=Polozenie::wspolrzedna_y-1;j<(Polozenie::wspolrzedna_y+(-1+Polozenie::wielkosc));j++)
                                {
                                    if(1)
                                    {
                                        licznik++;
                                    }
                                }
                            }
                            if(licznik==0)
                            {
                                for(int i=Polozenie::wspolrzedna_x-1;i<Polozenie::wspolrzedna_x;i++)
                                {
                                    for(int j=Polozenie::wspolrzedna_y-1;j<(Polozenie::wspolrzedna_y+(-1+Polozenie::wielkosc));j++)
                                    {
                                        STATKI::ulozenie_statkow_komputera[i][j]=Polozenie::wielkosc;
                                    }

                                }
                                udane++;
                            }else{

                                goto polozenie1;
                            }
                        }
                        if(Polozenie::wspolrzedna_y==10 && Polozenie::wspolrzedna_x!=1 && Polozenie::wspolrzedna_x!=10){
                            for(int i=Polozenie::wspolrzedna_x-1;i<Polozenie::wspolrzedna_x;i++)
                            {
                                for(int j=Polozenie::wspolrzedna_y-1;j<(Polozenie::wspolrzedna_y+(-1+Polozenie::wielkosc));j++)
                                {
                                    if((STATKI::ulozenie_statkow_komputera[i][j-1]>=1 && STATKI::ulozenie_statkow_komputera[i][j-1]<=9) || (STATKI::ulozenie_statkow_komputera[i+1][j-1]>=1 && STATKI::ulozenie_statkow_komputera[i+1][j-1]<=9) || (STATKI::ulozenie_statkow_komputera[i+1][j]>=1 && STATKI::ulozenie_statkow_komputera[i+1][j]<=9) || (STATKI::ulozenie_statkow_komputera[i-1][j-1]>=1 && STATKI::ulozenie_statkow_komputera[i-1][j-1]<=9) || (STATKI::ulozenie_statkow_komputera[i-1][j]>=1 && STATKI::ulozenie_statkow_komputera[i-1][j]<=9))
                                    {
                                        licznik++;
                                    }
                                }
                            }
                            if(licznik==0)
                            {
                                for(int i=Polozenie::wspolrzedna_x-1;i<Polozenie::wspolrzedna_x;i++)
                                {
                                    for(int j=Polozenie::wspolrzedna_y-1;j<(Polozenie::wspolrzedna_y+(-1+Polozenie::wielkosc));j++)
                                    {
                                        STATKI::ulozenie_statkow_komputera[i][j]=Polozenie::wielkosc;
                                    }

                                }
                                udane++;
                            }else{

                                goto polozenie1;
                            }
                        }
                        if(Polozenie::wspolrzedna_x>=2 && Polozenie::wspolrzedna_x<=9 && Polozenie::wspolrzedna_y>=2 && Polozenie::wspolrzedna_y<=9)
                        {
                            for(int i=Polozenie::wspolrzedna_x-1;i<Polozenie::wspolrzedna_x;i++)
                            {
                                for(int j=Polozenie::wspolrzedna_y-1;j<(Polozenie::wspolrzedna_y+(-1+Polozenie::wielkosc));j++)
                                {
                                    if((STATKI::ulozenie_statkow_komputera[i-1][j+1]>=1 && STATKI::ulozenie_statkow_komputera[i-1][j+1]<=9) || (STATKI::ulozenie_statkow_komputera[i][j+1]>=1 && STATKI::ulozenie_statkow_komputera[i][j+1]<=9) || (STATKI::ulozenie_statkow_komputera[i+1][j+1]>=1 && STATKI::ulozenie_statkow_komputera[i+1][j+1]<=9) || (STATKI::ulozenie_statkow_komputera[i-1][j-1]>=1 && STATKI::ulozenie_statkow_komputera[i-1][j-1]<=9) || (STATKI::ulozenie_statkow_komputera[i][j-1]>=1 && STATKI::ulozenie_statkow_komputera[i][j-1]<=9) || (STATKI::ulozenie_statkow_komputera[i+1][j-1]>=1 && STATKI::ulozenie_statkow_komputera[i+1][j-1]<=9) || (STATKI::ulozenie_statkow_komputera[i-1][j]>=1 && STATKI::ulozenie_statkow_komputera[i-1][j]<=9) ||(STATKI::ulozenie_statkow_komputera[i+1][j]>=1 && STATKI::ulozenie_statkow_komputera[i+1][j]<=9))
                                    {
                                        licznik++;
                                    }
                                }
                            }
                            if(licznik==0)
                            {
                                for(int i=Polozenie::wspolrzedna_x-1;i<Polozenie::wspolrzedna_x;i++)
                                {
                                    for(int j=Polozenie::wspolrzedna_y-1;j<(Polozenie::wspolrzedna_y+(-1+Polozenie::wielkosc));j++)
                                    {
                                        STATKI::ulozenie_statkow_komputera[i][j]=Polozenie::wielkosc;
                                    }

                                }
                                udane++;
                            }
                            else
                            {

                                goto polozenie1;
                            }
                        }
                    }
                }
            }
        }
}

void STATKI::trafiony_raz(int **&moja_tablica_przechowywana_przez_komputer){
    bool czy_wyjsc=false;
    int kierunek=1;
    Strzal::zapamietany_kierunek=kierunek;
    Strzal::skrajny_kierunek=kierunek;
    if(Strzal::wspolrzedna_y==10)
    {
        kierunek=rand()%4+1;
        Strzal::zapamietany_kierunek=kierunek;
        Strzal::skrajny_kierunek=kierunek;
        if(kierunek==2)
        {
            kierunek=rand()%4+1;
            Strzal::zapamietany_kierunek=kierunek;
            Strzal::skrajny_kierunek=kierunek;
        }
    }
    if(Strzal::wspolrzedna_x==10)
    {
        kierunek=rand()%3+1;
        Strzal::zapamietany_kierunek=kierunek;
        Strzal::skrajny_kierunek=kierunek;
    }
    if(Strzal::wspolrzedna_y==1 && Strzal::wspolrzedna_x==1)
    {
        kierunek=rand()%2+1;
        Strzal::zapamietany_kierunek=kierunek;
        Strzal::skrajny_kierunek=kierunek;
    }
    if(Strzal::wspolrzedna_y==10 && Strzal::wspolrzedna_x==1)
    {
        kierunek=rand()%4+1;
        Strzal::zapamietany_kierunek=kierunek;
        Strzal::skrajny_kierunek=kierunek;

    }
    if(Strzal::wspolrzedna_y==10 && Strzal::wspolrzedna_x==10)
    {
        kierunek=rand()%2+3;
        Strzal::zapamietany_kierunek=kierunek;
        Strzal::skrajny_kierunek=kierunek;

    }
    if(Strzal::wspolrzedna_y==1 && Strzal::wspolrzedna_x==10)
    {
        kierunek=rand()%2+2;
        Strzal::zapamietany_kierunek=kierunek;
        Strzal::skrajny_kierunek=kierunek;
    }
    if(kierunek==1){
        QMessageBox msg(this);

        if(Strzal::wspolrzedna_x==1){
            skrajne(moja_tablica_przechowywana_przez_komputer);
            czy_wyjsc=true;
        }
        else{

        for(int j=Strzal::wspolrzedna_y-1;j<Strzal::wspolrzedna_y;j++)

        {
            for(int i=Strzal::wspolrzedna_x;i<Strzal::wspolrzedna_x+(11-Strzal::wspolrzedna_x);i++)
            {

                Strzal::ildirection=1;

                Strzal::wspolrzedna_x++;
                if(Strzal::wspolrzedna_x>10){
                    przeciwnie(moja_tablica_przechowywana_przez_komputer);
                    czy_wyjsc=true;
                }

                if(czy_wyjsc==true){
                    break;
                }

                QString text = QString("Strzelam w punkt (") + QString::number(Strzal::wspolrzedna_x) + QString(",") + QString::number(Strzal::wspolrzedna_y) + QString("). Czy trafiłem?");

                if(QMessageBox::question(this, "Moj strzal", text, QMessageBox::Ok | QMessageBox::No) == QMessageBox::Ok){
                    moja_tablica_przechowywana_przez_komputer[i][j]=1;
                    Strzal::iltrafiony++;
                    if(Strzal::iltrafiony==5){
                        czy_wyjsc=true;
                        Strzal::ildirection=0;
                        STATKI::piatki++;
                        ui->Ilosc5->setText(QString::number(STATKI::piatki));
                        ui->Tekst->setText("Pięciomasztowiec zbity! Twoja kolej!");
                        Strzal::iltrafiony=0;
                    }
                }
                else{
                    czy_wyjsc=true;
                }
                if(czy_wyjsc==true){
                    break;
                }
            }
            if(czy_wyjsc==true){
                break;
            }
        }
        }
        if(Strzal::iltrafiony!=0)
        {
            ui->Tekst->setText("Twoja kolej");
        }
    }
    if(kierunek==2){
        QMessageBox msg(this);

        if(Strzal::wspolrzedna_y==1){
            skrajne(moja_tablica_przechowywana_przez_komputer);
            czy_wyjsc=true;
        }
        else{

        for(int i=Strzal::wspolrzedna_x-1;i<Strzal::wspolrzedna_x;i++)
        {
            for(int j=Strzal::wspolrzedna_y;i<Strzal::wspolrzedna_y+(11-Strzal::wspolrzedna_y);j++)
            {

                Strzal::ildirection=1;

                Strzal::wspolrzedna_y++;

                if(Strzal::wspolrzedna_y>10){
                    przeciwnie(moja_tablica_przechowywana_przez_komputer);
                    czy_wyjsc=true;
                }

                if(czy_wyjsc==true){
                    break;
                }

                QString text = QString("Strzelam w punkt (") + QString::number(Strzal::wspolrzedna_x) + QString(",") + QString::number(Strzal::wspolrzedna_y) + QString("). Czy trafiłem?");

                if(QMessageBox::question(this, "Moj strzal", text, QMessageBox::Ok | QMessageBox::No) == QMessageBox::Ok){
                    moja_tablica_przechowywana_przez_komputer[i][j]=1;
                    Strzal::iltrafiony++;
                    if(Strzal::iltrafiony==5){
                        czy_wyjsc=true;
                        Strzal::ildirection=0;
                        STATKI::piatki++;
                        ui->Ilosc5->setText(QString::number(STATKI::piatki));
                        ui->Tekst->setText("Pięciomasztowiec zbity! Twoja kolej!");
                        Strzal::iltrafiony=0;
                    }
                }
                else{
                    czy_wyjsc=true;
                }
                if(czy_wyjsc==true){
                    break;
                }
            }
            if(czy_wyjsc==true){
                break;
            }
        }
        }
        if(Strzal::iltrafiony!=0)
        {
            ui->Tekst->setText("Twoja kolej");
        }
    }
    if(kierunek==3)
    {
        QMessageBox msg(this);

        if(Strzal::wspolrzedna_x==10){
            skrajne(moja_tablica_przechowywana_przez_komputer);
            czy_wyjsc=true;
        }
        else{

        for(int j=Strzal::wspolrzedna_y-1;j<Strzal::wspolrzedna_y;j++)
        {
            for(int i=Strzal::wspolrzedna_x-2;i>Strzal::wspolrzedna_x-11;i--)
            {

                Strzal::ildirection=1;

                Strzal::wspolrzedna_x--;

                if(Strzal::wspolrzedna_x<1){
                    przeciwnie(moja_tablica_przechowywana_przez_komputer);
                    czy_wyjsc=true;
                }

                if(czy_wyjsc==true){
                    break;
                }

                QString text = QString("Strzelam w punkt (") + QString::number(Strzal::wspolrzedna_x) + QString(",") + QString::number(Strzal::wspolrzedna_y) + QString("). Czy trafiłem?");

                if(QMessageBox::question(this, "Moj strzal", text, QMessageBox::Ok | QMessageBox::No) == QMessageBox::Ok){
                    moja_tablica_przechowywana_przez_komputer[i][j]=1;
                    Strzal::iltrafiony++;
                    if(Strzal::iltrafiony==5){
                        czy_wyjsc=true;
                        Strzal::ildirection=0;
                        STATKI::piatki++;
                        ui->Ilosc5->setText(QString::number(STATKI::piatki));
                        ui->Tekst->setText("Pięciomasztowiec zbity! Twoja kolej!");
                        Strzal::iltrafiony=0;
                    }
                }
                else{
                    czy_wyjsc=true;
                }
                if(czy_wyjsc==true){
                    break;
                }
            }
            if(czy_wyjsc==true){
                break;
            }
        }
        }
        if(Strzal::iltrafiony!=0)
        {
            ui->Tekst->setText("Twoja kolej");
        }
    }
    if(kierunek==4){
        QMessageBox msg(this);

        if(Strzal::wspolrzedna_y==10){
            skrajne(moja_tablica_przechowywana_przez_komputer);
            czy_wyjsc=true;
        }
        else{

        for(int i=Strzal::wspolrzedna_x-1;i<Strzal::wspolrzedna_x;i++)
        {
            for(int j=Strzal::wspolrzedna_y-2;j>Strzal::wspolrzedna_y-11;j--)
            {

                Strzal::ildirection=1;

                Strzal::wspolrzedna_y--;

                if(Strzal::wspolrzedna_y<1){
                    przeciwnie(moja_tablica_przechowywana_przez_komputer);
                    czy_wyjsc=true;
                }

                if(czy_wyjsc==true){
                    break;
                }

                QString text = QString("Strzelam w punkt (") + QString::number(Strzal::wspolrzedna_x) + QString(",") + QString::number(Strzal::wspolrzedna_y) + QString("). Czy trafiłem?");

                if(QMessageBox::question(this, "Moj strzal", text, QMessageBox::Ok | QMessageBox::No) == QMessageBox::Ok){
                    moja_tablica_przechowywana_przez_komputer[i][j]=1;
                    Strzal::iltrafiony++;
                    if(Strzal::iltrafiony==5){
                        czy_wyjsc=true;
                        Strzal::ildirection=0;
                        STATKI::piatki++;
                        ui->Ilosc5->setText(QString::number(STATKI::piatki));
                        ui->Tekst->setText("Pięciomasztowiec zbity! Twoja kolej!");
                        Strzal::iltrafiony=0;
                    }
                }
                else{
                    czy_wyjsc=true;
                }
                if(czy_wyjsc==true){
                    break;
                }
            }
            if(czy_wyjsc==true){
                break;
            }
        }
        }
        if(Strzal::iltrafiony!=0)
        {
            ui->Tekst->setText("Twoja kolej");
        }
    }
}

void STATKI::przeciwnie(int **&moja_tablica_przechowywana_przez_komputer)
{
    bool czy_wyjsc=false;
    if(Strzal::zapamietany_kierunek==1){
        QMessageBox msg(this);

        for(int j=Strzal::trafiony_y-1;j<Strzal::trafiony_y;j++)
        {
            for(int i=Strzal::trafiony_x-2;i>Strzal::trafiony_x-10;i--)
            {

                Strzal::trafiony_x--;

                if(Strzal::trafiony_x<1){
                    czy_wyjsc=true;
                }

                if(czy_wyjsc==true){
                    break;
                }

                QString text = QString("Strzelam w punkt (") + QString::number(Strzal::trafiony_x) + QString(",") + QString::number(Strzal::trafiony_y) + QString("). Czy trafiłem?");

                if(QMessageBox::question(this, "Moj strzal", text, QMessageBox::Ok | QMessageBox::No) == QMessageBox::Ok){
                    moja_tablica_przechowywana_przez_komputer[i][j]=1;
                    Strzal::iltrafiony++;
                    if(Strzal::iltrafiony==5){
                        czy_wyjsc=true;
                        Strzal::ildirection=0;
                        STATKI::piatki++;
                        ui->Ilosc5->setText(QString::number(STATKI::piatki));
                        ui->Tekst->setText("Pięciomasztowiec zbity! Twoja kolej!");
                        Strzal::iltrafiony=0;
                    }
                }
                else{
             czy_wyjsc=true;
             Strzal::ildirection=0;
                }
                if(czy_wyjsc==true){
                    break;
                }
            }
            if(czy_wyjsc==true){
                break;
            }
        }
        if(Strzal::iltrafiony==1){
            STATKI::jedynki++;
            ui->Ilosc1->setText(QString::number(STATKI::jedynki));
            ui->Tekst->setText("Jednomasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(Strzal::iltrafiony==2){
            STATKI::dwojki++;
            ui->Ilosc2->setText(QString::number(STATKI::dwojki));
            ui->Tekst->setText("Dwumasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(Strzal::iltrafiony==3){
            STATKI::trojki++;
            ui->Ilosc3->setText(QString::number(STATKI::trojki));
            ui->Tekst->setText("Trójmasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(Strzal::iltrafiony==4){
            STATKI::czworki++;
            ui->Ilosc4->setText(QString::number(STATKI::czworki));
            ui->Tekst->setText("Czteromasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(Strzal::iltrafiony==5){
            STATKI::piatki++;
            ui->Ilosc5->setText(QString::number(STATKI::piatki));
            ui->Tekst->setText("Pięciomasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(il11==jedynki && il22==dwojki && il33==trojki && il44==czworki && il55==piatki)
        {
            ui->Tekst->setText("Zwyciężyłem!");
        }
    }
    if(Strzal::zapamietany_kierunek==2){
        QMessageBox msg(this);

        for(int i=Strzal::trafiony_x-1;i<Strzal::trafiony_x;i++)
        {
            for(int j=Strzal::trafiony_y-2;j>Strzal::trafiony_y-10;j--)
            {

                Strzal::trafiony_y--;

                if(Strzal::trafiony_y<1){
                    czy_wyjsc=true;
                }

                if(czy_wyjsc==true){
                    break;
                }

                QString text = QString("Strzelam w punkt (") + QString::number(Strzal::trafiony_x) + QString(",") + QString::number(Strzal::trafiony_y) + QString("). Czy trafiłem?");

                if(QMessageBox::question(this, "Moj strzal", text, QMessageBox::Ok | QMessageBox::No) == QMessageBox::Ok){
                    moja_tablica_przechowywana_przez_komputer[i][j]=1;
                    Strzal::iltrafiony++;
                    if(Strzal::iltrafiony==5){
                        czy_wyjsc=true;
                        Strzal::ildirection=0;
                        STATKI::piatki++;
                        ui->Ilosc5->setText(QString::number(STATKI::piatki));
                        ui->Tekst->setText("Pięciomasztowiec zbity! Twoja kolej!");
                        Strzal::iltrafiony=0;
                    }
                }
                else{
                    czy_wyjsc=true;
                    Strzal::ildirection=0;
                }
                if(czy_wyjsc==true){
                    break;
                }
            }
            if(czy_wyjsc==true){
                break;
            }
        }
        if(Strzal::iltrafiony==1){
            STATKI::jedynki++;
            ui->Ilosc1->setText(QString::number(STATKI::jedynki));
            ui->Tekst->setText("Jednomasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(Strzal::iltrafiony==2){
            STATKI::dwojki++;
            ui->Ilosc2->setText(QString::number(STATKI::dwojki));
            ui->Tekst->setText("Dwumasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(Strzal::iltrafiony==3){
            STATKI::trojki++;
            ui->Ilosc3->setText(QString::number(STATKI::trojki));
            ui->Tekst->setText("Trójmasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(Strzal::iltrafiony==4){
            STATKI::czworki++;
            ui->Ilosc4->setText(QString::number(STATKI::czworki));
            ui->Tekst->setText("Czteromasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(Strzal::iltrafiony==5){
            STATKI::piatki++;
            ui->Ilosc5->setText(QString::number(STATKI::piatki));
            ui->Tekst->setText("Pięciomasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(il11==jedynki && il22==dwojki && il33==trojki && il44==czworki && il55==piatki)
        {
            ui->Tekst->setText("Zwyciężyłem!");
        }
    }
    if(Strzal::zapamietany_kierunek==3){
        QMessageBox msg(this);

        for(int j=Strzal::trafiony_y-1;j<Strzal::trafiony_y;j++)
        {
            for(int i=Strzal::trafiony_x;i<Strzal::trafiony_x+(10-Strzal::trafiony_x);i++)
            {
                Strzal::trafiony_x++;

                if(Strzal::trafiony_x>10){
                    czy_wyjsc=true;
                }

                if(czy_wyjsc==true){
                    break;
                }

                QString text = QString("Strzelam w punkt (") + QString::number(Strzal::trafiony_x) + QString(",") + QString::number(Strzal::trafiony_y) + QString("). Czy trafiłem?");

                if(QMessageBox::question(this, "Moj strzal", text, QMessageBox::Ok | QMessageBox::No) == QMessageBox::Ok){
                    moja_tablica_przechowywana_przez_komputer[i][j]=1;
                    Strzal::iltrafiony++;
                    if(Strzal::iltrafiony==5){
                        czy_wyjsc=true;
                        Strzal::ildirection=0;
                        STATKI::piatki++;
                        ui->Ilosc5->setText(QString::number(STATKI::piatki));
                        ui->Tekst->setText("Pięciomasztowiec zbity! Twoja kolej!");
                        Strzal::iltrafiony=0;
                    }
                }
                else{
                    czy_wyjsc=true;
                    Strzal::ildirection=0;
                }
                if(czy_wyjsc==true){
                    break;
                }
            }
            if(czy_wyjsc==true){
                break;
            }
        }
        if(Strzal::iltrafiony==1){
            STATKI::jedynki++;
            ui->Ilosc1->setText(QString::number(STATKI::jedynki));
            ui->Tekst->setText("Jednomasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(Strzal::iltrafiony==2){
            STATKI::dwojki++;
            ui->Ilosc2->setText(QString::number(STATKI::dwojki));
            ui->Tekst->setText("Dwumasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(Strzal::iltrafiony==3){
            STATKI::trojki++;
            ui->Ilosc3->setText(QString::number(STATKI::trojki));
            ui->Tekst->setText("Trójmasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(Strzal::iltrafiony==4){
            STATKI::czworki++;
            ui->Ilosc4->setText(QString::number(STATKI::czworki));
            ui->Tekst->setText("Czteromasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(Strzal::iltrafiony==5){
            STATKI::piatki++;
            ui->Ilosc5->setText(QString::number(STATKI::piatki));
            ui->Tekst->setText("Pięciomasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(il11==jedynki && il22==dwojki && il33==trojki && il44==czworki && il55==piatki)
        {
            ui->Tekst->setText("Zwyciężyłem!");
        }
    }
    if(Strzal::zapamietany_kierunek==4){
        QMessageBox msg(this);

        for(int i=Strzal::trafiony_x-1;i<Strzal::trafiony_x;i++)
        {
            for(int j=Strzal::trafiony_y;i<Strzal::trafiony_y+(10-Strzal::trafiony_y);j++)
            {

                Strzal::trafiony_y++;

                if(Strzal::trafiony_y>10){
                    czy_wyjsc=true;
                }

                if(czy_wyjsc==true){
                    break;
                }

                QString text = QString("Strzelam w punkt (") + QString::number(Strzal::trafiony_x) + QString(",") + QString::number(Strzal::trafiony_y) + QString("). Czy trafiłem?");

                if(QMessageBox::question(this, "Moj strzal", text, QMessageBox::Ok | QMessageBox::No) == QMessageBox::Ok){
                    moja_tablica_przechowywana_przez_komputer[i][j]=1;
                    Strzal::iltrafiony++;
                    if(Strzal::iltrafiony==5){
                        czy_wyjsc=true;
                        Strzal::ildirection=0;
                        STATKI::piatki++;
                        ui->Ilosc5->setText(QString::number(STATKI::piatki));
                        ui->Tekst->setText("Pięciomasztowiec zbity! Twoja kolej!");
                        Strzal::iltrafiony=0;
                    }
                }
                else{
                    czy_wyjsc=true;
                    Strzal::ildirection=0;
                }
                if(czy_wyjsc==true){
                    break;
                }
            }
            if(czy_wyjsc==true){
                break;
            }
        }
        if(Strzal::iltrafiony==1){
            STATKI::jedynki++;
            ui->Ilosc1->setText(QString::number(STATKI::jedynki));
            ui->Tekst->setText("Jednomasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(Strzal::iltrafiony==2){
            STATKI::dwojki++;
            ui->Ilosc2->setText(QString::number(STATKI::dwojki));
            ui->Tekst->setText("Dwumasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(Strzal::iltrafiony==3){
            STATKI::trojki++;
            ui->Ilosc3->setText(QString::number(STATKI::trojki));
            ui->Tekst->setText("Trójmasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(Strzal::iltrafiony==4){
            STATKI::czworki++;
            ui->Ilosc4->setText(QString::number(STATKI::czworki));
            ui->Tekst->setText("Czteromasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(Strzal::iltrafiony==5){
            STATKI::piatki++;
            ui->Ilosc5->setText(QString::number(STATKI::piatki));
            ui->Tekst->setText("Pięciomasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(il11==jedynki && il22==dwojki && il33==trojki && il44==czworki && il55==piatki)
        {
            ui->Tekst->setText("Zwyciężyłem!");
        }
}
}

void STATKI::skrajne(int **&moja_tablica_przechowywana_przez_komputer)
{
    bool czy_wyjsc=false;

    if(Strzal::skrajny_kierunek==1)
    {
        QMessageBox msg(this);

        for(int j=Strzal::wspolrzedna_y-1;j<Strzal::wspolrzedna_y;j++)
        {
            for(int i=Strzal::wspolrzedna_x;i<Strzal::wspolrzedna_x+(10-Strzal::wspolrzedna_x);i++)
            {
                Strzal::wspolrzedna_x++;

                if(Strzal::wspolrzedna_x>10){
                    //przeciwnie(moja_tablica_przechowywana_przez_komputer);
                    czy_wyjsc=true;
                }

                if(czy_wyjsc==true){
                    break;
                }

                QString text = QString("Strzelam w punkt (") + QString::number(Strzal::wspolrzedna_x) + QString(",") + QString::number(Strzal::wspolrzedna_y) + QString("). Czy trafiłem?");

                if(QMessageBox::question(this, "Moj strzal", text, QMessageBox::Ok | QMessageBox::No) == QMessageBox::Ok){
                    moja_tablica_przechowywana_przez_komputer[i][j]=1;
                    Strzal::iltrafiony++;
                    if(Strzal::iltrafiony==5){
                        czy_wyjsc=true;
                        Strzal::ildirection=0;
                        STATKI::piatki++;
                        ui->Ilosc5->setText(QString::number(STATKI::piatki));
                        ui->Tekst->setText("Pięciomasztowiec zbity! Twoja kolej!");
                        Strzal::iltrafiony=0;
                    }
                }
                else{
                    czy_wyjsc=true;
                }
                if(czy_wyjsc==true){
                    break;
                }
            }
            if(czy_wyjsc==true){
                break;
            }
        }
        if(Strzal::iltrafiony==1){
            STATKI::jedynki++;
            ui->Ilosc1->setText(QString::number(STATKI::jedynki));
            ui->Tekst->setText("Jednomasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(Strzal::iltrafiony==2){
            STATKI::dwojki++;
            ui->Ilosc2->setText(QString::number(STATKI::dwojki));
            ui->Tekst->setText("Dwumasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(Strzal::iltrafiony==3){
            STATKI::trojki++;
            ui->Ilosc3->setText(QString::number(STATKI::trojki));
            ui->Tekst->setText("Trójmasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(Strzal::iltrafiony==4){
            STATKI::czworki++;
            ui->Ilosc4->setText(QString::number(STATKI::czworki));
            ui->Tekst->setText("Czteromasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(Strzal::iltrafiony==5){
            STATKI::piatki++;
            ui->Ilosc5->setText(QString::number(STATKI::piatki));
            ui->Tekst->setText("Pięciomasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
    }
    if(Strzal::skrajny_kierunek==2){
        QMessageBox msg(this);

        for(int i=Strzal::wspolrzedna_x-1;i<Strzal::wspolrzedna_x;i++)
        {
            for(int j=Strzal::wspolrzedna_y;i<Strzal::wspolrzedna_y+(10-Strzal::wspolrzedna_y);j++)
            {

                Strzal::wspolrzedna_y++;

                if(Strzal::wspolrzedna_y>10){
                    //przeciwnie(moja_tablica_przechowywana_przez_komputer);
                    czy_wyjsc=true;
                }

                if(czy_wyjsc==true){
                    break;
                }

                QString text = QString("Strzelam w punkt (") + QString::number(Strzal::wspolrzedna_x) + QString(",") + QString::number(Strzal::wspolrzedna_y) + QString("). Czy trafiłem?");

                if(QMessageBox::question(this, "Moj strzal", text, QMessageBox::Ok | QMessageBox::No) == QMessageBox::Ok){
                    moja_tablica_przechowywana_przez_komputer[i][j]=1;
                    Strzal::iltrafiony++;
                    if(Strzal::iltrafiony==5){
                        czy_wyjsc=true;
                        Strzal::ildirection=0;
                        STATKI::piatki++;
                        ui->Ilosc5->setText(QString::number(STATKI::piatki));
                        ui->Tekst->setText("Pięciomasztowiec zbity! Twoja kolej!");
                        Strzal::iltrafiony=0;
                    }
                }
                else{
                    czy_wyjsc=true;
                }
                if(czy_wyjsc==true){
                    break;
                }
            }
            if(czy_wyjsc==true){
                break;
            }
        }
        if(Strzal::iltrafiony==1){
            STATKI::jedynki++;
            ui->Ilosc1->setText(QString::number(STATKI::jedynki));
            ui->Tekst->setText("Jednomasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(Strzal::iltrafiony==2){
            STATKI::dwojki++;
            ui->Ilosc2->setText(QString::number(STATKI::dwojki));
            ui->Tekst->setText("Dwumasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(Strzal::iltrafiony==3){
            STATKI::trojki++;
            ui->Ilosc3->setText(QString::number(STATKI::trojki));
            ui->Tekst->setText("Trójmasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(Strzal::iltrafiony==4){
            STATKI::czworki++;
            ui->Ilosc4->setText(QString::number(STATKI::czworki));
            ui->Tekst->setText("Czteromasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(Strzal::iltrafiony==5){
            STATKI::piatki++;
            ui->Ilosc5->setText(QString::number(STATKI::piatki));
            ui->Tekst->setText("Pięciomasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
    }
    if(Strzal::skrajny_kierunek==3)
    {
        QMessageBox msg(this);

        for(int j=Strzal::wspolrzedna_y-1;j<Strzal::wspolrzedna_y;j++)
        {
            for(int i=Strzal::wspolrzedna_x-2;i>Strzal::wspolrzedna_x-10;i--)
            {

                Strzal::wspolrzedna_x--;

                if(Strzal::wspolrzedna_x<1){
                    //przeciwnie(moja_tablica_przechowywana_przez_komputer);
                    czy_wyjsc=true;
                }

                if(czy_wyjsc==true){
                    break;
                }

                QString text = QString("Strzelam w punkt (") + QString::number(Strzal::wspolrzedna_x) + QString(",") + QString::number(Strzal::wspolrzedna_y) + QString("). Czy trafiłem?");

                if(QMessageBox::question(this, "Moj strzal", text, QMessageBox::Ok | QMessageBox::No) == QMessageBox::Ok){
                    moja_tablica_przechowywana_przez_komputer[i][j]=1;
                    Strzal::iltrafiony++;
                    if(Strzal::iltrafiony==5){
                        czy_wyjsc=true;
                        Strzal::ildirection=0;
                        STATKI::piatki++;
                        ui->Ilosc5->setText(QString::number(STATKI::piatki));
                        ui->Tekst->setText("Pięciomasztowiec zbity! Twoja kolej!");
                        Strzal::iltrafiony=0;
                    }
                }
                else{
                    czy_wyjsc=true;
                }
                if(czy_wyjsc==true){
                    break;
                }
            }
            if(czy_wyjsc==true){
                break;
            }
        }
        if(Strzal::iltrafiony==1){
            STATKI::jedynki++;
            ui->Ilosc1->setText(QString::number(STATKI::jedynki));
            ui->Tekst->setText("Jednomasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(Strzal::iltrafiony==2){
            STATKI::dwojki++;
            ui->Ilosc2->setText(QString::number(STATKI::dwojki));
            ui->Tekst->setText("Dwumasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(Strzal::iltrafiony==3){
            STATKI::trojki++;
            ui->Ilosc3->setText(QString::number(STATKI::trojki));
            ui->Tekst->setText("Trójmasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(Strzal::iltrafiony==4){
            STATKI::czworki++;
            ui->Ilosc4->setText(QString::number(STATKI::czworki));
            ui->Tekst->setText("Czteromasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(Strzal::iltrafiony==5){
            STATKI::piatki++;
            ui->Ilosc5->setText(QString::number(STATKI::piatki));
            ui->Tekst->setText("Pięciomasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
    }
    if(Strzal::skrajny_kierunek==4)
    {
        QMessageBox msg(this);

        for(int i=Strzal::wspolrzedna_x-1;i<Strzal::wspolrzedna_x;i++)
        {
            for(int j=Strzal::wspolrzedna_y-2;j>Strzal::wspolrzedna_y-10;j--)
            {
                Strzal::wspolrzedna_y--;

                if(Strzal::wspolrzedna_y<1){
                    //przeciwnie(moja_tablica_przechowywana_przez_komputer);
                    czy_wyjsc=true;
                }

                if(czy_wyjsc==true){
                    break;
                }

                QString text = QString("Strzelam w punkt (") + QString::number(Strzal::wspolrzedna_x) + QString(",") + QString::number(Strzal::wspolrzedna_y) + QString("). Czy trafiłem?");

                if(QMessageBox::question(this, "Moj strzal", text, QMessageBox::Ok | QMessageBox::No) == QMessageBox::Ok){
                    moja_tablica_przechowywana_przez_komputer[i][j]=1;
                    Strzal::iltrafiony++;
                    if(Strzal::iltrafiony==5){
                        czy_wyjsc=true;
                        Strzal::ildirection=0;
                        STATKI::piatki++;
                        ui->Ilosc5->setText(QString::number(STATKI::piatki));
                        ui->Tekst->setText("Pięciomasztowiec zbity! Twoja kolej!");
                        Strzal::iltrafiony=0;
                    }
                }
                else{
                    czy_wyjsc=true;
                }
                if(czy_wyjsc==true){
                    break;
                }
            }
            if(czy_wyjsc==true){
                break;
            }
        }
        if(Strzal::iltrafiony==1){
            STATKI::jedynki++;
            ui->Ilosc1->setText(QString::number(STATKI::jedynki));
            ui->Tekst->setText("Jednomasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(Strzal::iltrafiony==2){
            STATKI::dwojki++;
            ui->Ilosc2->setText(QString::number(STATKI::dwojki));
            ui->Tekst->setText("Dwumasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(Strzal::iltrafiony==3){
            STATKI::trojki++;
            ui->Ilosc3->setText(QString::number(STATKI::trojki));
            ui->Tekst->setText("Trójmasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(Strzal::iltrafiony==4){
            STATKI::czworki++;
            ui->Ilosc4->setText(QString::number(STATKI::czworki));
            ui->Tekst->setText("Czteromasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
        if(Strzal::iltrafiony==5){
            STATKI::piatki++;
            ui->Ilosc5->setText(QString::number(STATKI::piatki));
            ui->Tekst->setText("Pięciomasztowiec zbity! Twoja kolej!");
            Strzal::iltrafiony=0;
        }
    }
}

void STATKI::strzal(int **&moja_tablica_przechowywana_przez_komputer)
{
    bool czy_wykonac=true;
    if(Strzal::ildirection==1){
        przeciwnie(moja_tablica_przechowywana_przez_komputer);
        ui->Tekst->setText("Twoja kolej");
        czy_wykonac=false;
    }

    if(czy_wykonac==true)
    {   
        Strzal::wspolrzedna_x=rand()%10+1;

        Strzal::wspolrzedna_y=rand()%10+1;

        if( moja_tablica_przechowywana_przez_komputer[Strzal::wspolrzedna_x-1][Strzal::wspolrzedna_y-1]==0){

            QString text = QString("Strzelam w punkt (") + QString::number(Strzal::wspolrzedna_x) + QString(",") + QString::number(Strzal::wspolrzedna_y) + QString("). Czy trafiłem?");

            QMessageBox msg(this);

            if(QMessageBox::question(this, "Moj strzal", text, QMessageBox::Ok | QMessageBox::No) == QMessageBox::Ok){
                moja_tablica_przechowywana_przez_komputer[Strzal::wspolrzedna_x-1][Strzal::wspolrzedna_y-1]=1;
                iltrafiony++;
                Strzal::trafiony_x=Strzal::wspolrzedna_x;
                Strzal::trafiony_y=Strzal::wspolrzedna_y;
                trafiony_raz(moja_tablica_przechowywana_przez_komputer);
            }
            else{
                ui->Tekst->setText("Twoja kolej!");
            }
        }
        else{
            strzal(moja_tablica_przechowywana_przez_komputer);
        }
    }
}

void STATKI::sprawdzam()
{
    int los=rand()%2+1;

    if(Strzal::odp1==1)
    {
        if(los==1)
        {
            ui->Tekst->setText("Orzel! Ty zaczynasz! Oddaj strzał!");
        }
        else
        {
            ui->Tekst->setText("Reszka! Ja zaczynam!");
            strzal(moja_tablica_przechowywana_przez_komputer);
        }
    }

    if(Strzal::odp1==2)
    {
        if(los==2)
        {
            ui->Tekst->setText("Reszka! Ty zaczynasz! Oddaj strzał!");
        }
        else
        {
            ui->Tekst->setText("Orzel! Ja zaczynam!");
            strzal(moja_tablica_przechowywana_przez_komputer);

        }
    }
}

void STATKI::koniec()
{
    ui->Tekst->setText("Koniec gry! Wygrałem!");
    exit(0);
}
