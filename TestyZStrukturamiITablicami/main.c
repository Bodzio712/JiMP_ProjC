#include <stdio.h>
#include <stdlib.h>

int main (int argc, char ** argv) {
	typedef struct {
		int stan;
		int l_sasiadow;
	} komorka_t;

	int plansza[2][2];
	
	int i;
	int x,y;

	for (i=0; i<4; i++) {
		if (i<2){
			x=i;
			y=0;
		} else {
			x=i-2;
			y=1;
		}

		printf("x=%d, y=%d\n", x, y);
	}

}
