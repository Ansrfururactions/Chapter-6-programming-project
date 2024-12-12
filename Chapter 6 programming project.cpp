#include <iostream>
using namespace std;

double celciusconvers(double celcius, double fahrenheit);

int main()
{
	double celcius = 0, fahrenheit = 0;

	cout << "please enter your desired temperature in fahreneit" << endl;
	cin >> fahrenheit;

	cout << fahrenheit << " degrees fahrenheit is " << celcius << " degrees celcius." << endl;

}

double celciusconvers (double celcius, double fahrenheit)
{
	celcius = (5/9)*(fahrenheit - 32);
	return celcius;
} 