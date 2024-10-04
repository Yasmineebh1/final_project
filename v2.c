#include <stdio.h>
#include <string.h>
#define MAX 100

// global declaration
char nom[MAX][100];
char prenom[MAX][100];
char telephone[MAX][20];
int age[MAX];
char status[MAX][20];
int reference[MAX]; //{1,2,3,4,5,6,7};
char date[MAX][20];

int count_rev = 0;

// Initialize the reservation list
int liste_reservation() {
    reference[0] = 1; // Référence 1
    strcpy(nom[0], "yasmine");
    strcpy(prenom[0], "yas");
    strcpy(telephone[0], "0622020304");
    age[0] = 22;
    strcpy(status[0], "valide");
    strcpy(date[0], "2024-10-01");

    reference[1] = 2; // Référence 2
    strcpy(nom[1], "meryem");
    strcpy(prenom[1], "mery");
    strcpy(telephone[1], "060120304");
    age[1] = 20;
    strcpy(status[1], "reporte");
    strcpy(date[1], "2024-10-01");

    reference[2] = 3; // Référence 3
    strcpy(nom[2], "dodo");
    strcpy(prenom[2], "REG");
    strcpy(telephone[2], "0601020304");
    age[2] = 17;
    strcpy(status[2], "annule");
    strcpy(date[2], "2024-10-01");

    reference[3] = 4; // Référence 4
    strcpy(nom[3], "Naima");
    strcpy(prenom[3], "nnjd");
    strcpy(telephone[3], "0601020304");
    age[3] = 24;
    strcpy(status[3], "traite");
    strcpy(date[3], "2024-10-01");

    reference[4] = 5; // Référence 5
    strcpy(nom[4], "MALAK");
    strcpy(prenom[4], "MALAK");
    strcpy(telephone[4], "0605060708");
    age[4] = 19;
    strcpy(status[4], "valide");
    strcpy(date[4], "2024-10-02");

    reference[5] = 6; // Référence 6
    strcpy(nom[5], "RAJAA");
    strcpy(prenom[5], "BEL");
    strcpy(telephone[5], "0601020304");
    age[5] = 30;
    strcpy(status[5], "reporte");
    strcpy(date[5], "2024-10-01");

    reference[6] = 7; // Référence 7
    strcpy(nom[6], "ILYASS");
    strcpy(prenom[6], "MO");
    strcpy(telephone[6], "0601020304");
    age[6] = 45;
    strcpy(status[6], "annule");
    strcpy(date[6], "2024-10-01");

    reference[7] = 8; // Référence 8
    strcpy(nom[7], "Asma");
    strcpy(prenom[7], "ANU");
    strcpy(telephone[7], "0601020304");
    age[7] = 27;
    strcpy(status[7], "traite");
    strcpy(date[7], "2024-10-01");

    reference[8] = 9; // Référence 9
    strcpy(nom[8], "leila");
    strcpy(prenom[8], "LEM");
    strcpy(telephone[8], "0601020304");
    age[8] = 3;
    strcpy(status[8], "valide");
    strcpy(date[8], "2024-10-01");

    reference[9] = 10; // Référence 10
    strcpy(nom[9], "yas");
    strcpy(prenom[9], "jdsjds");
    strcpy(telephone[9], "0601020304");
    age[9] = 6;
    strcpy(status[9], "annule");
    strcpy(date[9], "2024-10-01");

    count_rev = 10;
    return count_rev;
}

void Afficher_patients() {
    printf("Listes des patients :\n");
    for (int i = 0; i < count_rev; i++) {
        printf("Référence : %d, Nom : %s, Prénom : %s, Téléphone : %s, Âge : %d, Statut : %s, Date : %s\n",
               reference[i], nom[i], prenom[i], telephone[i], age[i], status[i], date[i]);
    }
}

