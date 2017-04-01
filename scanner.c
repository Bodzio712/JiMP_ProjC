#include <stdio.h>

void scanner (FILE *position, field **board){
    while (fscanf(position, x,y)!=EOF){
        if (x < HEIGHT && y < WIDTH)
            status.board[x][y] = 1;
    }
}
