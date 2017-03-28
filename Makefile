projekt: main.o struktura.h
	gcc main.o -o projekt

main.o: main.c
	gcc main.c -c
