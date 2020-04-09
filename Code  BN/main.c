/*Name Battaile Navale
 * Version 1
 * Date 09.04.2020
 * Autor Jean
 */
#include <stdio.h>
#include "tableau.c"
#include <time.h>
#include <stdlib.h>




// tableau de base avent jeu
int TableauVierge[10][10] =
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



// affichage plateau de jeu
int jouer() {
    int ligne,colonne;
    int touche = 0;
    int compteur = 0;
    printf("                        Jeu                    \n\n");
    printf("                   Votre plateau  \n");

    for ( char compteur = 0 ; compteur < 30 ; compteur++){
do{

        printf("%d/30 tours\n",compteur);
        printf("    1    2    3    4    5    6    7    8    9    10 ");
        printf("\n1  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}",TableauVierge[0][0], TableauVierge[0][1], TableauVierge[0][2], TableauVierge[0][3], TableauVierge[0][4], TableauVierge[0][5], TableauVierge[0][6], TableauVierge[0][7], TableauVierge[0][8], TableauVierge[0][9]);
        printf("\n2  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}",TableauVierge[1][0], TableauVierge[1][1], TableauVierge[1][2], TableauVierge[1][3], TableauVierge[1][4], TableauVierge[1][5], TableauVierge[1][6], TableauVierge[1][7], TableauVierge[1][8], TableauVierge[1][9]);
        printf("\n3  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}",TableauVierge[2][0], TableauVierge[2][1], TableauVierge[2][2], TableauVierge[2][3], TableauVierge[2][4], TableauVierge[2][5], TableauVierge[2][6], TableauVierge[2][7], TableauVierge[2][8], TableauVierge[2][9]);
        printf("\n4  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}",TableauVierge[3][0], TableauVierge[3][1], TableauVierge[3][2], TableauVierge[3][3], TableauVierge[3][4], TableauVierge[3][5], TableauVierge[3][6], TableauVierge[3][7], TableauVierge[3][8], TableauVierge[3][9]);
        printf("\n5  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}",TableauVierge[4][0], TableauVierge[4][1], TableauVierge[4][2], TableauVierge[4][3], TableauVierge[4][4], TableauVierge[4][5], TableauVierge[4][6], TableauVierge[4][7], TableauVierge[4][8], TableauVierge[4][9]);
        printf("\n6  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}",TableauVierge[5][0], TableauVierge[5][1], TableauVierge[5][2], TableauVierge[5][3], TableauVierge[5][4], TableauVierge[5][5], TableauVierge[5][6], TableauVierge[5][7], TableauVierge[5][8], TableauVierge[5][9]);
        printf("\n7  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}",TableauVierge[6][0], TableauVierge[6][1], TableauVierge[6][2], TableauVierge[6][3], TableauVierge[6][4], TableauVierge[6][5], TableauVierge[6][6], TableauVierge[6][7], TableauVierge[6][8], TableauVierge[6][9]);
        printf("\n8  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}",TableauVierge[7][0], TableauVierge[7][1], TableauVierge[7][2], TableauVierge[7][3], TableauVierge[7][4], TableauVierge[7][5], TableauVierge[7][6], TableauVierge[7][7], TableauVierge[7][8], TableauVierge[7][9]);
        printf("\n9  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}",TableauVierge[8][0], TableauVierge[8][1], TableauVierge[8][2], TableauVierge[8][3], TableauVierge[8][4], TableauVierge[8][5], TableauVierge[8][6], TableauVierge[8][7], TableauVierge[8][8], TableauVierge[8][9]);
        printf("\n10 {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}  {%c}",TableauVierge[9][0], TableauVierge[9][1], TableauVierge[9][2], TableauVierge[9][3], TableauVierge[9][4], TableauVierge[9][5], TableauVierge[9][6], TableauVierge[9][7], TableauVierge[9][8], TableauVierge[9][9]);


        printf("\n\ncible :\n");
        printf("colonne");
        scanf("%d",&colonne);
        printf("ligne");
        scanf("%d",&ligne);

        TableauVierge[ligne-1][colonne-1] = TableauReel[ligne-1][colonne-1];
        if (TableauVierge[ligne-1][colonne-1] == T) touche++;
        compteur++;

        if (touche == 17) victoire(compteur) ;
        else if (compteur == 30) defaite(compteur);

    }while (compteur <30 || touche == 17);
}
}

//Demande le nom et l'ajoute au tableau des scores a cote de son score
int pseudo(score) {
    char nom;
printf("\n\nQuel est votre nom ?");
scanf("%d",&nom);

    FILE *ficher = fopen("save","r");


    if(ficher == NULL)
        exit(1);


        fprintf("%d %d",nom,score);


    fclose(ficher);

}
//Permet de lire le fichier save
int scores() {
    FILE *ficher = fopen("save","r");
    int texte = 0;

    if(ficher == NULL)
        exit(1);

    while((texte = fgetc(ficher)) != EOF )
    {
        printf("%c",texte);
    }

    fclose(ficher);

 
}
// affiche l' aide
void aide() {
    int fin;
    printf("                             Bataille Navale\n\n\n");


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
void Choix(int choix) {
    switch (choix) {
        case 1 :
            jouer();
            break;
        case 2 :
            scores();
            break;
        case 3 :
            aide();
            break;
        case 4 :
            quitter();
            break;
    }
}
//affichage et choix menu
int Menu( ) {
    int valeurMenu;
    printf("BATAILLE NAVALE\n");
    printf("1-Jouer\n");
    printf("2-Scores\n");
    printf("3-Aide\n");
    printf("4-Quitter\n");
    do {
        fflush(stdin);
        scanf("%d", &valeurMenu);
        if (valeurMenu < 1 || valeurMenu > 4) {
            printf("choix pas dans la liste\n");

        }
    } while ((valeurMenu < 1) || (valeurMenu > 4));
    Choix(valeurMenu);
}
//pour quitter
void quitter() {

}
//message de victoire
int victoire(int score) {
    printf("\nBRAVO VOUS AVEZ GAGNER AVEC UN SCORE DE %d !!!!",score);
    pseudo(score);
}
//message de defaite
int defaite(int score){
    printf("\n TOUTE NOTRE FLOTTE A ETE DETRUITE PAR VOTRE FAUTE !!!!!!");
    pseudo(score);
}
//main
int main() {

    ChoixTablau();

    Menu();

    return 0;
}