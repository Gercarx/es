#include <stdio.h>
void print_menu ();
int gioca_partita();
int main ()
 {

char scelta= {'\0'};
print_menu();
scanf ("%c",&scelta);
if (scelta == 'B')
		{
			printf ("grazie per aver giocato,alla prossima");
			return 0;
			}	
while (scelta == 'A')
		{
			gioca_partita();
			print_menu();
			scanf("%c",&scelta);
		}

return 0;
}

void print_menu ()
{
	printf("start menu:/n");
	printf("A>> iniziare una nuova partita/nB>>Uscire dal gioco/n");
	printf("inserisci la lettera corrispondente alla tua scelta:");
}	
int gioca_partita()
{
	int punteggio =0;
	char nome[20]={'\0'};
	char risposta1,risposta2;
	printf ("inserisci il tuo nome:/n");
	scanf ("%s" ,&nome);
	printf ("domanda numero 1:/n");
	printf ("inserire qui la domanda/n");
	printf ("A >>> risposta 1/nB >>>risposta 2/nC>>>>risposta 3/n");
	printf ("inserire la risposta:");
	scanf ("%c", &risposta1);
	
	//gestiamo la casistica della risposta esatta
	
	if(risposta1 == 'B')
			{
				punteggio++;
			}
	printf ("domanda numero 2:/n");
	printf ("inserire qui la domanda/n");
	printf ("A >>> risposta 1/nB >>>risposta 2/nC>>>>risposta 3/n");
	printf ("inserire la risposta:");
	scanf ("%c", &risposta2);
	// gestiamo la casistica della risposta esatta per la seconda domanda
	if (risposta2 == 'A')
			{
				punteggio++;
			}
	printf("Partita conclusa,punteggio totalizzato da %s:%d/n",nome,punteggio);
	
	return 0;
}