void ajout() {
    int n;
    printf("Donnez-moi le nombre de réservations que vous voulez ajouter: ");
    scanf("%d", &n);

    if (count_rev + n > MAX) {
        printf("Le maximum de réservations a été atteint.\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        reference[count_rev] = count_rev + 1; // Référence automatique
        printf("Ajouter le Nom: ");
        scanf("%s", nom[count_rev]);
        printf("Ajouter le Prénom: ");
        scanf("%s", prenom[count_rev]);
        printf("Ajouter le Téléphone (xxxx-xx-xxxx): ");
        scanf("%s", telephone[count_rev]);
        printf("Ajouter l'Âge: ");
        scanf("%d", &age[count_rev]);
        printf("Ajouter le Statut (valide, reporté, annulé, traité): ");
        scanf("%s", status[count_rev]);
        printf("Ajouter la Date de réservation (DD-MM-YYYY): ");
        scanf("%s", date[count_rev]);

        printf("Réservation ajoutée avec succès.\n");
        count_rev++;
    }
}

// Function to modify
void choix_modification() {
    int ref;
    int found = 0;

    printf("Entrer la référence de la réservation: ");
    scanf("%d", &ref);
    if (ref < 1 || ref > count_rev) {
        printf("Cette référence n'est pas dans la liste.\n");
        return;
    }

    for (int i = 0; i < count_rev; i++) {
        if (reference[i] == ref) {
            found = 1;
            int choix;
            do {
                printf("1. Modifier le Nom\n");
                printf("2. Modifier le Prénom\n");
                printf("3. Modifier le Téléphone\n");
                printf("4. Modifier l'Âge\n");
                printf("5. Modifier le Statut\n");
                printf("6. Modifier la Date\n");
                printf("7. Quitter la modification\n");
                printf("Choisissez votre choix: ");
                scanf("%d", &choix);

                switch (choix) {
                case 1:
                    printf("Donner le nouveau nom : ");
                    scanf("%s", nom[i]);
                    break;
                case 2:
                    printf("Donner le nouveau prénom: ");
                    scanf("%s", prenom[i]);
                    break;
                case 3:
                    printf("Donner le nouveau téléphone: ");
                    scanf("%s", telephone[i]);
                    break;
                case 4:
                    printf("Donner le nouvel âge: ");
                    scanf("%d", &age[i]);
                    break;
                case 5:
                    printf("Donner le nouveau statut: ");
                    scanf("%s", status[i]);
                    break;
                case 6:
                    printf("Donner la nouvelle date: ");
                    scanf("%s", date[i]);
                    break;
                case 7:
                    printf("Quitter\n");
                    return;
                default:
                    printf("Choix invalide.\n");
                    break;
                }
            } while (choix != 7);
        }
    }
    if (!found) {
        printf("Référence non trouvée.\n");
    }
}

// Function to modify or delete
void modifier_supprimer() {
    int ref;
    int choix;

    printf("Modifier ou supprimer une réservation existante en fonction de la référence unique:\n");
    printf("1. Modifier la réservation\n");
    printf("2. Supprimer la réservation\n");
    printf("Choisissez votre choix: ");
    scanf("%d", &choix);

    printf("Entrer la référence de la réservation: ");
    scanf("%d", &ref);
    if (ref < 1 || ref > count_rev) {
        printf("Cette référence n'est pas dans la liste.\n");
        return;
    }

    switch (choix) {
    case 1:
        choix_modification();
        break;

    case 2:
        for (int i = ref - 1; i < count_rev - 1; i++) {
            strcpy(nom[i], nom[i + 1]);
            strcpy(prenom[i], prenom[i + 1]);
            strcpy(telephone[i], telephone[i + 1]);
            age[i] = age[i + 1];
            strcpy(status[i], status[i + 1]);
            strcpy(date[i], date[i + 1]);
            reference[i] = reference[i + 1];
        }
        count_rev--;
        printf("Réservation supprimée.\n");
        break;

    default:
        printf("Choix invalide.\n");
        break;
    }
}

// fonction d'affichage
void afficher() {
    if (count_rev == 0) {
        printf("Il n'y a pas de réservations.\n");
        return;
    }

    for (int i = 0; i < count_rev; i++) {
        printf("Référence: %d\n", reference[i]);
        printf("Nom: %s\n", nom[i]);
        printf("Prénom: %s\n", prenom[i]);
        printf("Téléphone: %s\n", telephone[i]);
        printf("Âge: %d\n", age[i]);
        printf("Statut: %s\n", status[i]);
        printf("Date: %s\n", date[i]);
        printf("\n");
    }
}

// Search for a reservation by unique reference
void recherche_ref() {
    int ref;
    printf("Entrer la référence du patient que vous voulez rechercher: ");
    scanf("%d", &ref);

    if (ref < 1 || ref > count_rev) {
        printf("Cette référence n'est pas dans la liste.\n");
        return;
    }

    for (int i = 0; i < count_rev; i++) {
        if (ref == reference[i]) {
            printf("Référence: %d\n", reference[i]);
            printf("Nom: %s\n", nom[i]);
            printf("Prénom: %s\n", prenom[i]);
            printf("Téléphone: %s\n", telephone[i]);
            printf("Âge: %d\n", age[i]);
            printf("Statut: %s\n", status[i]);
            printf("Date: %s\n", date[i]);
            printf("\n");
            return; // Exit after finding
        }
    }
}

// Search for a reservation by name
void recherche_nom() {
    char Nom[MAX];
    printf("Entrer le nom du patient que vous voulez rechercher: ");
    scanf("%s", Nom); // No need for '&'

    int found = 0;
    for (int i = 0; i < count_rev; i++) {
        if (strcmp(nom[i], Nom) == 0) { // Check for equality
            printf("Référence: %d\n", reference[i]);
            printf("Nom: %s\n", nom[i]);
            printf("Prénom: %s\n", prenom[i]);
            printf("Téléphone: %s\n", telephone[i]);
            printf("Âge: %d\n", age[i]);
            printf("Statut: %s\n", status[i]);
            printf("Date: %s\n", date[i]);
            printf("\n");
            found = 1;
        }
    }
    if (!found) {
        printf("Ce nom n'est pas dans la liste.\n");
    }
}

// Search for a reservation by date
void recherche_date() {
    char Date[MAX];
    printf("Entrer la date du patient que vous voulez rechercher: ");
    scanf("%s", Date); // Corrected variable name

    int found = 0;
    for (int i = 0; i < count_rev; i++) {
        if (strcmp(date[i], Date) == 0) { // Check for equality
            printf("Référence: %d\n", reference[i]);
            printf("Nom: %s\n", nom[i]);
            printf("Prénom: %s\n", prenom[i]);
            printf("Téléphone: %s\n", telephone[i]);
            printf("Âge: %d\n", age[i]);
            printf("Statut: %s\n", status[i]);
            printf("Date: %s\n", date[i]);
            printf("\n");
            found = 1;
        }
    }
    if (!found) {
        printf("Cette date n'est pas dans la liste.\n");
    }
}

// Search function
void rechercher() {
    int choix;
    printf("Choisissez votre recherche:\n");
    printf("1. Recherche d'une réservation par référence unique.\n");
    printf("2. Recherche d'une réservation par nom.\n");
    printf("3. Recherche d'une réservation par date.\n");
    printf("Choisissez votre choix: ");
    scanf("%d", &choix);

    switch (choix) {
    case 1:
        recherche_ref();
        break;
    case 2:
        recherche_nom();
        break;
    case 3:
        recherche_date();
        break;
    default:
        printf("Choix invalide.\n");
        break;
    }
}

int main() {
    liste_reservation();
    int choix;
    do {
        printf("1. Ajouter une réservation.\n");
        printf("2. Modifier ou supprimer une réservation.\n");
        printf("3. Afficher les détails d'une réservation.\n");
        printf("4. Recherche des réservations.\n");
        printf("5. Quitter.\n");
        printf("Tapez votre choix: ");
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
        case 4:
            rechercher();
            break;
        case 5:
            printf("Quitter!\n");
            return 0;
        default:
            printf("Choix invalide.\n");
            break;
        }
    } while (choix != 5);

    return 0;
}
