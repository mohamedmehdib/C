#include <stdio.h>

struct date
{
    int jour;
    int mois;
    int annee;
};

int main() {
    struct date T[100];
    int n,i;
    printf("Enter Tab size : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Jour : ");
        scanf("%d",&T[i].jour);
        printf("Mois : ");
        scanf("%d",&T[i].mois);
        printf("Annee : ");
        scanf("%d",&T[i].annee);
    }

    for(i=0;i<n;i++){
        printf("\nJour : %d , Mois : %d , Annee : %d ",T[i].jour,T[i].mois,T[i].annee);
    }
}