projekt: main.o
	gcc main.o -o projekt

main.o: main.c
	gcc main.c -c
