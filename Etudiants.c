#include <stdio.h>
#include "function.h"

void main(){
    int j,i,N;
    printf("Combien d'etudiant : ");    
    scanf("%d",&N);
    struct Etudiant *tab;
    tab =saisie(&tab,N);
    printf("----Liste des etudiants----");
    for(i=0;i<N;i++){
        printf("\n\tEtudiant %d : ",i+1);
        affichage(&tab[i]);
    }
}