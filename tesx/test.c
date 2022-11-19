#include <stdio.h>
#include <stdlib.h>

void print(int mas[],int n){
    for (int i = 0; i < n; i++)
        printf("%d",mas[i]);
}

void reverse(int mas[],int n){
    int mos[n];

    for(int i = 0; i < n;i++){
        mos[n - 1 - i] = mas[i];
    }

    for (int i = 0; i < n; i++)
        mas[i] = mos[i];
}





int main()
{
    int mas[] = {5,6,3};
    int n = sizeof(mas) / sizeof(mas[0]);
    reverse(mas,n);
    print(mas,n);

    return 0;
}

