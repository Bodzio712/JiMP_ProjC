#include <stdio.h>
#include <stdlib.h>

#include "struktura.h"
#include "skaner.h"
#include "zapis_stanu.h"
#include "zapis_graf.h"
#include "zmien_stan.h"
#include "ile_sasiadow.h"

int main (int argc, char ** argv) {

	FILE *wspolrzedne = fopen(argv[1],"r");
	FILE *plik_zapisu = fopen(argv[2], "w");
	FILE *plik_graf = fopen(argv[3], "wb");

	skaner (wspolrzedne);

	int krok = atoi(argv[4]);
	while (krok >0){
       		ile_sasiadow();
		zmien_stan();
		krok--;
	
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
	printf("\n");
	}

	zapis_stanu (plik_zapisu);
	zapis_graf(plik_graf);
	return 0;
}
