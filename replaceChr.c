#include <stdio.h>

char txt[] = "PUT IN\nPARCEL";

void replaceChr(char *txt)
{
	//char cnt=0;
	
	while(*txt != '\0')
	{
	
		printf("przed zamiana %s\n", txt);
		printf(" txt: %s\n", txt);
	
		if(txt == "\n")
		{		 
			txt=" ";
		}
		//cnt++;
		txt++;
	}
	printf("tekst %s\n", txt);
	
}

int main(void)
{
	replaceChr(txt);
	printf("po zamianie %s", txt);
	return 0;
}

