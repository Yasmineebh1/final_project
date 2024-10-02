#include<stdio.h>
#include<string.h>
#define MAX 100

struct reservation{
    char Nom[MAX][100];
    char prenom[MAX][100];
    int telephone;
    int age;
    char status;
    int reference;
    char date[MAX];
};

void status(){
    char status;
    printf("1.valide");
    printf("2.reporte");
    printf("3.annule");
    printf("4.traite");
    scanf("%s",&status);
    switch (status)
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    default:
        break;
    }
}

void ajout(){
    
}

int main(){
    int choix;
    do{
    printf("les reservations de rendez-vous dentaires");
    printf("1. Ajouter une réservation :");
    printf("2. Modifier ou supprimer une réservation :");
    printf("3. Afficher les détails d'une réservation :");
    printf("4. Tri des réservations :");
    printf("5. Recherche des réservations :");
    printf("6. Statistiques :");
    printf("7. Quitter :");
    scanf("%d",&choix);
    switch (choix)
    {
    case 1:
        /* code */
        break;
    
    default:
        break;
    }
    }
    while(choix != 7);
}