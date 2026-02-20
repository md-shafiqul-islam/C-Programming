#include<stdio.h>
#include<string.h>
int main()
{
    char S[1001];
    scanf("%s", S);
    int length = strlen(S);

    int is_palindrome=1, i=0, j=length-1;

    while(i<j){
        if(S[i] != S[j]){
            is_palindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if(is_palindrome) printf("YES");
    else printf("NO");

    return 0;
}