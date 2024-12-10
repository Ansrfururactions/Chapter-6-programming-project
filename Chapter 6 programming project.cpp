// Chapter 6 programming project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
   string cont = "y";

   while (cont == "y")
   {
	   double length = 0, width = 0, area = 0, perimeter = 0;
	   while (length <= 0)
	   {
		   cout << "enter the length of the rectangle";
		   cin >> length;
		   if (length <= 0)
		   {
			   cout << "this value is physically impossible, enter a different one.";
		   }
	   }

	   while (width <= 0)
	   {
		   cout << "enter the width of the rectangle";
		   cin >> width;
		   if (width <= 0)
		   {
			   cout << "this value is physically impossible, enter a different one.";
		   }
	   }
	    
	   perimeter = (length * 2) + (width * 2);
	   area = length * width;

	   cout << "the area of your rectangle is " << area << " and the perimeter is " << perimeter << endl;

	   cout << "do you wish to calculate a different rectangle? (enter y if yes, anything else if no)";
		   cin >> cont;
   }
   return 0;
 }



