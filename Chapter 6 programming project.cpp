// Chapter 6 programming project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int getsquareft(int squareft);
int getgallons(int squareft, int gallons);
double getpricegallon(double paintPrice);
double displayestimate(double paintCharge, double laborCharge, double gallonsNeeded, double laborHours);

int main()
{
    int rooms = 1, squareft = -1, gallons = 0;
    double paintCharge = 0, laborCharge = 0, gallonsNeeded = 0, laborHours = 0, paintPrice = 0, labor;

    while (rooms <= 1)
    {
        cout << "enter the amount of rooms" << endl;
    cin >> rooms;
}
    for (int i = 0; i == rooms; i++)
    {
        squareft = getsquareft(squareft);
        gallons = getgallons(squareft, gallons);
        gallonsNeeded += gallons;
        paintPrice = getpricegallon(paintPrice);
        paintCharge += gallons * paintPrice;
        labor = squareft * 8 / 110;
        laborHours += labor;
        laborCharge += labor * 25;

    }
    cout << "estimate for completing 5 rooms: " << endl;
    displayestimate(paintCharge, laborCharge, gallonsNeeded, laborHours);
}
int getsquareft(int squareft)
{
    
    cout << "how many square feet?" << endl;
    while (squareft < 0)
    {
        cin >> squareft;
    }
    return squareft;
}

int getgallons(int squareft, int gallons)
{
    gallons = squareft * 1 / 110;
    return gallons;
}
double getpricegallon(double paintPrice)
{
    double paintPrice;
        while (paintPrice < 10.0)
        {
            cout << "enter paint price" << endl;
            cin >> paintPrice;
        }
        return paintPrice;

}
double displayestimate(double paintCharge, double laborCharge, double gallonsNeeded, double laborHours)

{
    double paintCharge, laborCharge, gallonsNeeded, laborHours;
        cout << "gallons of paint to purchase: " << gallonsNeeded << endl;
    cout << "number of hours required to paint rooms: " << laborHours << endl;
    cout << "cost of paint: " << paintCharge << endl;
    cout << "cost of labor: " << laborCharge << endl;
    cout << "total cost of project: " << paintCharge + laborCharge << endl;
}