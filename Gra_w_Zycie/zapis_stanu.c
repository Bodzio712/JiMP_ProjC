#include <stdio.h>

#include "zapis_stanu.h"
#include "struktura.h"

void zapis_stanu (FILE * plik_zapisu) {
	int x,y;
	for (x=0; x<SZEROKOSC; x++) {
		for (y=0; y<WYSOKOSC; y++) {
			if (plansza.status[x][y] == 1)
				fprintf(plik_zapisu ,"%d %d\n", x, y);
		}
	}	
}
