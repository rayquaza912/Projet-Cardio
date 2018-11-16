#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char **argv)
{
	printf("MODULE 4 - Traitement des donnees\n=================================\n\n");
	printf("[*] Ouverture du CSV...\n");
	if (readData("pulses.csv"))
	{
		printf("Done !\n\n");
		showOptions();
	}
	else
	{
		exit(0);
	}
	return 0;
}
