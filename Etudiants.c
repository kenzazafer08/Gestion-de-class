#include <stdio.h>
#include "function.h"

void main(){
    int j,i,N;
   struct Date {
        int jour;
        int mois;
        int annee;
    };
    struct Etudiant {
        char name [30] ;
        int age;
        char niveaux [30] ;
        struct Date date; 
        int note[4];
    };
    printf("Combien d'etudiant : ");
    scanf("%d",&N);
    struct Etudiant *tab;
    *tab =saisie(tab,N);
    affichage(tab,N);
}