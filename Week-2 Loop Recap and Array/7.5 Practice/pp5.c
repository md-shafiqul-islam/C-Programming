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

    int lowest_number = INT_MAX;
    int position;
    for(int i=0; i<n; i++){
        if(ar[i] < lowest_number){
            lowest_number = ar[i];
            position = i+1;
        }
    }

    printf("%d %d", lowest_number, position);

    return 0;
}