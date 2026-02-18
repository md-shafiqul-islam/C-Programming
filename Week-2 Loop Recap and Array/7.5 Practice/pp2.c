#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }

    int x;
    scanf("%d", &x);

    int found = 0;
    for(int i=0; i<n; i++){
        if(ar[i] == x){
            found = 1;
            printf("%d", i);
            break;
        }
    }

    if(found == 0){
        printf("-1");
    }

    return 0;
}