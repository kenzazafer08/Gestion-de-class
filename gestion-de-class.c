#include <stdio.h>
#include <stdlib.h>
#include "function.h"

void main(){
    Etudiant *E;
    int i,N,M,mx,mn,x;
    printf("Combien d'etudiants vous voulez entrer : ");
    scanf("%d",&N);
    E=malloc(N*sizeof(Etudiant));
    E=saisie(E,N);
    E=tri(E,N);
    printf("\n---Bonjour---");
    do{
        printf("\nAfficher listes des etudiants : 1");
        printf("\nTrier la listes des etudiants : 2");
        printf("\nAfficher la moyenne d'age : 3");
        printf("\nAfficher l'age minimale : 4");
        printf("\nAfficher l'age maximale : 5");
        printf("\nQuitter : 0");
        printf("\n");
        scanf("%d",&x);
        switch(x){
            case 0 :
              printf("Done !");
            break;
            case 1 :
              affichage(E,N);
            break;
            case 2 :
              E=tri(E,N);
              affichage(E,N);
            break;
            case 3 :
              M=moyenneage(E,N);
              printf("\nLa moyenne d'age est : %d",M);
            break;
            case 4 :
             mn=min(E,N);
             printf("\nL'age minimale est : %d",mn);
             printf("\nLes etudiants les plus petits : ");
             for(i=0;i<N;i++){
                if(E[i].age==mn){
                printf("\n\tEtudiant %d: ",i+1);
                 printf("\nNom : %s",E[i].name);
                 printf("\nPrenom : %s",E[i].prenom);
                 printf("\nDate de naissance : %d/%d/%d",E[i].d.jour,E[i].d.mois,E[i].d.annee);
                 printf("\nAge : %d",E[i].age);}
                 
               }
            break;
            case 5 :
              mx=max(E,N);
              printf("\nL'age maximale est : %d",mx);
              printf("\nLes etudiants les plus grands : ");
              for(i=0;i<N;i++){
                if(E[i].age==mx){
                printf("\n\tEtudiant %d: ",i+1);
                 printf("\nNom : %s",E[i].name);
                 printf("\nPrenom : %s",E[i].prenom);
                 printf("\nDate de naissance : %d/%d/%d",E[i].d.jour,E[i].d.mois,E[i].d.annee);
                 printf("\nAge : %d",E[i].age);
                 }  
               }
            break;
        }
    }while(x!=0);
}