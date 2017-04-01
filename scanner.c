<<<<<<< HEAD
#include "scanner.h"
#include "struktura.h"

void scanner (FILE *position, int *status, int x_size, int y_size) {	
	int x, y;
	while(fscanf(position, "%d %d", &x, &y)!=EOF)
		status[(x*y_size) + y] = 1;
}
=======
//
// Created by Damian on 2017-03-31.
//

#include <stdio.h>

void scanner (FILE *position, field **board){
    while (fscanf(position, x,y)!=EOF){
        if (x < HEIGHT && y < WIDTH)
            status.board[x][y] = 1;
    }
}
>>>>>>> 87d464462d73080b329a502116b820c3383c041b
