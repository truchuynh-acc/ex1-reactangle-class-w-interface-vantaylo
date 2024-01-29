/**
Programmer: Vanessa Taylor
Project number: 1
Project Desc: Abstract Class Public Interface for Abstract Data Types
Course: COSC-2436-007 (92905) III Data Structures
Date: Jan 28, 2023
*/

/** @file Rectangle.h */

#ifndef RECTANGLE_
#define RECTANGLE_

#include "RectangleInterface.h"

class Rectangle : public RectangleInterface
{
public:
  Rectangle();
  bool set(double newLength, double NewWidth);
  double getLength() const;
  double getWidth() const;
  double getArea() const;

private:
  double length;
  double width;
};
#endif