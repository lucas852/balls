#include <cmath>
#include <cstdlib>
#include <ctime>
#include<iostream>
using namespace std;

#include "vector.h"

Vector operator+(Vector a, Vector b){
    Vector u = {a.x+b.x,a.y+b.y};
    return u;
}

Vector operator-(Vector a, Vector b){
    Vector u = {a.x-b.x,a.y-b.y};
    return u;
}

double norme2(Vector a){
    double n = sqrt(pow(a.x,2)+pow(a.y,2));
    return n;
}

Vector operator*(Vector a, double lambda){
    Vector u = {lambda*a.x,lambda*a.y};
    return u;
}

Vector operator*(double lambda, Vector a){
    Vector u = {lambda*a.x,lambda*a.y};
    return u;
}
