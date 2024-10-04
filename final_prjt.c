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

int liste_reservation()
{
    reference[0] = 1; // Référence 1
    strcpy(nom[0], "yasmine");
    strcpy(prenom[0], "yas");
    strcpy(telephone[0], "0622020304");
    age[0] = 22;
    strcpy(status[0], "valide");
    strcpy(date[0], "2023-12-01");

    reference[1] = 2; // Référence 2
    strcpy(nom[1], "meryem");
    strcpy(prenom[1], "mery");
    strcpy(telephone[1], "060120304");
    age[1] = 20;
    strcpy(status[1], "reporte");
    strcpy(date[1], "2024-01-01");

    reference[2] = 3; // Référence 3
    strcpy(nom[2], "dodo");
    strcpy(prenom[2], "REG");
    strcpy(telephone[2], "0601020304");
    age[2] = 17;
    strcpy(status[2], "annule");
    strcpy(date[2], "2022-06-10");

    reference[3] = 4; // Référence 4
    strcpy(nom[3], "Naima");
    strcpy(prenom[3], "nnjd");
    strcpy(telephone[3], "0601020304");
    age[3] = 24;
    strcpy(status[3], "traite");
    strcpy(date[3], "2019-07-05");

    reference[4] = 5; // Référence 5
    strcpy(nom[4], "MALAK");
    strcpy(prenom[4], "MALAK");
    strcpy(telephone[4], "0605060708");
    age[4] = 19;
    strcpy(status[4], "valide");
    strcpy(date[4], "2023-12-02");

    reference[5] = 6; // Référence 6
    strcpy(nom[5], "RAJAA");
    strcpy(prenom[5], "BEL");
    strcpy(telephone[5], "0601020304");
    age[5] = 30;
    strcpy(status[5], "reporte");
    strcpy(date[5], "2020-12-09");

    reference[6] = 7; // Référence 7
    strcpy(nom[6], "ILYASS");
    strcpy(prenom[6], "MO");
    strcpy(telephone[6], "0601020304");
    age[6] = 45;
    strcpy(status[6], "annule");
    strcpy(date[6], "2024-05-06");

    reference[7] = 8; // Référence 8
    strcpy(nom[7], "Asma");
    strcpy(prenom[7], "ANU");
    strcpy(telephone[7], "0601020304");
    age[7] = 27;
    strcpy(status[7], "traite");
    strcpy(date[7], "2018-10-05");

    reference[8] = 9; // Référence 9
    strcpy(nom[8], "leila");
    strcpy(prenom[8], "LEM");
    strcpy(telephone[8], "0601020304");
    age[8] = 3;
    strcpy(status[8], "valide");
    strcpy(date[8], "2016-10-06");

    reference[9] = 10; // Référence 10
    strcpy(nom[9], "yas");
    strcpy(prenom[9], "jdsjds");
    strcpy(telephone[9], "0601020304");
    age[9] = 6;
    strcpy(status[9], "annule");
    strcpy(date[9], "2014-11-07");

    count_rev = 10;
    return count_rev;
}

void Afficher_patients()
{
    printf("Listes des patients :\n");
    for (int i = 0; i < count_rev; i++)
    {
        printf("Référence : %d, Nom : %s, Prénom : %s, Téléphone : %s, Âge : %d, Statut : %s, Date : %s\n",
               reference[i], nom[i], prenom[i], telephone[i], age[i], status[i], date[i]);
    }
}

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
    if (ref < 1 || ref > count_rev)
    {
        printf("Cette référence n'est pas dans la liste.\n");
        return;
    }
    // comparison
    for (int i = 0; i < count_rev; i++)
    {
        if (reference[i] == ref)
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

    printf("Modifier ou supprimer une réservation existante en fonction de la référence unique:\n");
    printf("1. Modifier la réservation\n");
    printf("2. Supprimer la réservation\n");
    printf("Choisissez votre choix: ");
    scanf("%d", &choix);

    printf("Entrer la référence de la reservation que vous voulez supprimer: ");
    scanf("%d", &ref);
    if (ref < 1 || ref > count_rev)
    {
        printf("Cette référence n'est pas dans la liste.\n");
        return;
    }

    switch (choix)
    {
    case 1:
        choix_modification();
        break;

    case 2:
        for (int i = ref - 1; i < count_rev - 1; i++)
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
        printf("Réservation supprimée.\n");
        break;

    default:
        printf("Choix invalide.\n");
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
        printf("\n---------------------------------\n");
        printf("Reference: %d\n", reference[i]);
        printf("Nom: %s\n", nom[i]);
        printf("Prenom: %s\n", prenom[i]);
        printf("Telephone: %s\n", telephone[i]);
        printf("Age: %d\n", age[i]);
        printf("Status: %s\n", status[i]);
        printf("Date: %s\n", date[i]);
        printf("\n---------------------------------\n");
    }
    // count_rev++;
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
        if (ref == reference[i]) // check if they are equal
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
        return;
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
        if (strcmp(nom[i], Nom) == 0) // check if they are equal
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
        if (strcmp(Date, date[i])) // check if they are equal
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
    printf("quitter: ");
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
    case 4:
        printf("quitter");
        return;
    default:
        break;
    }
}

