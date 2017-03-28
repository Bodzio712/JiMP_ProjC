#include <stdio.h>

#include "struktura.h"

// Konfiguracja mapy, docelowo mozna wrzycic do pliku naglowkowego
#define neighbour 4
#define width 10
#define height 10

int main(int argc, char **argv) {

    FILE *position = fopen(argv[1], "r");
    FILE *output = fopen(argv[2], "w");

    // tutaj tworzymy planszę struktur wys x szer

    scanner(position);

    howmany(field **board);

    change(field **board);

    result(output, field **board);

    return 0;
}
