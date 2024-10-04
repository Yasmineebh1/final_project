#include <stdio.h>
#include <string.h>
#define MAX 100

// global declaration
char nom[MAX][100];
char prenom[MAX][100];
char telephone[MAX][20];
int age[MAX];
char status[MAX][20];
int reference[MAX];
char date[MAX][20];

int count_rev = 0;
int i;

// ajout des reservations

void fake_info[MAX] = {
    {1, "yasmine", "yas", "076487893", 20, "valide", "12/12/2024"},
    {2, "yas", "ppp", "076487213", 11, "reporte", "12/1/2024"},
    {3, "dod", "dddd", "076487213", 22, "valide", "12/11/2024"},
    {4, "ssjdkd", "jfjkf", "076487213", 18, "traite", "12/4/2025"},
    {5, "dfff", "fdjklf", "076487213", 12, "annule", "12/20/2024"},
    {6, "meryem", "fvkfkf", "076487213", 36, "reporte", "1/10/2024"},
    {7, "leila", "dffdfd", "076487213", 56, "reporte", "29/11/2024"},
    {8, "aya", "ffdg", "076487213", 47, "traite", "1/3/2025"},
    {9, "fatima", "ogfdff", "076487213", 18, "valide", "23/11/2024"},
    {10, "rawaa", "edfdf", "076487213", 33, "annule", "20/6/2025"},
};
void ajout()
{
    int n;
    printf("Donnez-moi le nombre de reservations que vous voulez ajouter: ");
    scanf("%d", &n);

    if (count_rev + n > MAX)
    {
        printf("Le maximum de reservations a atteint.\n");
        return;
    }

    for (int i = 0; i < n; i++)
    {
        printf("reference %d\n", reference[count_rev] = count_rev + 1);
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

        printf("Reservation ajoutee avec succes.\n");
        count_rev++;
    }
}

// function pour modifier
void choix_modification()
{
    int ref;
    int found = 0;
    int i;

    printf("Entrer la reference de la reservation: ");
    scanf("%d", &ref);
    // comparison
    if (ref == reference[i])
    {
        for (int i = 0; i < count_rev; i++)
        {
            found = 1;
            int choix;
            do
            {
                printf("1. Modifier le Nom\n");
                printf("2. Modifier le Prenom\n");
                printf("3. Modifier le Telephone\n");
                printf("4. Modifier l'Age\n");
                printf("5. Modifier le Status\n");
                printf("6. Modifier la Date\n");
                printf("7. Quitter la modification\n");
                printf("Choisissez votre choix: ");
                scanf("%d", &choix);

                switch (choix)
                {
                case 1:
                    printf("donner le nouveau nom : ");
                    scanf("%s", nom[i]);
                    break;
                case 2:
                    printf("donner le nouveau prenom: ");
                    scanf("%s", prenom[i]);
                    break;
                case 3:
                    printf("donner le nouveau telephone: ");
                    scanf("%s", telephone[i]);
                    break;
                case 4:
                    printf("donner le Nouvel age: ");
                    scanf("%d", &age[i]);
                    break;
                case 5:
                    printf("donner le nouveau status: ");
                    scanf("%s", status[i]);
                    break;
                case 6:
                    printf("donner la nouvelle date: ");
                    scanf("%s", date[i]);
                    break;
                case 7:
                    printf("Quitter\n");
                    return;
                    break;
                default:
                    printf("Choix invalide.\n");
                    break;
                }
            } while (choix != 7);
        }
    }
}

