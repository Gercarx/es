#include <stdio.h>
int main(void)
{
	double numero_1 , numero_2 ; //dichiaro le variabili 
	int totale; // dichiaro la variabile
	printf("inserisci il primo numero"); //chiedo a l'utente di inserire il primo numero
	scanf("%lf", & numero_1);//acquisisco il primo numero
	printf("inserisci il secondo numero");//chiedo a l'utente di inserire il secondo numero
	scanf("%lf", & numero_2);//acquisisco il secondo numero
	totale=numero_1 * numero_2; //faccio la moltiplicazione
	printf("il totale della moltiplicazione e' %d", totale);//stampo su schermo la moltiplicazione
	return 0;
	
}
