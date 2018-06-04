#include <iostream>
#include <cstdlib>
#include <ctime>
#include "strzal.h"
#include "losowanie.h"

#ifndef STATKI_H
#define STATKI_H

#include <QMainWindow>
#include <QMessageBox>

namespace Ui {
class STATKI;
}

using namespace std;

class STATKI : public QMainWindow, public Polozenie, public Strzal
{
    Q_OBJECT
    
public:
    explicit STATKI(QWidget *parent = 0);
    ~STATKI();

    void sprawdzam();

    int **ulozenie_statkow_komputera;

    int **moja_tablica_przechowywana_przez_komputer;

    int jedynki,dwojki,trojki,czworki, piatki;

    void koniec();
    
private slots:
    void on_JedynkaX_clicked();

    void on_DwojkaX_clicked();

    void on_TrojkaX_clicked();

    void on_CzworkaX_clicked();

    void on_PiatkaX_clicked();

    void on_SzostkaX_clicked();

    void on_SiodemkaX_clicked();

    void on_OsemkaX_clicked();

    void on_DziewiatkaX_clicked();

    void on_DziesiatkaX_clicked();

    void on_JedynkaY_clicked();

    void on_DwojkaY_clicked();

    void on_TrojkaY_clicked();

    void on_CzworkaY_clicked();

    void on_PiatkaY_clicked();

    void on_SzostkaY_clicked();

    void on_SiodemkaY_clicked();

    void on_OsemkaY_clicked();

    void on_DziewiatkaY_clicked();

    void on_DziesiatkaY_clicked();

    void on_Strzal_clicked();

    void on_Jedynka_clicked();

    void on_Dwojka_clicked();

    void on_Trojka_clicked();

    void on_Czworka_clicked();

    void on_Piatka_clicked();

    void on_Jedynka_2_clicked();

    void on_Dwojka_2_clicked();

    void on_Trojka_2_clicked();

    void on_Czworka_2_clicked();

    void on_Piatka_2_clicked();

    void on_Ustaw_clicked();

    void on_Orzel_clicked();

    void on_Reszka_clicked();

    void on_Start_clicked();

    void ustaw();

    void trafiony_raz(int **&moja_tablica_przechowywana_przez_komputer);

    void przeciwnie(int **&moja_tablica_przechowywana_przez_komputer);

    void skrajne(int **&moja_tablica_przechowywana_przez_komputer);

    void strzal(int **&moja_tablica_przechowywana_przez_komputer);

private:
    Ui::STATKI *ui;
};

#endif // STATKI_H
