#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double vector_length(double x, double y, double z);
 
int main ()
{
	double x,y,z,l;
	

	cout << "input x" << endl;
	cin >> x;

	cout << "input y" << endl;
	cin >> y;

	cout << "input z" << endl;
	cin >> z;
 
	//calculate Re
	cout << "the length is " << endl;
	l = vector_length(x, y, z);
	cout << l << endl;

	return 0;
}


double vector_length( double x, double y, double z)

{
	double l;
	l = sqrt(pow(x,2.0)+pow(y,2.0)+pow(z,2.0));
	return l;
}


