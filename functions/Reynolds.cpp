#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double Reynolds_calc(double rho, double U, double D, double mu);
 
int main ()
{
	double rho,U,D,mu,Re;
	

	cout << "input density in kg/m3" << endl;
	cin >> rho;

	cout << "input velocity in m/s" << endl;
	cin >> U;

	cout << "input characteristic length in m" << endl;
	cin >> D;

	cout << "input dynamic velocity in SI unit" << endl;
	cin >> mu;
 
	//calculate Re
	cout << "the Re number is " << endl;
	Re =  Reynolds_calc(rho,U,D,mu);//主函数调用子函数
	cout << Re << endl;

	return 0;
}


double Reynolds_calc(double rho, double U, double D, double mu)

{
	double Re;
	Re = rho*U*D/mu;
	return Re;//返回主调函数的处理结果
}


