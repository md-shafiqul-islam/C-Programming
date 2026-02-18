#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }

    int posSum = 0, negSum = 0;
    for(int i=0; i<n; i++){
        if(ar[i] > 0){
            posSum += ar[i];
        }else{
            negSum += ar[i];
        }
    }

    printf("%d %d", posSum, negSum);
    
    return 0;
}