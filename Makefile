projekt: main.o struktura.h scanner.o
	gcc -Wall main.o -o projekt

main.o: main.c scanner.h
	gcc main.c -c

scanner.o: scanner.c scanner.h
	gcc scanner.c -c

test: projekt
	./projekt board_data/source board_data/output
