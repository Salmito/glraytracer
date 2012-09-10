/****************************************
 ***    Project:  GL Raytracer        ***
 ***    File:     sphere.h            ***
 ***    Author:   Daniele Donghi      ***
 ***           d.donghi AT gmail.com  ***
 ***    Created on November 1, 2011   ***
 ****************************************/

#ifndef SPHERE_H
#define SPHERE_H


#include "point3D.h"

using namespace std;


class sphere {
	private:
		// Members
		point3D *cent;
		double rad;
		double Ka[3];
		double Kd[3];
		double Ks[3];
		double n_exp;
		double refl;		// raytracing only
		double tran;		// raytracing only
		double idx_ref;		// raytracing only
	
	public:
		// Constructor/Destructor
                sphere() {}
		~sphere() {};
	
		// Methods
                void setCenter(point3D *c){cent = c;}
                void setRadius(double r){rad=r;}
		void setAmbientProperty(double r, double g, double b)  {Ka[0] = r; Ka[1] = g; Ka[2] = b;}
		void setDiffuseProperty(double r, double g, double b)  {Kd[0] = r; Kd[1] = g; Kd[2] = b;}
		void setSpecularProperty(double r, double g, double b) {Ks[0] = r; Ks[1] = g; Ks[2] = b;}
		void setSpecularExponent(double n) {n_exp = n;}
		void setReflection(double reflection) {refl = reflection;}
		void setTransmission(double transmission) {tran = transmission;}
		void setIndexOfRefraction(double idxRefraction) {idx_ref = idxRefraction;}
		point3D* center() {return cent;}
		double radius() {return rad;}
		double getAmbientProperty(int color)  {return Ka[color];}
		double getDiffuseProperty(int color)  {return Kd[color];}
		double getSpecularProperty(int color) {return Ks[color];}
		double getSpecularExponent() {return n_exp;}
		double getReflection() {return refl;}
		double getTransmission() {return tran;}
		double getIndexOfRefraction() {return idx_ref;}
};
#endif // SPHERE_H
