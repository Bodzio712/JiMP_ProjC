#include <stdio.h>

#include "ile_sasiadow.h"
#include "struktura.h"

void ile_sasiadow (void) {
	int ilosc = 0;
	int x, y;
	for (x=0; x<SZEROKOSC; x++) {
                for (y=0; y<WYSOKOSC; y++) {
			if (POZA_PLANSZA ==1) {
				int sx=x-1, sy=y-1;
				int licznik=0;
				while (licznik<9) {
					if(sx>x+1) {
						sx=x-1;
						sy++;
					}
					if(sx<0 || sy<0 || sx>SZEROKOSC-1 || sy>WYSOKOSC-1)
						ilosc++;
					else {
						if (plansza.status[sx][sy] == 1)
							ilosc++;
					}
					sx++;
					licznik++;
				}
			} else {
				 int sx=x-1, sy=y-1;
                                int licznik=0;
                                while (licznik<9) {
                                        if(sx>x+1) {
                                                sx=x-1;
                                                sy++;
                                        }
                                        if(sx<0 || sy<0 || sx>SZEROKOSC-1 || sy>WYSOKOSC-1)
                                                ;
                                        else {
                                                if (plansza.status[sx][sy] == 1)
                                                        ilosc++;
                                        }
                                        sx++;
                                        licznik++;

			}
			}
		if (plansza.status[x][y] == 1)
			ilosc--;
		plansza.sasiedzi[x][y] = ilosc;
		ilosc=0;
                }
        }
}
