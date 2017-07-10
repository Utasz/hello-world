#include <stdio.h>

char text[] = "Hello World";

void ReverseString(char *text)
{

    int stringCnt = 0;

    while(*text != '\0')
    {
        text++;
        stringCnt++;
    }

    printf("\n");
    printf("Reversed text = ");

    for (stringCnt; stringCnt >= 0; stringCnt--)
    {
        printf("%c", *text--);
    }

}

int main()
{
    printf("Text before reversing = %s\n", text);
	ReverseString(text);
	return 0;
}
