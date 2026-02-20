#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d", &n);

    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }

    int max = INT_MIN;
    int min = INT_MAX;
    int maxIndex, minIndex;

    for(int i=0; i<n; i++){
        if(ar[i] > max){
            max = ar[i];
            maxIndex = i;
        }
        if(ar[i] < min){
            min = ar[i];
            minIndex = i;
        }
    }

    int temp = ar[maxIndex];
    ar[maxIndex] = ar[minIndex];
    ar[minIndex] = temp;

    for(int i=0; i<n; i++){
        printf("%d ", ar[i]);
    }

    return 0;
}