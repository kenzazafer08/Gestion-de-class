#include <stdio.h>
#include "function.h"

void main(){
    int j,i,N;
    printf("Combien d'etudiant : ");
    scanf("%d",&N);
    struct Etudiant *tab;
    tab =saisie(&tab,N);
    affichage(&tab,N);
}