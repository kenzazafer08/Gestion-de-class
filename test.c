#include <stdio.h>
void main(){
    struct Etudiant
    {
       char name[10];
       int age;
       char niveaux[20];
    };
    struct Etudiant E;
    printf("Entrer vos informations : ");
    printf("\nVotre nom : ");
    scanf("%s",&E.name);
    printf("Votre age : ");
    scanf("%d",&E.age);
    printf("Votre niveau : ");
    scanf("%s",&E.niveaux);
    printf("\n\n ---Bonjour---");
    printf("\nNom : %s",E.name);
    printf("\nAge : %d",E.age);
    printf("\nNiveau : %s",E.niveaux);
}