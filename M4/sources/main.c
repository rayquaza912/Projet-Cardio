#include <stdio.h>
#include <stdlib.h>
#include "module4.h"

int main(int argc, char **argv)
{
	printf("MODULE 4 - Triatement des donnees\n=================================\n\n");
	printf("[*] Ouverture du CSV...\n");
	if (readData("fake.csv"))
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
