#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

int readData(char fileName[32])
{
	FILE *csv = NULL;
	csv = fopen(fileName, "r");

	if (csv == NULL)
	{
		printf("[!] Error while opening the file, exiting...\n");
		return 0;
		exit(0);
	}

	else
	{
		char ligne[32], *ch;
		int x=0;

		while (fgets (ligne, sizeof ligne, csv) != NULL)
		{

			ch = strtok(ligne, ";");
			while (ch != NULL)
			{

				if (x%2 != 0)
				{
					printf("%s BPM\n", ch);
				}
				else
				{
					printf("%s ms ", ch);
				}
				
				ch = strtok(NULL, "\n");
				x++;
			}
		}
	}

	fclose(csv);
	return 1;
}
