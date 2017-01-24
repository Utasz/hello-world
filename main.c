#include<stdio.h>

char text[] = "Hello";

void ReverseString(char *text)
{
    
    char cnt = 0;
    
    while(*text != '\0')
    {
        printf("cnt %i text %s\n", cnt, text);
        text++;
        cnt++;
        
    }
    
    printf("end\n");
    printf("wartosc cnt = %i\n", cnt);
    printf("text = %s\n", text);
    
    for(cnt=cnt-1; cnt>=0; cnt--)
    {
        printf("cnt = %i\n", cnt);
        printf("%i\n", text[cnt]);
    }
    
}

int main() {
	ReverseString(text);
}
