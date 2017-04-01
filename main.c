#include <stdio.h>
#include <stdlib.h>

#include "scanner.h"

// Konfiguracja mapy, docelowo mozna wrzycic do pliku naglowkowego
#define NEIGHBOR 4
#define WIDTH 10
#define HEIGHT 10
#define OUT_OF_BOARD 1 //1-za granica planszy sa komroki, 0-nie ma komorek

//Tryb debugowania
#define TEST

int main(int argc, char **argv) {

    FILE *position = fopen(argv[1], "r");
    FILE *output = fopen(argv[2], "w");

	//Te zmienne sa po to aby umozliwic dopisanie funkcji ktora pobierze
	//parametr wywolania z rozmiarem planszy rooznym od domyslnego

	int x_size = WIDTH, y_size = HEIGHT;

	//status - tablica z stanem komorek (0-martwa, 1-zywa)
	//how_many - tablica z iloscia sasiadow komorki
	int status[x_size*y_size];
	int how_many[x_size*y_size];

	scanner (position, status, x_size, y_size);

#ifdef TEST
	int x_counter, y_counter;
	for (x_counter =0; x_counter<x_size; x_counter++) {
		for (y_counter=0; y_counter<y_size; y_counter++) {
			printf("%d", status[x_counter*y_size+y_counter]);
		}
		printf("\n");
	}
#endif

/*
    scanner(position, board);

    howmany(field **board);

    change(field **board);

    result(output, field **board);
*/
#ifdef TEST
	printf("KONIEC\n");
#endif

    return 0;
}
