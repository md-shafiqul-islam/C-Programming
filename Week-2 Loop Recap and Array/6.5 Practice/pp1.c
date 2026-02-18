#include<stdio.h>
int main()
{
    char character;
    scanf("%c", &character);

    if(character == 'z'){
        printf("a");
    }
    else
    {
        printf("%c", character + 1);
    }
    
    return 0;
}