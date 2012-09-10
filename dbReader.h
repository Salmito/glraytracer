/****************************************
 ***    Project:  GL Raytracer        ***
 ***    File:     dbReader.h          ***
 ***    Author:   Daniele Donghi      ***
 ***           d.donghi AT gmail.com  ***
 ***    Created on November 1, 2011   ***
 ****************************************/

#include <vector>
#include "light.h"
#include "triangle.h"
#include "sphere.h"

using namespace std;


class dbReader {
	private:
		// Members
		double background[3];
		double ambientLight[3];
		light *lightSource;
		vector<triangle*> triangleList;
		vector<sphere*> sphereList;
	
	
		// Private Helper Methods
	
	public:
		// Constructor/Destructor
		dbReader() {};
		~dbReader() {};
	
		// Public Methods
		double* getBackgroundColor();
		double* getAmbientLight();
		light* getLight();
		vector<triangle*> getTriangleList();
		vector<sphere*> getSphereList();
		void read(char* fN);
};
