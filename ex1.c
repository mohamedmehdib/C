#include <stdio.h>

int factoriel(int n){
    int fact;
    fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact*i;
    }
    return fact;
}

int nbr_combinaison(int n ,int p){
    int c;
    
    c = factoriel(n)/(factoriel(n-p)*factoriel(p));
    return c;
}

int main() {
    int n ,p, combinaison;
    printf("N : ");
    scanf("%d",&n);
    printf("P : ");
    scanf("%d",&p);

    combinaison = nbr_combinaison(n,p);
    printf("Combinaison : %d",combinaison);
    return 0;
}