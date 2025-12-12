#include <stdio.h>
#include <stdlib.h>

int Devine(int demande)
{
    printf("Devine le nombre");
    scanf("%d", &demande);
    return demande;
}

int fonctionnement()
{
    int demande = 0;
    int nombre = rand();
    int entree = Devine(demande);
    int nouvelle_entree = 0;
    int cpt = 1;

    if (entree == nombre)
    {
        printf("Vous avez gagné !");
        printf("Nombre de tentatives : %d\n", cpt);
        return entree;
    }

    while (nouvelle_entree != nombre)
    {
        cpt++;

        if (entree < nombre || nouvelle_entree < nombre)
        {
            printf("C'est plus grand\n");
            printf("Donnez un nouveau nombre\n");
            scanf("%d", &nouvelle_entree);
        }

        else
        {
            printf("C'est plus petit\n");
            printf("Donnez un nouveau nombre\n");
            scanf("%d", &nouvelle_entree);
        }
    }
    return nouvelle_entree;
}

int main(void)
{
    int demande = 0;
    int resultat = Devine(demande);
    printf("%d\n", resultat);
    return 0;
}