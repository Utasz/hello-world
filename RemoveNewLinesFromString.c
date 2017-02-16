#include <stdio.h>
#include <string.h>

char txt[] = "JAKIS\nTAM\nTEKST";

void RemoveNewLinesFromString(char *txt)
{
	char cnt;
	char len = strlen(txt);
	printf("przed zamiana %s\n", txt);
	
	for (cnt = 0; cnt<len; cnt++)
	{
		if(txt[cnt] == '\n')
		{		 
			txt[cnt]=' ';
		}
 	}
}

int main(void)
{
	RemoveNewLinesFromString(txt);
	printf("po zamianie %s", txt);
	return 0;
}

