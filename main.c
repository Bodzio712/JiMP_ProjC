#include <stdio.h>

#include "struktura.h"

int main(int argc, char **argv) {

    FILE *config = fopen(argv[1], "r");
    FILE *wspolrzedne = fopen(argv[2], "r");
    FILE *wynik = fopen(argv[3], "w");
    int sas, wys, szer;
    // sas - rodzaj sąsiedzctwa(liczba sąsiadów branych pod uwagę(4 lub 8))
    fscanf(*config, sas, wys, szer);

    // tutaj tworzymy planszę struktur wys x szer

    scanner(wspolrzedne);

    howmany(dane **plansza, sas);

    change(dane **plansza, sas);

    result (wynik, dane **plansza);

    return 0;
}
