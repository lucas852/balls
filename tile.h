#pragma once

#include <Imagine/Graphics.h>
using namespace Imagine;
#include <iostream>
using namespace std;

#include <cmath>
#define _USE_MATH_DEFINES

#include "vector.h"

const int bloc = 50;
const int width = 7;
const int height = 10;
const int nbSqaures = width * height;
const int ballMax = 1000;

class Tiles {
private:
    int grid[nbSqaures];
    Color shades[2];

public:
    Tiles();
    void display();
    void nextTurn();

};

class Ball {
private:
    Vector pos;
    Vector dir; //vitesse constante
    int r; //rayon de la balle
public:
    Ball();
    Vector getPos();
    Vector getDir();
    int getR();



};
