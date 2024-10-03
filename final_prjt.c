#include <stdio.h>
#include <string.h>
#define MAX 100

struct Reservation
{
    char Nom[MAX][100];
    char prenom[MAX][100];
    char telephone[20];
    int age;
    char status[MAX][20];
    int reference;
    char date[20];
};

// reservation total pour le compter

// declaration globale
int count_rev = 0;
int i = 0;
int n;
struct Reservation reservation;
// ajout
void ajout()
{

    if (count_rev < MAX)
    {
        printf("donne moi le nombre de reservation que vous voules ajouter: ");
    scanf("%d",&n);

    for (int i = count_rev; i < n; i++)
        {

            //reservation.reference[i] = n + 1;
            printf("reference %d\n", i + 1);
           // scanf("%d",&reservation.reference);
            printf("Ajouter le Nom: ");
            scanf("%s", reservation.Nom[i]);
            printf("Ajouter le Prenom: ");
            scanf("%s", reservation.prenom[i]);
            printf("Ajouter le Telephone (xxxx-xx-xxxx): ");
            scanf("%s", reservation.telephone);
            printf("Ajouter Age: ");
            scanf("%d", &reservation.age);
            printf("Ajouter le Statut (valide, reporte, annule, traite): ");
            scanf("%s", reservation.status[i]);
            //status(reservation.status);
            printf("Ajouter la Date de reservation(DD-MM-YYYY): \n");
            scanf("%s", reservation.date);

            printf("reservation ajoutee avec succees\n");
            // ajout la nouvel reserrvation
            reservation.reference = count_rev;

        }
         count_rev+=n;
    
    }

    // gonna show when the MAX > 100
    else
        printf("le maximum de reservation a ete atteint.\n");
}

/*
void modifier_supprimer()
{
    int ref;
    int choix;
    int found = 0;
    struct Reservation reservation;
    printf("Modifier ou supprimer une réservation existante en fonction de la référence unique.");
    printf("1.Modifier la reservation");
    printf("2.supprimer la reservation");
    switch (choix)
    {
        // modification
    case 1:
        printf("entrer le reference de patient que voulez vous le modifier: ");
        scanf("%d", &ref);

        for (int i = 0; i < count_rev; i++)
        {
            if (strcmp(ref,reservation.reference))
            {
                found = 1;
                
            }
            
            count_rev++;
        }
        break;
        // suppression
    case 2:
        printf("entrer le reference de patient que voulez vous le modifier: ");
        scanf("%d", &ref);

        break;
    default:
        break;
    }
}*/

void afficher()
{
    printf("");
}
// fake ddata
//  struct ten_fake_data(){
//     // char info1[10]={1,"yas","douae","0387-889-94",22,"valide","02-10-2024"},
//      //char prenom[10] = {"yao","aso","dodo","fff","ghiz","aml","mery","lili","chai","choo"};
//     // char sta
//  }
//  void initialissation_daa(){
//      for(int i = 0;i < i;i++){
//          Reservation[i] = ten_fake_data[i];
//      }
//  }
int main()
{

    int choix;
    do
    {
        printf("les reservations de rendez-vous dentaires\n");
        printf("1. Ajouter une reservation.\n");
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
        // case 2:
        //     modifier_supprimer();
        //     break;
        // default:
            break;
        }
    } while (choix != 7);
}