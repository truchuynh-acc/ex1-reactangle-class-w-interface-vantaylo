/**
Programmer: Vanessa Taylor
Project number: 1
Project Desc: Abstract Class Public Interface for Abstract Data Types
Course: COSC-2436-007 (92905) III Data Structures
Date: Jan 28, 2023
*/

/** @file driver.cpp */

#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
     Rectangle theRectangle;

     cout << "Intital state of the rectangle" << endl;
     cout << "The area of the rectangle is " << theRectangle.getArea() << endl
          << endl;

     theRectangle.set(0.0, 0.0);
     cout << "Current state of the rectangle" << endl;
     cout << "The length of the rectangle is " << theRectangle.getLength() << endl;
     cout << "The width of the rectangle is " << theRectangle.getWidth() << endl;
     cout << "The area of the rectangle is " << theRectangle.getArea() << endl
          << endl;

     theRectangle.set(-2, -4);
     cout << "Current state of the rectangle" << endl;
     cout << "The length of the rectangle is " << theRectangle.getLength() << endl;
     cout << "The width of the rectangle is " << theRectangle.getWidth() << endl;
     cout << "The area of the rectangle is " << theRectangle.getArea() << endl
          << endl;

     theRectangle.set(2.0, 4.0);
     cout << "Current state of the rectangle" << endl;
     cout << "The length of the rectangle is " << theRectangle.getLength() << endl;
     cout << "The width of the rectangle is " << theRectangle.getWidth() << endl;
     cout << "The area of the rectangle is " << theRectangle.getArea() << endl
          << endl;

     return 0;
}