/****************************************
 ***    Project:  GL Raytracer        ***
 ***    File:     light.h             ***
 ***    Author:   Daniele Donghi      ***
 ***           d.donghi AT gmail.com  ***
 ***    Created on November 1, 2011   ***
 ****************************************/

#ifndef LIGHT_H
#define LIGHT_H


#include "point3D.h"

using namespace std;


class light {
	private:
		// Members
		point3D *l;
		double col[3];
	
	public:
		// Constructor/Destructor
                light(point3D *loc) {l = loc;}
		~light() {};
	
		// Methods
		point3D* location() {return l;}
		double red()   {return col[0];}
		double green() {return col[1];}
		double blue()  {return col[2];}
                void setColor(double r, double g, double b) {col[0] = r; col[1] = g; col[2] = b;}
};
#endif // LIGHT_H
