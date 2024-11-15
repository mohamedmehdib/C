#include <stdio.h>

struct date
{
    int jour;
    int mois;
    int annee;
};

struct temps
{
    int heure;
    int minute;
    int seconde;
};

struct timestamp
{
    struct temps temps;
    struct date date;
};


int main() {
    struct timestamp tts1,tts2 ;
    int duree, first, second;
    
    printf("Jour : ");
    scanf("%d",&tts1.date.jour);
    printf("Mois : ");
    scanf("%d",&tts1.date.mois);
    printf("Annee : ");
    scanf("%d",&tts1.date.annee);
    do
    {
        printf("Heure : ");
        scanf("%d",&tts1.temps.heure);
    } while (tts1.temps.heure >= 24);
    do
    {
        printf("Minute : ");
        scanf("%d",&tts1.temps.minute);
    } while (tts1.temps.minute >= 60);
    do
    {
        printf("Seconde : ");
        scanf("%d",&tts1.temps.seconde);
    } while (tts1.temps.seconde >= 60);



   
    printf("Jour : ");
    scanf("%d",&tts2.date.jour);
    printf("Mois : ");
    scanf("%d",&tts2.date.mois);
    printf("Annee : ");
    scanf("%d",&tts2.date.annee);
    do
    {
        printf("Heure : ");
        scanf("%d",&tts2.temps.heure);
    } while (tts2.temps.heure >= 24);
    do
    {
        printf("Minute : ");
        scanf("%d",&tts2.temps.minute);
    } while (tts2.temps.minute >= 60);
    do
    {
        printf("Seconde : ");
        scanf("%d",&tts2.temps.seconde);
    } while (tts2.temps.seconde >= 60);

    duree = 0 ;


    first = tts1.temps.seconde + tts1.temps.minute*60 + tts1.temps.heure*3600 ;
    first = first + tts1.date.jour*24*3600 ;

    switch(tts1.date.mois){
        case 1,3,5,7,8,10,12:
        
    }



    second = tts2.temps.seconde + tts2.temps.minute*60 + tts2.temps.heure*3600;



    
}
