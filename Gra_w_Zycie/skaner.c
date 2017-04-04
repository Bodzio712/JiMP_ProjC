#include <stdio.h>

#include "skaner.h"
#include "struktura.h"

void skaner (FILE * wspolrzedne) {
        int x,y;
        while (fscanf (wspolrzedne,"%d %d", &x, &y) != EOF) {
               if (x < SZEROKOSC && y < WYSOKOSC)
                    plansza.status[x][y] = 1;
        }
}
