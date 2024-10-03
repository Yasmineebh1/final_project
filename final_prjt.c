#include <stdio.h>
#include <string.h>

#define MAX 100

// gloval declaration
char nom[MAX][100];
char prenom[MAX][100];
char telephone[MAX][20];
int age[MAX];
char status[MAX][20];
int reference[MAX];
char date[MAX][20];
int count_rev = 0;

// ajout des reservations
void ajout() {
    int n;
    printf("Donnez-moi le nombre de reservations que vous voulez ajouter: ");
    scanf("%d", &n);

    if (count_rev + n > MAX) {
        printf("Le maximum de reservations a atteint.\n");
        return;
    }

    for (int i = 0; i < n; i++) {
         printf("reference %d\n", i + 1);
            // scanf("%d",&reservation.reference); 
        printf("Ajouter le Nom: ");
        scanf("%s", nom[count_rev]);
        printf("Ajouter le Prenom: ");
        scanf("%s", prenom[count_rev]);
        printf("Ajouter le Telephone (xxxx-xx-xxxx): ");
        scanf("%s", telephone[count_rev]);
        printf("Ajouter Age: ");
        scanf("%d", &age[count_rev]);
        printf("Ajouter le Statut (valide, reporte, annule, traite): ");
        scanf("%s", status[count_rev]);
        printf("Ajouter la Date de reservation (DD-MM-YYYY): ");
        scanf("%s", date[count_rev]);

        count_rev++;
        printf("Reservation ajoutee avec succes.\n");
    }
}

//function pour modifier
void choix_modification(int a){

    int choix;
    do {
        printf("1. Modifier le Nom\n");
        printf("2. Modifier le Prenom\n");
        printf("3. Modifier le Telephone\n");
        printf("4. Modifier l'Age\n");
        printf("5. Modifier le Status\n");
        printf("6. Modifier la Date\n");
        printf("7. Quitter la modification\n");
        printf("Choisissez votre choix: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf("donner le nouveau nom : ");
                scanf("%s", nom[a]);
                break;
            case 2:
                printf("donner le nouveau prenom: ");
                scanf("%s", prenom[a]);
                break;
            case 3:
                printf("donner le nouveau telephone: ");
                scanf("%s", telephone[a]);
                break;
            case 4:
                printf("donner le Nouvel age: ");
                scanf("%d", &age[a]);
                break;
            case 5:
                printf("donner le nouveau status: ");
                scanf("%s", status[a]);
                break;
            case 6:
                printf("donner la nouvelle date: ");
                scanf("%s", date[a]);
                break;
            case 7:
                printf("Quitter\n");
                return ;
                break;
            default:
                printf("Choix invalide.\n");
                break;
        }
    } while (choix != 7);
}

// fonction de modification / suppression
void modifier_supprimer() {
    int ref;
    int choix;

    printf("Modifier ou supprimer une reservation existante en fonction de la reference unique:\n");
    printf("1. Modifier la reservation\n");
    printf("2. Supprimer la reservation\n");
    printf("Choisissez votre choix: ");
    scanf("%d", &choix);

    printf("Entrer la reference de la reservation: ");
    scanf("%d", &ref);

    if (ref < 1 || ref > count_rev) {
        printf("ce reference n ya pas dans la liste\n");
        return;
    }

        switch (choix) {
        case 1:
        if(ref == reference){
            choix_modification(ref);
            break;}
        case 2:
            for (int i = ref; i < count_rev; i++) {
                strcpy(nom[i], nom[i + 1]);
                strcpy(prenom[i], prenom[i + 1]);
                strcpy(telephone[i], telephone[i + 1]);
                age[i] = age[i + 1];
                strcpy(status[i], status[i + 1]);
                strcpy(date[i], date[i + 1]);
                reference[i] = reference[i + 1];
            }
            count_rev--;
            printf("Reservation supprimee .\n");
            break;
        default:
            printf("Choix .\n");
            break;
    }
}

// Function to display reservations
void afficher() {
    if (count_rev == 0) {
        printf("nya pas de reservation.\n");
        return;
    }

    for (int i = 1; i < count_rev; i++) {
        printf("Reference: %d\n", reference[i]);
        printf("Nom: %s\n", nom[i]);
        printf("Prenom: %s\n", prenom[i]);
        printf("Telephone: %s\n", telephone[i]);
        printf("Age: %d\n", age[i]);
        printf("Status: %s\n", status[i]);
        printf("Date: %s\n", date[i]);
        printf("\n");
    }
}

int main() {
    int choix;
    do {
        printf("1. Ajouter une reservation.\n");
        printf("2. Modifier ou supprimer une reservation.\n");
        printf("3. Afficher les details d une reservation.\n");
        printf("4. Tri des reservations.\n");
        printf("5. Recherche des reservations.\n");
        printf("6. Statistiques.\n");
        printf("7. Quitter.\n");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajout();
                break;
            case 2:
                modifier_supprimer();
                break;
            case 3:
                afficher();
                break;
            case 7:
               // printf("quitter!\n");
                return;
                break;
            default:
                printf(" invalide.\n");
                break;
        }
    } while (choix != 7);

    return 0;
}
