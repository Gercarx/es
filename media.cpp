#include <stdio.h> /includo la libreria
int main(void)
{
	int numero_1,numero_2,media; //dichiaro la libreria 
	printf("inserisci il primo numero"); //chiedo a l utente di inserire il primo numero
	scanf("%d",& numero_1); //acquisisco il primo numero
	printf("inserisci il secondo numero"); //chiedo di inserire il secondo numero
	scanf("%d",& numero_2); //acquisisco il secondo numero
	media=(numero_1+numero_2)/2; //faccio la media tra ii numeri e li salvo nella variabile media
	printf("la media aritmetica e'%d",media); // stampo a schermo la media
	return 0;
	
	
}
