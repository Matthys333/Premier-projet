#include <stdio.h>

int Devine(int demande)
{
    demande = 0;
    printf("Devine le nombre");
    scanf("%d", &demande);
    return 0;
}

int main(void)
{
    int demande = 0;
    int resultat = Devine(demande);
    printf("%d\n", resultat);
    return 0;
}
