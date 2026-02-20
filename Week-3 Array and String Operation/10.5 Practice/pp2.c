#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);

    while(n--){
        char S[101];
        scanf("%s", S);

        int length = strlen(S);

        if(length <= 10){
            printf("%s", S);
        }
        else{
            printf("%c%d%c", S[0],length-2,S[length-1]);
        }

        printf("\n");
    }
    
    return 0;
}