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
     int age=CD-date.annee;
     return age;
    }
    
void main(){
    struct Etudiant E;
    printf("Entrer vos informations : ");
    printf("\nNom : ");
    scanf("%s",E.name);
    printf("Prenom : ");
    scanf("%s",E.prenom);
    printf("Date de naissance : \n");
    printf("Jour : ");
    scanf("%d",&E.d.jour);
    printf("Mois : ");
    scanf("%d",&E.d.mois);
    printf("Annee : ");
    scanf("%d",&E.d.annee);
    E.age=age(E.d);
    printf("\n---Bonjour---");
    printf("\nNom : %s",E.name);
    printf("\nPrenom : %s",E.prenom);
    printf("\nDate de naissance : %d/%d/%d",E.d.jour,E.d.mois,E.d.annee);
    printf("\nAge : %d",E.age);
}