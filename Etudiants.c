#include <stdio.h>
#define D 50

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
        int note[3];
    };
    struct Etudiant tab [D];
    printf("Combien d'etudiant : ");
    scanf("%d",&N);
    for (i = 0; i < N; i++)
    {
        printf("\n---Etudiant %d---\n",i+1);
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
        for (j =0; j < 4; j++)
        {
          printf ("Note %d : ", j+1, i+1);
          scanf ("%f", &tab[i].note[j]);
        }
    }