#include <stdio.h>

int somme_div(int n){
    int somme , i;
    somme = 0;
    for (i = 1; i <= n/2; i++)
    {
        if (n%i == 0)
        {
            somme = somme + i;
        }
    }
    return somme; 
}

int parfait(int n){
    if (n==somme_div(n))
    {
        return 1;
    }else
    {
        return 0;
    }
    
}

int main() {
    for (int i = 1; i < 1000; i++)
    {
        if (parfait(i)==1)
        {
            printf("%d ,",i);
        }
    }
    
    return 0;
}