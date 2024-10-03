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

        choix_modification(ref);
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

// Function to display reservations
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

//Recherche d'une réservation par référence unique
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
//Recherche d'une réservation par nom
void recherche_nom(){
    char Nom[MAX];
    printf("entrer le nom de patients que vous voudrai recherche: ");
    scanf("%s", &Nom);

    
    int found = 0;
    for (int i = 0; i < count_rev; i++)
    {
        if (strcmp(nom[i],Nom))
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
     if(!found)
    {
        printf("ce nom n ya pas dans la liste\n");
        return;
    }
}
void recherche_date(){
    char Date[MAX];
    printf("entrer la date de patients que vous voudrai recherche: ");
    scanf("%s", &date);

    
    int found = 0;
    for (int i = 0; i < count_rev; i++)
    {
        if (strcmp(date[i],Date))
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
     if(!found)
    {
        printf("cette date n ya pas dans la liste\n");
        return;
    }
}
//rechercher
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
