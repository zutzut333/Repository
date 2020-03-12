#include <stdio.h>

int Menu(valeurMenu){
    printf("BATAILLE NAVALE\n");
    printf("1-Jouer\n");
    printf("2-Pseudo\n");
    printf("3-Scores\n");
    printf("4-Aide\n");
    printf("5-Quitter\n");

    scanf("%d",valeurMenu);
    while (valeurMenu < 1 || valeurMenu > 5 ){
    printf("choix pas dans la liste\n");
    scanf("%d",&valeurMenu);
    }
    return valeurMenu;
}
void Choix(choix){
    switch (choix)
        //case 1 :
            break;
        //case 2 :
        //case 3 :
        //case 4 :
        //case 5 :

}
 int jouer(){

}
int pseudo(){

}
int scores(){

}
void aide(){

}
void quitter(){

}

int main() {
    int valeurMenu;

    valeurMenu = Menu(valeurMenu);
    Choix(valeurMenu);

    return 0;
}