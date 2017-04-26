#pragma once

#include <cstdlib>
#include <ctime>
#include "vector.h"
using namespace std;



const double dt = 0.01;
const int pasdaff = 10000;


void InitRandom();

double Random(double a, double b);

void Choc(Vector pos, Vector& vit, double m,
	Vector pos2, Vector& vit2, double m2);

void ChocSimple(Vector pos,Vector& vit, double m,
	Vector pos2, Vector vit2);

bool Collision(Vector pos1,Vector vit1, double r1,
	Vector pos2,Vector vit2, double r2);
