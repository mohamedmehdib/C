#include <stdio.h>

struct complexe
{
    float reel ;
    float imag ;
};

int main() {


    struct complexe n1,n2,s,p;
    float sr, si;

    printf("Parite reel du n1 : ");
    scanf(" %f",&n1.reel);
    printf("Parite imaginaire du n1 : ");
    scanf(" %f",&n1.imag);

    printf("Parite reel du n2 : ");
    scanf(" %f",&n2.reel);
    printf("Parite imaginaire du n2 : ");
    scanf(" %f",&n2.imag);

    s.reel = n1.reel + n2.reel;
    s.imag = n1.imag + n2.imag;

    printf("La somme est = %2.f+%2.fi",s.reel,s.imag);

    p.reel = n1.reel*n2.reel - n1.imag*n2.imag;
    p.imag = n1.reel*n2.imag + n1.imag*n2.reel;
    printf("\nLe produit est = %2.f+%2.fi", p.reel , p.imag);

}