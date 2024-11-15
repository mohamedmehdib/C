#include <stdio.h>
#include <string.h>

struct etudiant
{
    char nom[50] ;
    char prenom[50];
    int code ;
    float moyenne ;
    float notes[20] ;
    int rang ;
    int code_departement ;
};

struct departement
{
    char nom_departement[30] ;
    int code_departement ;
    int nombre_etudiant ;
};

void ajouterEtudiant(struct etudiant t[] , int nombreEtudiant , int nombreMatieres){
    struct etudiant e ;
    int moyenne ;

    printf("Nom d'etudiant : ") ;
    scanf("%s",&e.nom) ;
    printf("Leur prenom : ") ;
    scanf("%s",&e.prenom) ;
    printf("Leur code : ") ;
    scanf("%d",&e.code) ;
    printf("Leur code du departement : ") ;
    scanf("%s",&e.prenom) ;

    for (int i = 0; i < nombreMatieres; i++)
    {
        printf("Note : ",i+1);
        scanf("%f",&e.notes[i]) ;
    }

    moyenne = 0 ;

    t[nombreEtudiant] = e ;
}

void supprimerEtudian(struct etudiant t[] , int code , int nombreEtudiant){
    int founded , i , indice;
    founded = 0 ;
    indice = 0 ;
    while (founded == 0)
    {
        if ( t[indice].code == code )
        {
            founded = 1 ;
        }else
        {
            indice ++ ;
        }
    }

    for (int i = indice; i < nombreEtudiant; i++)
    {
        t[i] = t[i+1] ;
    }
}

void modifierEtudiant(struct etudiant t[] , int nombreMatieres , int code){
    int founded , i , indice ;
    founded = 0 ;
    i = 0 ;

    while (founded == 0)
    {
        if (t[i].code == code)
        {
            founded = 1 ;
        }else
        {
            i ++ ;
        }
    }

    printf("Nom d'etudiant : ") ;
    scanf("%s",&t[i].nom) ;
    printf("Leur prenom : ") ;
    scanf("%s",&t[i].prenom) ;
    printf("Leur code : ") ;
    scanf("%d",&t[i].code) ;
    printf("Leur code du departement : ") ;
    scanf("%s",&t[i].prenom) ;

    for (int i = 0; i < nombreMatieres; i++)
    {
        printf("Note : ",i+1);
        scanf("%f",&t[i].notes[i]) ;
    }

    
}

int rechercherEtudiantParCode(struct etudiant t[] , int code){
    int founded , i , indice ;
    founded = 0 ;
    i = 0 ;

    while (founded == 0)
    {
        if (t[i].code == code)
        {
            founded = 1 ;
        }else
        {
            i ++ ;
        }
    }

    return t[i].nom ;
}

int rechercherEtudiantParNom(struct etudiant t[] , char nom[50]){
    int founded , i , indice ;
    founded = 0 ;
    i = 0 ;

    while (founded == 0)
    {
        if (t[i].nom == nom)
        {
            founded = 1 ;
        }else
        {
            i ++ ;
        }
    }

    return t[i].code ;
}

void afficherEtudiants(struct etudiant t[] , int nombreMatieres , int n){
    for (int i = 0; i < n; i++)
    {
        printf("Nom et Prenom : %s %s",t[i].nom , t[i].prenom) ;
        printf("\nCode : %d" , t[i].code) ;
        printf("\nLeur notes : ") ;
        for (int j = 0; i < nombreMatieres; i++)
        {
            printf("%f | " , t[i].notes[j]) ;
        }
        
        printf("\nCode de son departement : %d",t[i].code_departement) ;

    }
    
}

int main() {

    struct etudiant etudiants[100] ;
    struct departement departements[100] ;
    char matieres[20][50] = {"Algo" , "Python" , "Math" , "Business"};
    float coefficients[20] = {3 , 2 , 2 , 1.5};
    int nombreEtudiant , nombreMatieres;

    nombreEtudiant = 0 ;
    nombreMatieres = 4 ;

    ajouterEtudiant(etudiants , nombreEtudiant , nombreMatieres);
    printf("%s",etudiants[0].nom);

    return 0;
}