#include <stdio.h>
    struct Date {
        int jour;
        int mois;
        int annee;
    };
    struct Etudiant
    {
       char name[10];
       int age;
       char prenom[20];
       struct Date d;
    };
    int age(struct Date date){
     int CD=2022;
     int age=date.annee-CD;
     return age;
    }
    
void main(){
    struct Etudiant E;
    printf("Entrer vos informations : ");
    printf("\nNom : ");
    scanf("%s",E.name);
    printf("Prenom : ");
    scanf("%d",E.prenom);
    printf("Date de naissance : \n");
    printf("Jour : ");
    printf("%d",&E.d.jour);
    printf("Mois : ");
    printf("%d",&E.d.mois);
    printf("Annee : ");
    printf("%d",&E.d.annee);
    E.age=age(E.d);
    printf("\n\n ---Bonjour---");
    printf("\nNom : %s",E.name);
    printf("\nPrenom : %d",E.prenom);
    printf("\nDate de naissance : %d/%d/%d",E.d.jour,E.d.mois,E.d.annee);
    printf("\nPrenom : %d",E.prenom);
}