#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "struktura.h"
#include "skaner.h"
#include "zapis_stanu.h"
#include "zapis_graf.h"
#include "zmien_stan.h"
#include "ile_sasiadow.h"

//#define TEST

void usage(int argc, char ** argv){
    if (argc > 5) {
        printf("Wprowadzono za duzo argumentow. Aby program dzialal poprawnie:\n");
    }
    else if (argc < 5){
        printf("Wprowadzono za malo argumentow. Aby program dzialal poprawnie:\n");
    }

    if (strcmp(argv[1], "-h")==0 || strcmp(argv[1], "-help")==0 || strcmp(argv[1], "/h")==0 || strcmp(argv[1], "/help")==0){
        printf("To jest pomoc programu 'GraWZycie'. Aby uruchomić program:\n");
    }

    if (argc != 5){
        printf("Prodaj 4 parametry: Sciezke do pliku z koordynatami zywych komorek, sciezke do pliku zapisu wyniku w formie tekstowej, sciezke do pliku graficznego z wynikiem oraz ilosc krokow, np:\n");
        printf("./GraWZycie wejcie.txt wyjscie.txt grafika.pbm 4\n");
    }

}


int main (int argc, char ** argv) {

	FILE *wspolrzedne = fopen(argv[1],"r");
	FILE *plik_zapisu = fopen(argv[2], "w");
	FILE *plik_graf = fopen(argv[3], "wb");
	
	usage(argc, argv);

	skaner (wspolrzedne);

	int krok = atoi(argv[4]);
	while (krok >0){
       		ile_sasiadow();
		zmien_stan();
		krok--;

#ifdef TEST	
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
#endif
	}

	zapis_stanu (plik_zapisu);
	zapis_graf(plik_graf);
	return 0;
}
