#include <stdio.h>
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
struct Etudiant* saisie(struct Etudiant *tab,int N){
    int i,j;
    for (i = 0; i < N; i++)
    {
        printf("\t---Etudiant %d---\n",i+1);
        printf ("Nom : ");
        scanf ("%s", tab[i].name);
        printf ("Age : ");
        scanf ("%d", &tab[i].age);
        printf ("Niveaux : ");
        scanf ("%s", tab[i].niveaux);
        printf ("Date de naissance : \n");
        printf ("Jour : ");
        scanf ("%d", &tab[i].date.jour);
        printf ("Mois : ");
        scanf ("%d", &tab[i].date.mois);
        printf ("Annee : ");
        scanf ("%d", &tab[i].date.annee);
        printf("Notes : \n");
        for (j =0; j < 4; j++)
        {
          printf ("Note %d : ", j+1, i+1);
          scanf ("%d", &tab[i].note[j]);
        }
    }
    return tab;
}
void affichage(struct Etudiant *tab,int N){
    int i,j;
    printf("----Liste des etudiants----");
    for(i=0;i<N;i++){
       printf("\nEtudiant %d : ",i+1);
       printf("\nNom : %s",(tab+i)->name);
       printf("\nAge : %d",tab[i].age);
       printf("\nNiveaux : %s",(tab+i)->niveaux);
       printf("\nDate de naissance : %d/%d/%d",tab[i].date.jour,tab[i].date.mois,tab[i].date.annee);
       printf("\nNotes : ");
       for(j=0;j<4;j++){
          printf("\nNote %d : %d",j+1,(tab+i)->note[j]);
       }
    }
}