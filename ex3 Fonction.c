#include <stdio.h>

int saisir_taille(){
    int n;

    do
    {
        printf("Taille du tableau : ");
        scanf("%d",&n);
    } while (n<1 || n>10);
    
    return n;
}

void remplir_tab(float tab[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("Tab[%d] : ",i);
        scanf("%f",&tab[i]);
    }
}

void afficher_tab(float tab[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%f | ",tab[i]);
    }
    printf("\n");
    
}

int recherche_tab(float tab[] , int n , float element){
    int indice = -1 , i = 0;
    while (indice == -1 && i<n)
    {
        if (tab[i] == element)
        {
            indice = i ;
        }else
        {
            i++;
        }
    }
    return indice ;
    
}

int main() {
    int k , p , indice;
    float T1[10], T2[10] , element;
    k = saisir_taille();
    p = saisir_taille();
    remplir_tab(T1,k);
    remplir_tab(T2,p);
    afficher_tab(T1,k);
    afficher_tab(T2,p);

    printf("Element : ");
    scanf("%f",&element);
    indice = recherche_tab(T1 , k , element);
    printf("Indice d'element dans T1 : %d",indice);

    indice = recherche_tab(T2 , p , element);
    printf("\nIndice d'element dans T2 : %d",indice);



    return 0;
}
