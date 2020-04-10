//
// Created by Jean on 08.04.2020.
//
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

static const char X = 'X'; // case vierge
static const char T = 'T'; // case bateau touché
static const char R = 'R'; // case raté

//tableau intermediaire entre selui choisi et la grille afficher
static int TableauReel[10][10] =
        {{R, R, R, R, R, R, R, R, R, R},
         {R, R, R, R, R, R, R, R, R, R},
         {R, R, R, R, R, R, R, R, R, R},
         {R, R, R, R, R, R, R, R, R, R},
         {R, R, R, R, R, R, R, R, R, R},
         {R, R, R, R, R, R, R, R, R, R},
         {R, R, R, R, R, R, R, R, R, R},
         {R, R, R, R, R, R, R, R, R, R},
         {R, R, R, R, R, R, R, R, R, R},
         {R, R, R, R, R, R, R, R, R, R},
        };

//fonction qui choisis aleatoirement un des 5 tableau
static void ChoixTablau() {
    srand(time(NULL));
    int choix = rand() % 6;

    switch (choix) {

        case 1 : {

            int TableauReel1[10][10] =
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
            int x = 0;
            int y = 0;

            for (int j = 0; j < 10; ++j) {
                for (int i = 0; i < 10; ++i) {
                    TableauReel[x][y] = TableauReel1[x][y];
                    x++;
                }
                y++;
                x=0;
            }
        }
        case 2 : {

            int TableauReel2[10][10] =
                    {{R, R, R, R, R, R, R, T, T, T},
                     {R, R, R, R, R, R, R, R, R, R},
                     {T, T, R, R, R, R, R, R, R, R},
                     {R, R, R, R, R, T, R, R, R, R},
                     {R, R, R, R, R, T, R, R, R, R},
                     {R, R, R, R, R, T, R, T, R, R},
                     {R, R, R, R, R, R, R, T, R, R},
                     {T, T, T, T, R, R, R, T, R, R},
                     {R, R, R, R, R, R, R, T, R, R},
                     {R, R, R, R, R, R, R, T, R, R},
                    };
            int x = 0;
            int y = 0;

            for (int j = 0; j < 10; ++j) {
                for (int i = 0; i < 10; ++i) {
                    TableauReel[x][y] = TableauReel2[x][y];
                    x++;
                    x=0;
                }
                y++;
            }
        }
        case 3 : {

            int TableauReel3[10][10] =
                    {{R, T, T, R, R, R, R, R, R, R},
                     {R, R, R, R, T, T, T, T, T, R},
                     {R, R, R, R, R, R, R, R, R, R},
                     {R, R, R, T, R, R, R, R, R, R},
                     {R, R, R, T, R, R, R, R, R, R},
                     {R, R, R, T, R, R, R, R, T, R},
                     {R, R, R, R, R, R, R, R, T, R},
                     {T, T, T, T, R, R, R, R, T, R},
                     {R, R, R, R, R, R, R, R, R, R},
                     {R, R, R, R, R, R, R, R, R, R},
                    };
            int x = 0;
            int y = 0;

            for (int j = 0; j < 10; ++j) {
                for (int i = 0; i < 10; ++i) {
                    TableauReel[x][y] = TableauReel3[x][y];
                    x++;
                }
                y++;
                x=0;
            }
        }
        case 4 : {

            int TableauReel4[10][10] =
                    {{R, T, R, R, R, R, R, R, R, R},
                     {R, T, R, R, R, R, R, R, T, R},
                     {R, T, R, R, R, R, R, R, T, R},
                     {R, R, R, R, R, R, R, R, T, R},
                     {R, T, T, T, T, T, R, R, T, R},
                     {R, R, R, R, R, R, R, R, R, R},
                     {R, R, R, R, R, R, R, R, R, R},
                     {R, R, T, R, R, R, R, R, R, R},
                     {R, R, T, R, R, T, T, T, R, R},
                     {R, R, R, R, R, R, R, R, R, R},
                    };
            int x = 0;
            int y = 0;

            for (int j = 0; j < 10; ++j) {
                for (int i = 0; i < 10; ++i) {
                    TableauReel[x][y] = TableauReel4[x][y];
                    x++;
                }
                y++;
                x=0;
            }
        }
        case 5 : {

            int TableauReel5[10][10] =
                    {{R, R, T, T, R, R, R, R, R, R},
                     {R, R, R, R, R, R, R, R, R, R},
                     {R, R, R, R, R, R, R, T, T, T},
                     {R, R, R, T, R, R, R, R, R, R},
                     {R, T, R, T, R, R, R, R, R, R},
                     {R, T, R, T, R, R, R, R, R, R},
                     {R, T, R, R, R, R, R, R, R, R},
                     {R, T, R, R, R, R, R, R, R, R},
                     {R, R, R, R, R, R, R, R, R, R},
                     {R, R, R, R, T, T, T, T, T, R},
                    };
            int x = 0;
            int y = 0;

            for (int j = 0; j < 10; ++j) {
                for (int i = 0; i < 10; ++i) {
                    TableauReel[x][y] = TableauReel5[x][y];
                    x++;
                }
                y++;
                x=0;
            }
        }

    }
}


