#include <stdio.h>

char txt[] = "EMERGENCY\nACCESS";

void removeNewlines(char *txt)
{
	char cnt=0;
	printf("przed zamiana %s\n", txt);
	
	while(txt[cnt] != '\0')
	{
		if(txt[cnt] == '\n')
		{		 
			txt[cnt]=' ';
		}
		cnt++;
	}
	
}

int main(void)
{
	removeNewlines(txt);
	printf("po zamianie %s", txt);
	return 0;
}

