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

void skaner (FILE * wspolrzedne);

int main (int argc, char ** argv) {
	FILE *wspolrzedne = fopen(argv[1],"r");
	skaner (wspolrzedne);
	int x,y;
	for (x=0; x<SZEROKOSC; x++) {
		for (y=0; y<WYSOKOSC; y++)
			printf("x=%d, y=%d, status=%d\n", x, y, plansza.status[x][y]);
	}
}

void skaner (FILE * wspolrzedne) {
        int x,y;
        while (fscanf (wspolrzedne,"%d %d", &x, &y) != EOF) {
               if (x < SZEROKOSC && y < WYSOKOSC)
                    plansza.status[x][y] = 1;
        }
}

