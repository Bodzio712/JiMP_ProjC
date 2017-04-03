#include <stdio.h>
#include <stdlib.h>

#include "struktura.h"

void zapis_graf(FILE * plik_graf){
	
	fprintf(plik_graf, "P1\n%d %d\n",WYSOKOSC * SZERPIKS ,SZEROKOSC * SZERPIKS);

	int x,y,k,p;
	//iteracje

	for(y=0; y < WYSOKOSC; y++) {
    		for(p = 0; p < SZERPIKS; p++){
     			for (x = 0; x < SZEROKOSC; x++) {
                		for (k=0; k < SZERPIKS; k++)
                    			fprintf(plik_graf,"%d",plansza.status[x][y]);
            	
			}		
        	}
    	}
}
