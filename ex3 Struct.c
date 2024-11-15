#include <stdio.h>

struct temps
{
    int heure;
    int minute;
    int seconde;
};

int main() {
    struct temps T[100];
    int n,i;

    printf("Enter Tab size : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        do
        {
            printf("Heure : ");
            scanf("%d",&T[i].heure);
        } while (T[i].heure >= 24);
        
        do
        {
            printf("Minute : ");
            scanf("%d",&T[i].minute);
        } while (T[i].minute >= 60);
        
        do
        {
            printf("Seconde : ");
            scanf("%d",&T[i].seconde);
        } while (T[i].seconde >= 60);
    }

    for(i=0;i<n;i++){
        if(T[i].heure==23 && T[i].minute==59 && T[i].seconde==59){
            T[i].heure = 0;
            T[i].minute = 0;
            T[i].seconde = 0;
        }else if(T[i].minute==59 && T[i].seconde==59){
            T[i].heure ++;
            T[i].minute = 0;
            T[i].seconde = 0;
        }else if(T[i].seconde==59){
            T[i].minute ++;
            T[i].seconde = 0;            
        }else{
            T[i].seconde ++;         
        }
    }

    for(i=0;i<n;i++){
        printf("\n%d:%d:%d",T[i].heure,T[i].minute,T[i].seconde);
    }
}
