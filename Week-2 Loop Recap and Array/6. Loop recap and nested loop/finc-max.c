#include<stdio.h>
int main()
{
    int n, a;
    int max = -1;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        scanf("%d", &a);

        if(a > max){
            max = a;
        }
    }

    printf("%d", max);
    
    return 0;
}