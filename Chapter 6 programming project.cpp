#include <iostream>
#include <cmath>
using namespace std;

double celciusconvers(double celcius, double fahrenheit, double fraction);

int main()
{
	double celcius= 10, fahrenheit = 0, fraction = 0.55;

	while (fahrenheit <= 0 || fahrenheit >= 20)
	{
		cout << "please enter your desired temperature in fahreneit" << endl;
		cin >> fahrenheit;
		fahrenheit = fahrenheit * 1.0;
		if (fahrenheit <= 0 || fahrenheit >= 20)
		{
			cout << "try again, has to be between 0 and 20" << endl;
		}
	}
	celcius = celciusconvers(celcius, fahrenheit, fraction);

	cout << fahrenheit << " degrees fahrenheit is " << celcius << " degrees celcius." << endl;

}

double celciusconvers (double celcius, double fahrenheit, double fraction)
{

	return celcius = (fraction)*(fahrenheit - 32);

}  