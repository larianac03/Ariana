// Ariana Contreras
// CPSC 1221-03
// Final
// 2020-5-14
// larianac03@csu.fullerton.edu
//
// What does this program do? What is it's title?
// forms a polygon and prints its values
//

#include <iostream>

#ifndef _POLYGON_HPP_
#define _POLYGON_HPP_

// The square root of 2
extern const float SQRT_2;
// The square root of 3
extern const float SQRT_3;

// This class represents equilateral, convex polygons.
class Polygon{
private:
  int _number_of_sides;
  float _side_length;
public:
  Polygon(int number_of_sides, float side_length);
  int getNumberOfSides( ) const;
  float getSideLength( ) const;
  // This is a pure virtual method
  virtual float area( ) const = 0;
  // This is a virtual method
  virtual std::ostream& write(std::ostream& out) const;
};

std::ostream& operator<<(std::ostream& out, const Polygon& p);

#endif
