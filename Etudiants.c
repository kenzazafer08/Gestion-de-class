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
        scanf ("%d", tab[i].age);
        printf ("Niveaux : ");
        scanf ("%s", tab[i].niveaux);
        printf ("Date de naissance : \n");
        printf ("Jour : ");
        scanf ("%d", tab[i].date.jour);
        printf ("Mois : ");
        scanf ("%d", tab[i].date.mois);
        printf ("Annee : ");
        scanf ("%d", tab[i].date.annee);
        for (j =0; j < 4; j++)
        {
          printf ("Entrez la note %d de l’étudiant n°%d ", j+1, i+1);
          scanf ("%f", &tab[i].note[j]);
        }
    }
    /*printf("Votre date de naissance : \n");
    printf("day : ");
    scanf("%d",E[i].date_naissance.jour);
    printf("mois : ");
    scanf("%d",E[i].date_naissance.mois);
    printf("annee : ");
    scanf("%d",E[i].date_naissance.annee);
    printf("Vos notes : \n");
    for(j=0;j<3;j++){
        printf("Note %d = ",j+1);
        scanf("%d",E[i].note[j]);
    }
    }
    printf("\n\n ---Bonjour---");
    for(i=0;i<N;i++){
    printf("\n--Etudiant %d---",i+1);
    printf("\nNom : %s",E[i].name);
    printf("\nAge : %d",E[i].age);
    printf("\nNiveau : %s",E[i].niveaux);
    printf("\nDate de naissance : %d/%d/%d",E[i].date_naissance.jour,E.date_naissance.mois,E.date_naissance.annee);
    printf("\nNotes : ");
    for(j=0;j<3;j++){
        printf("\nNote %d = %d ",j+1,E[i].note[j]);
    }
    }*/
}