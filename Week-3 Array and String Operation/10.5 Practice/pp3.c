#include<stdio.h>
#include<string.h>
int main()
{
    char S[100001];
    scanf("%s", S);

    int length = strlen(S);

    for(int i=0; i<length; i++){
        if(S[i] >= 'a' && S[i] <= 'z'){
            S[i] = S[i] - 32;
        }else if(S[i] >= 'A' && S[i] <= 'Z'){
            S[i] = S[i] + 32;
        }else if(S[i] == ','){
            S[i] = S[i] - 12;
        }
    }

    printf("%s", S);
    return 0;
}