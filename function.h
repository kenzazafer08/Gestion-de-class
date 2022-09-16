#include <stdio.h>
struct Date {
        int jour;
        int mois;
        int annee;
    };
    struct Etudiant {
        char name [30] ;
        int prenom[30];
        int age;
        struct Date date; 
    };
int age(struct Date date){
     int CD=2022;
     int age=date.annee-CD;
     return age;
}
struct Etudiant* saisie(struct Etudiant *tab,int N){
    int i,j,somme[N];
    for (i = 0; i < N; i++)
    {
        somme[i]=0;
        printf("\n\t---Etudiant %d---\n",i+1);
        printf ("Nom : ");
        scanf ("%s", tab[i].name);
        printf ("Prenom : ");
        scanf ("%s", tab[i].prenom);
        printf ("Date de naissance : \n");
        printf ("Jour : ");
        scanf ("%d", &tab[i].date.jour);
        printf ("Mois : ");
        scanf ("%d", &tab[i].date.mois);
        printf ("Annee : ");
        scanf ("%d", &tab[i].date.annee);    
        tab[i].age = age(tab[i].date);
        }
    return tab;
}
void affichage(struct Etudiant *tab){
    int j;
       printf("\nNom : %s",(tab)->name);
       printf("\nPrenom : %s",(tab)->prenom);
       printf("\nDate de naissance : %d/%d/%d",tab->date.jour,tab->date.mois,tab->date.annee);
       printf("\nAge : %d",tab->date.jour,tab->date.mois,tab->date.annee);
}
