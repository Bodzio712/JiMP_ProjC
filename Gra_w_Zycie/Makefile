GraWZycie: main.o struktura.h ile_sasiadow.o skaner.o zapis_graf.o zapis_stanu.o zmien_stan.o 
	gcc -Wall -lm main.o ile_sasiadow.o skaner.o zapis_graf.o zapis_stanu.o zmien_stan.o -o GraWZycie

main.o: main.c ile_sasiadow.h skaner.h zapis_graf.h zapis_stanu.h zmien_stan.h
	gcc -Wall main.c -c

ile_sasiadow.o: ile_sasiadow.c ile_sasiadow.h
	gcc -Wall ile_sasiadow.c -c

skaner.o: skaner.c skaner.h
	gcc -Wall skaner.c -c

zapis_graf.o: zapis_graf.c zapis_graf.h
	gcc -Wall zapis_graf.c -c

zapis_stanu.o: zapis_stanu.c zapis_stanu.h
	gcc -Wall zapis_stanu.c -c

zmien_stan.o: zmien_stan.c zmien_stan.h
	gcc -Wall zmien_stan.c -c

test: GraWZycie
	./GraWZycie dane/wejscie dane/wyjscie dane/rys.pbm 2
