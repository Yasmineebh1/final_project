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


// ajout
void ajout()
{

    if (count_rev < MAX)
    {

        struct Reservation reservation;
        printf("reference %d\n", i + 1);
        // scanf("%d",&reservation.reference);
        printf("Ajouter le Nom: ");
        scanf("%s", &reservation.Nom[i]);
        printf("Ajouter le Prenom: ");
        scanf("%s", &reservation.prenom[i]);
        printf("Ajouter le Telephone (xxxx-xx-xxxx): ");
        scanf("%s", &reservation.telephone);
        printf("Ajouter Age: ");
        scanf("%d", &reservation.age);
        printf("Ajouter le Status (valide, reporte, annule, traite): ");
        scanf("%s", &reservation.status[i]);
        printf("Ajouter la Date de reservation(DD-MM-YYYY): ");
        scanf("%s", &reservation.date);

        printf("reservation ajoutee avec succees\n");
        // ajout la nouvel reserrvation
        
        count_rev++;
    }

    // gonna show when the MAX > 100
    else
        printf("le maximum de reservation a ete atteint.\n");
}

void modifier_supprimer()
{
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

        default:
            break;
        }
    } while (choix != 7);
}