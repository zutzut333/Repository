/*Name Battaile Navale
 * Version 0.1
 * Date 17.03.2020
 * Autor Jean
 */
#include <stdio.h>

const char X = 'X'; // case vierge
const char T = 'T'; // case bateau touché
const char R = 'R'; // case raté
 int TV[10][10] = //tableau Vierge
        {{X, X, X, X, X, X, X, X, X, X},
         {X, X, X, X, X, X, X, X, X, X},
         {X, X, X, X, X, X, X, X, X, X},
         {X, X, X, X, X, X, X, X, X, X},
         {X, X, X, X, X, X, X, X, X, X},
         {X, X, X, X, X, X, X, X, X, X},
         {X, X, X, X, X, X, X, X, X, X},
         {X, X, X, X, X, X, X, X, X, X},
         {X, X, X, X, X, X, X, X, X, X},
         {X, X, X, X, X, X, X, X, X, X},
        };

 int TR[10][10] = //tableau réel
        {{R, R, T, R, R, R, R, R, T, R},
         {R, R, T, R, R, R, R, R, T, R},
         {R, R, R, R, R, R, R, R, T, R},
         {R, R, R, R, R, R, R, R, R, R},
         {R, R, R, T, T, T, R, R, R, R},
         {R, T, R, R, R, R, R, R, R, R},
         {R, T, R, R, R, R, R, R, R, R},
         {R, T, R, R, R, R, R, R, R, R},
         {R, T, R, R, R, R, R, R, R, R},
         {R, R, R, R, T, T, T, T, T, R},
        };

void quitter() {

}
// affiche plateau de jeu
int jouer() {
    int ligne,colonne;
printf("                        Jeu                    \n\n");
printf("                   Votre plateau  \n");

for ( char compteur = 0 ; compteur < 30 ; compteur++){//systeme de tours qui sera remplacé par un adversaire

printf("    1    2    3    4    5    6    7    8    9    10");
printf("\n1  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}",TV[1][1], TV[1][2], TV[1][3], TV[1][4], TV[1][5], TV[1][6], TV[1][7], TV[1][8], TV[1][9], TV[1][10]);
printf("\n2  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}",TV[2][1], TV[2][2], TV[2][3], TV[2][4], TV[2][5], TV[2][6], TV[2][7], TV[2][8], TV[2][9], TV[2][10]);
printf("\n3  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}",TV[3][1], TV[3][2], TV[3][3], TV[3][4], TV[3][5], TV[3][6], TV[3][7], TV[3][8], TV[3][9], TV[3][10]);
printf("\n4  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}",TV[4][1], TV[4][2], TV[4][3], TV[4][4], TV[4][5], TV[4][6], TV[4][7], TV[4][8], TV[4][9], TV[4][10]);
printf("\n5  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}",TV[5][1], TV[5][2], TV[5][3], TV[5][4], TV[5][5], TV[5][6], TV[5][7], TV[5][8], TV[5][9], TV[5][10]);
printf("\n6  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}",TV[6][1], TV[6][2], TV[6][3], TV[6][4], TV[6][5], TV[6][6], TV[6][7], TV[6][8], TV[6][9], TV[6][10]);
printf("\n7  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}",TV[7][1], TV[7][2], TV[7][3], TV[7][4], TV[7][5], TV[7][6], TV[7][7], TV[7][8], TV[7][9], TV[7][10]);
printf("\n8  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}",TV[8][1], TV[8][2], TV[8][3], TV[8][4], TV[8][5], TV[8][6], TV[8][7], TV[8][8], TV[8][9], TV[8][10]);
printf("\n9  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}",TV[9][1], TV[9][2], TV[9][3], TV[9][4], TV[9][5], TV[9][6], TV[9][7], TV[9][8], TV[9][9], TV[9][10]);
printf("\n10 {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}",TV[10][1], TV[10][2], TV[10][3], TV[10][4], TV[10][5], TV[10][6], TV[10][7], TV[10][8], TV[10][9], TV[10][10]);//Probleme d'affichage valeur fausse

printf("\n\ncible :\n");
printf("colonne");
scanf("%d",&colonne);
printf("ligne");
scanf("%d",&ligne);

TV[ligne][colonne] = TR[ligne][colonne];
}
}

int pseudo() {

}

int scores() {

}
// affiche le menu
void aide() {
    int fin;
    printf("                               Bataille Navale\n\n\n");


    printf("                            Chaque Joueur possede :\n\n ");

    printf("                          Un Porte-avion de 5 cases\n");
    printf("                           Un Croiseur de 4 cases\n");
    printf("                           Deux Destroyer de 3 cases\n");
    printf("                           Un Torpilleur de 2 cases\n\n");

    printf("      Chacun son tour,chaque joueur tire un obus sur une case de la case adverse.\n\n");

    printf("        Un bateau est touche quand un obus atterit sur une des cases du bateau\n\n");

    printf("             Un bateau est coule quand toutes  ses cases sont touchees\n\n");

    printf("      Une partie se termine quand un joueur coule tout les bateaux adverses\n\n");

    printf("     X sont les case pas révelé, R est pour les case vide et T signifie touché\n");

    printf("                                    1-Quitter");

    do {
        scanf("%d", &fin);
    }while (fin != 1);
    quitter();
}

//revoie a l'une des fonction en fonction du choix
  void Choix(choix) {
    switch (choix) {
        case 1 :
            jouer();
            break;
        case 2 :
            pseudo();
            break;
        case 3 :
            scores();
            break;
        case 4 :
            aide();
            break;
        case 5 :
            quitter();
            break;
    }
}
//affichage et choix menu
int Menu(valeurMenu) {
    printf("BATAILLE NAVALE\n");
    printf("1-Jouer\n");
    printf("2-Pseudo\n");
    printf("3-Scores\n");
    printf("4-Aide\n");
    printf("5-Quitter\n");
    do {
        fflush(stdin);
        scanf("%d", &valeurMenu);
        if (valeurMenu < 1 || valeurMenu > 5) {
            printf("choix pas dans la liste\n");

        }
    } while ((valeurMenu < 1) || (valeurMenu > 5));
    Choix(valeurMenu);
}

int main() {

    Menu();

    return 0;
}