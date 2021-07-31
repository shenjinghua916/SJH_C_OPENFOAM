#include <iostream>
#include<string>
using namespace std;

int main()
	{
	int a,b;  //声明变量ab
        string first_statement,second_statement,third_statement;
	
	first_statement = "now we're going to add a+b";
	second_statement = "please state a value for a: ";
	third_statement = "please state a value for b: ";

	cout << first_statement << endl;
	cout << second_statement;
	cin >> a;
	cout << third_statement;
        cin >>b;
        cout << a+b << endl;
	return 0;
	};
