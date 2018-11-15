#include <stdlib.h>
#include <stdio.h>
#include "options.h"


int main(int argc, char *argv[])
{
    int n, loop, choix;


  printf ("                *#####*\n");
  printf ("             *##########*\n");
  printf ("           *##############\n");
  printf ("           ################\n");
  printf ("          ##################         **####* \n");
  printf ("           ##################     *########## \n");
  printf ("           ##################   *############# \n");
  printf ("            #################* ###############*\n");
  printf ("             #################################* \n");
  printf ("               ############################### \n");
  printf ("                #############################*\n");
  printf ("                 *########################## \n");
  printf ("                   ######################## \n");
  printf ("                    *####################* \n");
  printf ("                     *##################  \n");
  printf ("                      *############### \n");
  printf ("                        ############# \n");
  printf ("                         ########## \n");
  printf ("                         *#######* \n");
  printf ("                          ######\n");
  printf ("                           #### \n");
  printf ("                           ### \n");
  printf ("                            # \n\n");

	printf("Configuration du profil du coeur\n================================\n");
	printf("\n[1] Tous les LED allumees\n[2] 1 LED sur 2 allumee\n[3] 1 LED sur n allumee\n[4] Choisir une LED a allumer\n[5] \"Chenille\" : 1 LED puis la suivante\n");
	printf("\n>>> ");
	scanf("%d", &choix);

    FILE* fichier = NULL;
    fichier = fopen("param.h", "w+");

    if (fichier != NULL)
    {


        switch(choix)
            {
			case 0 :
				exit(0);
				break;
			case 1:
				fprintf(fichier, "#define OPTION 1");
          		fclose(fichier);
                break;
			case 2:
				fprintf(fichier, "#define OPTION 2");
          		fclose(fichier);;
				break;
			case 3:
				printf("\n1 LED sur combien ?\n>>> ");
				scanf("%d", &n);
				fprintf(fichier, "#define OPTION 3\n");
				fprintf(fichier, "#define LED %d", n);
          		fclose(fichier);
                break;
			case 4:
				printf("\nChoisir la LED a allumer (1 - 10)\n>>> ");
				scanf("%d", &n);
				fprintf(fichier, "#define OPTION 4\n");
				fprintf(fichier, "#define LED %d", n);
				fclose(fichier);
                break;
			case 5:
				fprintf(fichier, "#define OPTION 2");
          		fclose(fichier);;
                break;
			default:
				printf("\n[!] Veuillez choisir une option comprise entre 1 et 5 !\n");
       }

		return 0;
    }
}
