#include <iostream>
using namespace std;

int main()
{
	int accidentCounterNorth=-1, accidentCounterSouth=-1, accidentCounterEast=-1, accidentCounterWest=-1, accidentCountercenter = -1, lowestaccidents = 0;
	string city;

	cout << "enter the name of the city" << endl;
		cin >> city;

		while (accidentCounterNorth < 0)
		{
			cout << "enter the amount of accidents in the northern part" << endl;
			cin >> accidentCounterNorth;
			if (accidentCounterNorth < 0)
			{
				cout << "how on earth can there be negative accidents? try again." << endl;
			}

	    }
		lowestaccidents = accidentCounterNorth;

		while (accidentCounterSouth < 0)
		{
			cout << "enter the amount of accidents in the southern part" << endl;
			cin >> accidentCounterSouth;


			if (accidentCounterSouth < 0)
			{
				cout << "how on earth can there be negative accidents? try again." << endl;
			}

		}

		if (accidentCounterSouth < lowestaccidents)
		{
			lowestaccidents = accidentCounterSouth;
		}

		while (accidentCounterEast < 0)
		{
			cout << "enter the amount of accidents in the eastern part" << endl;
			cin >> accidentCounterEast;

			if (accidentCounterEast < 0)
			{
				cout << "how on earth can there be negative accidents? try again." << endl;
			}
		}

		if (accidentCounterEast < lowestaccidents)
		{
			lowestaccidents = accidentCounterEast;
		}

		while (accidentCounterWest < 0)
		{
			cout << "enter the amount of accidents in the western part" << endl;
			cin >> accidentCounterWest;
			if (accidentCounterWest < 0)
			{
				cout << "how on earth can there be negative accidents? try again." << endl;
			}

		}
		if (accidentCounterWest < lowestaccidents)
		{
			lowestaccidents = accidentCounterWest;
		}
		while (accidentCountercenter < 0)
		{
			cout << "enter the amount of accidents in the central part" << endl;
			cin >> accidentCountercenter;
			if (accidentCounterWest < 0)
			{
				cout << "how on earth can there be negative accidents? try again." << endl;
			}

		}
		if (accidentCounterWest < lowestaccidents)
		{
			lowestaccidents = accidentCounterWest;
		}

		if (lowestaccidents = accidentCounterNorth)
			cout << "the northern area of " << city << " has the least amout of accidents" << endl;
		else if (lowestaccidents = accidentCounterSouth)
			cout << "the southern area of " << city << " has the least amout of accidents" << endl;
		else if (lowestaccidents = accidentCounterEast)
			cout << "the eastern area of " << city << " has the least amout of accidents" << endl;
		else if (lowestaccidents = accidentCounterWest)
			cout << "the western area of " << city << " has the least amout of accidents" << endl;
		else if (lowestaccidents = accidentCountercenter)
			cout << "the central area of " << city << " has the least amout of accidents" << endl;
		else
			cout << "the safest area cannot be determined" << endl;
			
}

