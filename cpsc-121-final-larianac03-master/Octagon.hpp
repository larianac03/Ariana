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

#include "Polygon.hpp"

#ifndef _OCTAGON_HPP_
#define _OCTAGON_HPP_

// This class represents equilateral, convex octagon.
// An octagon has 8 sides.
class Octagon : public Polygon{
private:
  float _side_length = 0;

public:
  Octagon(float side_length);
  float area( ) const;                //virtual float area();
  virtual std::ostream& write(std::ostream& out) const;
};

std::ostream& operator<<(std::ostream& out, const Octagon& o);

#endif
