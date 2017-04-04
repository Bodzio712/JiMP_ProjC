#include <stdio.h>

#include "zmien_stan.h"
#include "struktura.h"

void zmien_stan (void) {
        int x,y;
        for (x=0; x<SZEROKOSC; x++) {
                for (y=0; y<WYSOKOSC; y++) {
			if (plansza.status[x][y] == 1) {
				if (plansza.sasiedzi[x][y]>=SMIERC || plansza.sasiedzi[x][y] <= SAMOTNOSC)
					plansza.status[x][y] = 0;
			} else {
                                if (plansza.sasiedzi[x][y]>=NARODZINY)
                                        plansza.status[x][y] = 1;
			}
                }
        }
}

