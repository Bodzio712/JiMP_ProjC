#define WYSOKOSC 5
#define SZEROKOSC 5
//Czy komorki poza plansza sa zywe
#define POZA_PLANSZA 1
//1-tak, 0-nie
#define SZERPIKS 20
//szerokość komorki w pliku graficznym w pikselach 
#define SMIERC 6
#define NARODZINY 3
#define SAMOTNOSC 2


struct struktura {
	int status[SZEROKOSC][WYSOKOSC];
	int sasiedzi[SZEROKOSC][WYSOKOSC];
} plansza;
