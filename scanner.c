#include "scanner.h"
#include "struktura.h"

void scanner (FILE *position, int *status, int x_size, int y_size) {	
	int x, y;
	while(fscanf(position, "%d %d", &x, &y)!=EOF)
		status[(x*y_size) + y] = 1;
}
