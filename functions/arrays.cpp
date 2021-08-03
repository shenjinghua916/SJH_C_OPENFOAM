#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double vector_length(double x, double y, double z);
 
int main ()
{
	double l;
	double vector[3][1];

	cout << "input x" << endl;
	cin >> vector[0][0];

	cout << "input y" << endl;
	cin >> vector[1][0];

	cout << "input z" << endl;
	cin >> vector[2][0];
        
	//calculate Re
	cout << "the length is " << endl;
	l = vector_length(vector[0][0],vector[1][0],vector[2][0]);

	cout << l << endl;

	return 0;
}


double vector_length( double x, double y, double z)

{
	double l;
	l = sqrt(pow(x,2.0)+pow(y,2.0)+pow(z,2.0));
	return l;
}