// fonction de modification / suppression
void modifier_supprimer()
{
    int ref;
    int choix;

    printf("Modifier ou supprimer une reservation existante en fonction de la reference unique:\n");
    printf("1. Modifier la reservation\n");
    printf("2. Supprimer la reservation\n");
    printf("Choisissez votre choix: ");
    scanf("%d", &choix);

    if (ref < 1 || ref > count_rev)
    {
        printf("ce reference n ya pas dans la liste\n");
        return;
    }
    int found = 0;
    switch (choix)
    {
    case 1:

        choix_modification();
        break;

    case 2:
        printf("Entrer la reference de la reservation: ");
        scanf("%d", &ref);
        for (int i = ref; i < count_rev; i++)
        {
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
        printf("\n");
        break;
    }
}

// fonction d'affichage
void afficher()
{
    
    if (count_rev == 0)
    {
        printf("nya pas de reservation.\n");
        return;
    }

    for (int i = 0; i < count_rev; i++)
    {
        printf("Reference: %d\n", reference[i]);
        printf("Nom: %s\n", nom[i]);
        printf("Prenom: %s\n", prenom[i]);
        printf("Telephone: %s\n", telephone[i]);
        printf("Age: %d\n", age[i]);
        printf("Status: %s\n", status[i]);
        printf("Date: %s\n", date[i]);
        printf("\n");
    }
    count_rev++;
}

// Recherche d'une réservation par référence unique
void recherche_ref()
{
    int ref;
    printf("entrer le reference de patients que vous voudrai recherche: ");
    scanf("%d", &ref);

    if (ref < 1 || ref > count_rev)
    {
        printf("ce reference n ya pas dans la liste\n");
        return;
    }

    for (int i = 0; i < count_rev; i++)
    {
        if (ref == reference[i])
        {
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
}
// Recherche d'une réservation par nom
void recherche_nom()
{
    char Nom[MAX];
    printf("entrer le nom de patients que vous voudrai recherche: ");
    scanf("%s", &Nom);

    int found = 0;
    for (int i = 0; i < count_rev; i++)
    {
        if (strcmp(nom[i], Nom))
        {
            printf("Reference: %d\n", reference[i]);
            printf("Nom: %s\n", nom[i]);
            printf("Prenom: %s\n", prenom[i]);
            printf("Telephone: %s\n", telephone[i]);
            printf("Age: %d\n", age[i]);
            printf("Status: %s\n", status[i]);
            printf("Date: %s\n", date[i]);
            printf("\n");
            found = 1;
        }
        return;
    }
    if (!found)
    {
        printf("ce nom n ya pas dans la liste\n");
        return;
    }
}
// recherche par date
void recherche_date()
{
    char Date[MAX];
    printf("entrer la date de patients que vous voudrai recherche: ");
    scanf("%s", &date);

    int found = 0;
    for (int i = 0; i < count_rev; i++)
    {
        if (strcmp(date[i], Date))
        {
            printf("Reference: %d\n", reference[i]);
            printf("Nom: %s\n", nom[i]);
            printf("Prenom: %s\n", prenom[i]);
            printf("Telephone: %s\n", telephone[i]);
            printf("Age: %d\n", age[i]);
            printf("Status: %s\n", status[i]);
            printf("Date: %s\n", date[i]);
            printf("\n");
            found = 1;
        }
    }
    if (!found)
    {
        printf("cette date n ya pas dans la liste\n");
        return;
    }
}
// rechercher
void rechercher()
{
    int choix;
    printf("choississez votre recherche:\n");
    printf("1. Recherche d'une reservation par reference unique.\n");
    printf("2.Recherche d'une reservation par nom.\n");
    printf("3.Recherche d'une reservation par date.\n");
    printf("Choisissez votre choix: ");
    scanf("%d", &choix);

    switch (choix)
    {
    case 1:
        recherche_ref();
        break;
    case 2:
        recherche_nom();
        break;
    case 3:
        recherche_date();
    default:
        break;
    }
    recherche_nom();
    recherche_ref();
}

// tri
void tri()
{
    int choix;
    printf("Tri des reservations\n");
    printf("1.Tri des reservations par Nom\n");
    printf("2.Tri des reservations par date\n");
    printf("Tri des réservations par statut\n");
    printf("entrer votre choix: ");
    scanf("%d", &choix);
    switch (choix)
    {
    case 1:
        
    char valtemp[MAX];
    // swap nom

    for (i = 0; i < count_rev - 1; i++)
    {
        for (int j = 0; j < count_rev -i - 1; j++)
        {
            // compare
            if(strcasecmp(nom[j], nom[j+1]) > 0) 
            {
                // swap if the nom[i] > nom[j]

                valtemp = nom[j];
                nom[j] = nom[j+1][];
                nom[j+1] = valtemp;
            }
        }
    }
        break;

    default:
        break;
    }
}

//statistique
//Générer des statistiques pour connaître le nombre total de réservations par statut 
void statistique(){
    int choix;
    printf("Statistiques: ");
    printf("1.Calculer la moyenne d age des patients ayant reserve");
    printf("2.Afficher le nombre de patients par tranche d age");
    printf("3.statistiques pour connaitre le nombre total de reservations par statut");
    printf("entrer votre choix:");
    scanf("%d",&choix);

    switch (choix)
    {
    case 1:
        int s = 0;
        if (count_rev == 0) {
        printf("ya pas cette reservation\n");
        for (INT i = 0; i < reference; i++)
        {
            s = s + age;

        }
        int moyenne = s / moyenne;
        printf("la moyenne age des patients est: %d",moyenne);        
    }
        break;
    
    default:
        break;
    }
}
/*
void statistiques() {
    

    int totalAge = 0;
    int tranche0_18 = 0, tranche19_35 = 0, tranche36Plus = 0;
    int valide = 0, reporte = 0, annule = 0, traite = 0;

    // Parcourir toutes les réservations pour calculer les statistiques
    for (int i = 0; i < reservationCount; i++) {
        totalAge += reservations[i].age;

        // Compter les patients par tranche d'âge
        if (reservations[i].age <= 18) {
            tranche0_18++;
        } else if (reservations[i].age <= 35) {
            tranche19_35++;
        } else {
            tranche36Plus++;
        }

        // Compter les réservations par statut
        if (strcmp(reservations[i].status, "valide") == 0) {
            valide++;
        } else if (strcmp(reservations[i].status, "reporte") == 0) {
            reporte++;
        } else if (strcmp(reservations[i].status, "annule") == 0) {
            annule++;
        } else if (strcmp(reservations[i].status, "traite") == 0) {
            traite++;
        }
    }

    // Calcul de la moyenne d'âge
    float moyenneAge = (float)totalAge / reservationCount;

    // Affichage des statistiques
    printf("\n--- Statistiques des Réservations ---\n");
    printf("1. Moyenne d'âge des patients : %.2f ans\n", moyenneAge);
    printf("2. Nombre de patients par tranche d'âge :\n");
    printf("   - 0-18 ans : %d\n", tranche0_18);
    printf("   - 19-35 ans : %d\n", tranche19_35);
    printf("   - 36+ ans : %d\n", tranche36Plus);

    printf("3. Nombre total de réservations par statut :\n");
    printf("   - Valide : %d\n", valide);
    printf("   - Reporté : %d\n", reporte);
    printf("   - Annulé : %d\n", annule);
    printf("   - Traité : %d\n", traite);
} */
int main()
{
    int choix;
    do
    {
        printf("1. Ajouter une reservation.\n");
        printf("2. Modifier ou supprimer une reservation.\n");
        printf("3. Afficher les details d une reservation.\n");
        printf("4. Tri des reservations.\n");
        printf("5. Recherche des reservations.\n");
        printf("6. Statistiques.\n");
        printf("7. Quitter.\n");
        printf("taper votre choix: ");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
            ajout();
            break;
        case 2:
            modifier_supprimer();
            break;
        case 3:
            afficher();
            break;
        case 5:
            rechercher();
            break;
        case 4:
            tri();
            break;
        case 7:
            printf("quitter!\n");
            return 0;
            break;
        default:
            printf(" invalide.\n");
            break;
        }
    } while (choix != 7);

    return 0;
}
