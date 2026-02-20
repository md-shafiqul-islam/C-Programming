#include<stdio.h>
#include<string.h>
int main()
{
    char word[100];
    scanf("%s", &word);

    int strLength = strlen(word);
    printf("%d", strLength);

    return 0;
}