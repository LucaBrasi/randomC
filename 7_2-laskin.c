#include <stdio.h>

int luku1, luku2;
void menu(void);
void valinta(void);
void summa(void);
void erotus(void);
void tulo(void);

/*	int getLuku()
*	int getLuku(int);
*	{
*	 kerää numerot tällä?
*	
*	}
*/
void menu(void)
{
	printf("1: kahden luvun summa\n"
		"2: kahden luvun erotus\n"
		"3: kahden luvun tulo\n");
	printf("<0 ohjelman lopetus\n");

}

void valinta(void)
{
	int valinta;
	do{
		menu();
		printf("Valitse laskutoimitus:");
		scanf("%d", &valinta);
		if(valinta < 0) {
			printf("Ohjelma lopetetaan...");
		}
		else if(valinta == 1) {
			summa();
		}
		else if(valinta == 2) {
			erotus();
		}
		else if(valinta == 3) {
			tulo();
		}
		else {
			printf("Antamasi luku ei kelpaa.\n\n");
		}
	}while(valinta>0);
}

void summa(void)
{
	printf("Syötä ensimmäinen luku:");
	scanf("%d", &luku1);
	printf("Syötä toinen luku:");
	scanf("%d", &luku2);
	int summa = luku1 + luku2;
	printf("%d + %d = %d\n\n", luku1, luku2, summa);
}

void erotus(void)
{
	printf("Syötä ensimmäinen luku:");
	scanf("%d", &luku1);
	printf("Syötä toinen luku:");
	scanf("%d", &luku2);
	int erotus = luku1 - luku2;
	printf("%d - %d = %d\n\n", luku1, luku2, erotus);
}

void tulo(void)
{
	printf("Syötä ensimmäinen luku:");
	scanf("%d", &luku1);
	printf("Syötä toinen luku:");
	scanf("%d", &luku2);
	int tulos = luku1 * luku2;
	printf("%d * %d = %d\n\n", luku1, luku2, tulos);
}

int main(void)
{
	menu();
	valinta();
	return 0;
}
