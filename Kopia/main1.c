#include <stdio.h>

#include "struktura.h"
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

    struct field board[WIDTH][HEIGHT];

    // tutaj tworzymy planszę struktur wys x szer

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
