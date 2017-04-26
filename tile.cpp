#include "tile.h"



Tiles::Tiles(){
    //intialisation de la grille a zero
    for (int i=0; i < nbSqaures; i++){
        grid[i] = 0; //couleur noire
    }
    //nuancier de couleurs
    shades[0] = BLACK;
    shades[1] = YELLOW;
}
