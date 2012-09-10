/****************************************
 ***    Project:  GL Raytracer        ***
 ***    File:     point3D.h           ***
 ***    Author:   Daniele Donghi      ***
 ***           d.donghi AT gmail.com  ***
 ***    Created on November 1, 2011   ***
 ****************************************/

#ifndef POINT3D_H
#define POINT3D_H

using namespace std;

class point3D {
	private:
		// Members
		double u;
		double v;
		double w;
	
	public:
		// Constructor/Destructor
		point3D(double x, double y, double z) {u = x; v = y; w = z;}
		~point3D() {};
	
		// Methods
		double x() {return u;}
		double y() {return v;}
		double z() {return w;}
};

#endif // POINT3D_H
