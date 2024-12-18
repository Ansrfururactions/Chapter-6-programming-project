// Chapter 6 programming project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



double displayestimate(double paintCharge, double laborCharge, double gallonsNeeded, double laborHours);

int main()
{
    int rooms = 1, i = 0;
    double paintCharge = 0.0, laborCharge = 0.0, gallonsNeeded = 0.0, laborHours = 0.0, paintPrice = 0.0, squareft = -1.0, gallons = 0.0, labor;

    while (rooms <= 1)
    {
        cout << "enter the amount of rooms" << endl;
    cin >> rooms;
}
    while ( i <= rooms)
    {
        while (squareft < 0)
        {
            cout << "how many square feet?" << endl;
            cin >> squareft;
        }

        gallons = squareft * 1/110;

        gallonsNeeded += gallons;
       
        while (paintPrice < 10.0)
        {
            cout << "enter paint price" << endl;
            cin >> paintPrice;
        }
        
        paintCharge += gallons * paintPrice;
        labor = squareft * 8/110;
        laborHours += labor;
        laborCharge += labor * 25;
        i++;
    }
    cout << "estimate for completing " << rooms << "rooms: " << endl;
    cout << "gallons of paint to purchase: " << gallonsNeeded << endl;
    cout << "number of hours required to paint rooms: " << laborHours << endl;
    cout << "cost of paint: " << paintCharge << endl;
    cout << "cost of labor: " << laborCharge << endl;
    cout << "total cost of project: " << paintCharge + laborCharge << endl;
}