// global declaration
char temp[100];
// tri
void tri()
{
    int choix;
    printf("Tri des reservations\n");
    printf("1.Tri des reservations par Nom\n");
    // printf("2.Tri des reservations par date\n");
    printf("2.Tri des reservations par statut\n");
    printf("entrer votre choix: ");
    scanf("%d", &choix);
    switch (choix)
    {
    case 1:
        // swap nom
        for (int i = 0; i < count_rev - 1; i++)
        {
            for (int j = 0; j < count_rev - i - 1; j++)
            {
                // compare :
                if (strcmp(nom[j], nom[j + 1]) > 0)
                {
                    // swap if the nom[i] > nom[j]
                    strcpy(temp, nom[j]);
                    strcpy(nom[j], nom[j+1]);
                    strcpy(nom[j+1], temp);
                    // temp = nom[j];
                    // nom[j] = nom[j + 1];
                    // nom[j + 1] = temp;
                }
            }
        }
        printf("\napres le tris par nom:\n");
        afficher();
        break;
    case 2:
        // swap status
        for (int i = 0; i < count_rev - 1; i++)
        {
            for (int j = 0; j < count_rev - i - 1; j++)
            {
                // compare :
                if (strcmp(status[j], status[j + 1]) > 0)
                {
                    // swap if the status[i] > status[j]
                    strcpy(temp, status[j]);
                    strcpy(status[j], status[j+1]);
                    strcpy(status[j+1], temp);
                    // temp = nom[j];
                    // nom[j] = nom[j + 1];
                    // nom[j + 1] = temp;
                }
            }
        }
        printf("\napres le tris par status:\n");
        afficher();
        break;

    default:
        break;
    }
}

// globale declaration for statistique
int valide = 0;
int reporte = 0;
int annule = 0;
int traite = 0;
int somme;
int moyenne;
int a = 0;
int b = 0;
int c = 0;
int i;
void statistique()
{
    int choix;
    printf("Statistiques: \n");
    printf("1.Calculer la moyenne d age des patients ayant reserve\n");
    printf("2.Afficher le nombre de patients par tranche d age \n");
    printf("3.statistiques pour connaitre le nombre total de reservations par statut\n");
    printf("entrer votre choix:");
    scanf("%d", &choix);

    switch (choix)
    {
        // Calculer la moyenne d age des patients ayant reserve
    case 1:

        if (count_rev == 0)
        {
            printf("ya pas cette reservation\n");
        }

        for (i = 0; i < count_rev; i++)
        {
            somme = somme + age[i];
        }
        moyenne = somme / count_rev;
        printf("la moyenne age des patients est: %d\n", moyenne);

        break;
        //.Afficher le nombre de patients par tranche d age

    case 2:

        for (i = 0; i < count_rev; i++)
        {
            if (age[i] <= 18)
            {
                a++;

                printf("le nombre de patients qui en entre 0-18 ans : %d \n", a);
            }
            else if (age[i] <= 35)
            {
                b++;
                printf("le nombre de patients qui en entre 19-35 ans : %d \n", b);
            }
            else
            {
                c++;

                printf("le nombre de patients qui en entre 36+ ans : %d \n", c);
            }
        }
        break;
    case 3:

        for (i = 0; i < count_rev; i++)
        {
            if (strcmp(status[i], "valide") == 0)
            {
                valide++;
                printf("%d est le nombre des reservations validees \n", valide);
            }
            else if ((strcmp(status[i], "reporte") == 0))
            {
                reporte++;
                printf("%d est le nombre des reservations reportees \n", reporte);
            }
            else if ((strcmp(status[i], "annule") == 0))
            {
                annule++;
                printf("%d est le nombre des reservations annulees \n", annule);
            }
            else if ((strcmp(status[i], "traite") == 0))
            {
                traite++;
                printf("%d est le nombre des reservations traitees \n", traite);
            }
        }

    default:
        printf(" invalide.\n");
        break;
    }
}

int main()
{
    liste_reservation();
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
        case 4:
            tri();
            break;
        case 5:
            rechercher();
            break;
        case 6:
            statistique();
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
