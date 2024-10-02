#include <stdio.h>
#include <string.h>
#define MAX 100

struct Reservation
{
    char Nom[MAX][100];
    char prenom[MAX][100];
    int telephone;
    int age;
    char status;
    int reference;
    char date[MAX];
};

void status()
{
    char status;
    printf("choississez le status: ");
    printf("1.valide");
    printf("2.reporte");
    printf("3.annule");
    printf("4.traite");
    scanf("%s", &status);
    switch (status)
    {
    case 1:
    //strcpy()
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

void ajout()
{
    struct Reservation reservation;
    int n;
    printf("donne moi le nombre de reservation que vous voules ajouter: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("reference %d\n", i + 1);
        scanf("%d",&reservation.reference);
        printf("Ajouter le Nom: \n");
        scanf("%s",&reservation.Nom[i]);
        printf("Ajouter le Prenom: \n");
        scanf("%s",&reservation.prenom[i]);
        printf("Ajouter le Telephone: \n");
        scanf("%d",&reservation.telephone);
        printf("Ajouter Age: \n");
        scanf("%d",&reservation.age);
        printf("Ajouter le Statut: \n");
        status();
        scanf("%d",&reservation.status);
        printf("Ajouter la Date de réservation: \n");
        scanf("%d",&reservation.date[i]);
    }
}

int main()
{
    
    
    int choix;
    do
    {
        printf("les reservations de rendez-vous dentaires\n");
        printf("1. Ajouter une reservation.");
        printf("2. Modifier ou supprimer une reservation.\n");
        printf("3. Afficher les details d une reservation.\n");
        printf("4. Tri des reservations.\n");
        printf("5. Recherche des reservations.\n");
        printf("6. Statistiques.\n");
        printf("7. Quitter.\n");
        printf("choississez votre choix: ");
        scanf("%d", &choix);
        switch (choix)
        {
        case 1:
            ajout();
            break;

        default:
            break;
        }
    } while (choix != 7);
}