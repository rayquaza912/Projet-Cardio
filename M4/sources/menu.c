#include <stdio.h>
#include <stdlib.h>
#include "module4.h"

int showOptions()
{

	int config, loop=1, l=1, sb, t1, t2;
	float st;
	char m;

	printf("Traitement des donnees\n======================\n");
	printf("\n[1] Lister toutes les donnees\n[2] Toutes les donnees dans l'ordre decroissant\n[3] Rechercher une valeur\n[4] Calculer une moyenne\n[5] Maximum / minimum de BPM\n");
	
	while(loop)
	{
		printf("\n>>> ");
		scanf("%d", &config);

		switch(config) 
		{
			case 0 :
				exit(0);
				break;
			case 1 :
				simpleList();
				break;
			case 2 :
				//action(2);
				break;
			case 3 :
				while(l)
				{
				printf("\nRechercher un temps ? (y/n)\n>>> ");
				scanf("%c", &m);
					if (m == 'y' || m == 'Y')
					{
						printf("Rechercher(temps) >>> ");
						scanf("%f", &st);
						//action(3, st);
						l=0;
					}
					else if (m == 'n' || m == 'N')
					{
						printf("Rechercher(BPM) >>> ");
						scanf("%d", &sb);
						//action(33, sb);
						l=0;
					}
					else
					{
						printf("[!] Y = Yes (oui) || N = No (non)\n");
						l=1;
					}
				}
				break;
			case 4 :
				printf("\nChoisir l'intervalle de temps en secondes (sans virgule)\n");
				//listMaxMin(t);	(donnes.c)

				while(l)
				{
					printf("Temps(t1) >>> ");
					scanf("%d", &t1);
					printf("Temps(t2) >>> ");
					scanf("%d", &t2);

					if ( t1 > t2 ) 
					{
						printf("[!] Veuillez entrer un intervalle de temps en secondes !\n");
						l=1;
					}
					else
					{
						l=0;
						//moyenne(t1, t2);
					}
				}
				break;
			case 5 :
				//listMaxMin(bpm);
				break;

			default:
				printf("	[!] Veuillez choisir une option comprise entre 1 et 5 !");
		}
		
		if ( config >= 1 && config <= 5)
		{
		loop = 0;
		}

	}
	return 0;
}
