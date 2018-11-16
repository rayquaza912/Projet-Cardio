#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "module4.h"

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
		char ligne[32], *ch, t[2048];
		int x=0, bpm[2048];

		while (fgets (ligne, sizeof ligne, csv) != NULL)
		{

			ch = strtok(ligne, ";");
			while (ch != NULL)
			{

				if (x%2 != 0)
				{
					printf("Temps : %s	", ch);
				}
				else
				{
					printf("BPM : %s\n", ch);
				}
				
				ch = strtok(NULL, "\n");
				x++;
			}
		}
	}

	fclose(csv);
	return 1;
}
