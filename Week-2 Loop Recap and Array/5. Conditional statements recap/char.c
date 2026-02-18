#include<stdio.h>
int main()
{
    char x;
    scanf("%c", &x);

    if(x >= 'a' && x <= 'z'){
        char newChar = x - 32;
        printf("%c", newChar);
    }else if(x >= 'A' && x <= 'Z'){
        printf("%c", x + 32);
    }
    
    return 0;
}