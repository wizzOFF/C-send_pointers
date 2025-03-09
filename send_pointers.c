/*
void triplePointeur(int *pointeurSurNombre);

int main(int argc, char *argv[])
{
    int nombre = 5;

    triplePointeur(&nombre); // On envoie l'adresse de nombre à la fonction
    printf("%d", nombre); // On affiche la variable nombre. La fonction a directement modifié la valeur de la variable car elle connaissait son adresse

    return 0;
}

void triplePointeur(int *pointeurSurNombre)
{
    *pointeurSurNombre *= 3; // On multiplie par 3 la valeur de nombre
}
*/

/*
void triplePointeur(int *pointeurSurNombre);

int main(int argc, char *argv[])
{
    int nombre = 5;
    int *pointeur = &nombre; // pointeur prend l'adresse de nombre

    triplePointeur(pointeur); // On envoie pointeur (l'adresse de nombre) à la fonction
    printf("%d", *pointeur); // On affiche la valeur de nombre avec *pointeur

    return 0;
}

void triplePointeur(int *pointeurSurNombre)
{
    *pointeurSurNombre *= 3; // On multiplie par 3 la valeur de nombre
}
*/


void decoupeMinutes(int* pointeurHeures, int* pointeurMinutes);

int main(int argc, char *argv[])
{
    int heures = 0, minutes = 90;

    // On envoie l'adresse de heures et minutes
    decoupeMinutes(&heures, &minutes);

    // Cette fois, les valeurs ont été modifiées !
    printf("%d heures et %d minutes", heures, minutes);

    return 0;
}

void decoupeMinutes(int* pointeurHeures, int* pointeurMinutes)
{
    /* Attention à ne pas oublier de mettre une étoile devant le nom
    des pointeurs ! Comme ça, vous pouvez modifier la valeur des variables,
    et non leur adresse ! Vous ne voudriez pas diviser des adresses,
    n'est-ce pas ? ;o) */
    *pointeurHeures = *pointeurMinutes / 60;
    *pointeurMinutes = *pointeurMinutes % 60; 
}