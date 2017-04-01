#include "scanner.h"
#include "struktura.h"

void scanner (FILE *position, field **board) {	
	int x, y;
	while(fscanf(position, "%d %d", &x, &y)!=EOF)
		board[x][y].status = 1;
}
