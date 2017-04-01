#include <stdio.h>
#include <stdlib.h>

//Zastosujmy polskie nazwy, bedzie latwiej

#define WYSOKOSC 5
#define SZEROKOSC 5
//Czy komorki poza plansza sa zywe
#define POZA_PLANSZA 1
//1-tak, 0-nie

struct struktura {
	int status[SZEROKOSC][WYSOKOSC];
	int sasiedzi[SZEROKOSC][WYSOKOSC];
} plansza;

//Deklaracje funkcji
void skaner (FILE * wspolrzedne);
void zapis_stanu (FILE * plik_zapisu);
void ile_sasiadow (void);

int main (int argc, char ** argv) {
	FILE *wspolrzedne = fopen(argv[1],"r");
	FILE *plik_zapisu = fopen(argv[2], "w");

	skaner (wspolrzedne);
	ile_sasiadow();
	printf("czekpojnt\n");

	int x,y;

//Kntrola wczytywania
	for (x=0; x<SZEROKOSC; x++) {
		for (y=0; y<WYSOKOSC; y++) {
			if (plansza.status[x][y] == 1)
				printf("*");
			else
				printf("O");
		}
		printf("\n");
	}

	 for (x=0; x<SZEROKOSC; x++) {
                for (y=0; y<WYSOKOSC; y++) {
			printf ("%d ", plansza.sasiedzi[x][y]);
                }
                printf("\n");
        }


	zapis_stanu (plik_zapisu);
}

void skaner (FILE * wspolrzedne) {
        int x,y;
        while (fscanf (wspolrzedne,"%d %d", &x, &y) != EOF) {
               if (x < SZEROKOSC && y < WYSOKOSC)
                    plansza.status[x][y] = 1;
        }
}

void zapis_stanu (FILE * plik_zapisu) {
	int x,y;
	for (x=0; x<SZEROKOSC; x++) {
		for (y=0; y<WYSOKOSC; y++) {
			if (plansza.status[x][y] == 1)
				fprintf(plik_zapisu ,"%d %d\n", x, y);
		}
	}	
}

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
			}
		if (plansza.status[x][y] == 1)
			ilosc--;
		plansza.sasiedzi[x][y] = ilosc;
		ilosc=0;
                }
        }
}
