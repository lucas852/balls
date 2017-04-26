#pragma once

// Structures

struct Vector{
    double x;
    double y;
};

// Appels de fonctions
Vector operator+(Vector a, Vector b);
Vector operator-(Vector a, Vector b);
double norme2(Vector a);
Vector operator*(Vector a, double lambda);
Vector operator*(double lambda, Vector a);
