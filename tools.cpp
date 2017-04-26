#include <cstdlib>
#include <ctime>
#include <cmath>
#include "tools.h"
#include "vector.h"

using namespace std;

void InitRandom()
{
	srand((unsigned int)time(0));
}

double Random(double a, double b)
{
	double x = double(rand()) / RAND_MAX;
	return a + (b - a)*x;
}

void Choc(Vector pos, Vector& vit, double m,
	Vector pos2, Vector& vit2, double m2)
{
	Vector vvit = (m*vit + m2*vit2)*(1 / (m + m2));
	Vector delta = pos2 - pos;
	double norme = pow(norme2(delta),2);
	double scal = -2. * ((vit.x - vvit.x)*delta.x + (vit.y - vvit.y)*delta.y) / norme;
	vit = vit + scal*delta;
	scal = -2. * ((vit2.x - vvit.x)*delta.x + (vit2.y - vvit.y)*delta.y) / norme;
	vit2 = vit2 + scal*delta;
}

void ChocSimple(Vector pos, Vector& vit, double m,
	Vector pos2, Vector vit2)
{
	Choc(pos,vit, m, pos2, vit2, 1000 * m);
}

bool Collision(Vector pos1, Vector vit1, double r1,
	Vector pos2, Vector vit2, double r2)
{
	Vector dpos = pos1 - pos2, dvit = vit1 - vit2;
	double r = r1 + r2;
	if (norme2(dvit)!= 0) {
		double t_min = -(dpos.x*dvit.x + dpos.y*dvit.y) / pow(norme2(dvit),2);
		double t_vrai;
		if (t_min < 0)
			t_vrai = 0;
		else if (t_min > dt)
			t_vrai = dt;
		else
			t_vrai = t_min;
		dpos = dpos + dvit*t_vrai;
	}
	return (norme2(dpos) <= r);
}
