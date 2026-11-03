#include <stdio.h>

int main(void)
{
    char prenom[100];
    int age;
    int annee_actuelle = 2026;

    printf("Bonjour, quel est votre prénom ?\n");
    scanf("%99s", prenom);

    printf("Bonjour %s, quel est votre âge ?\n", prenom);
    scanf("%d", &age);

    printf("%s, si vous êtes de la fin d'année, votre année de naissance est %d sinon c'est %d\n",
           prenom, annee_actuelle - age - 1, annee_actuelle - age);

    return 0;
}
