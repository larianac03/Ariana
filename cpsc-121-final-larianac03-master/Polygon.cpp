// Ariana Contreras
// CPSC 1221-03
// Final
// 2020-5-14
// larianac03@csu.fullerton.edu
//
// What does this program do? What is it's title?
// forms a polygon and prints its values
//

#include "Polygon.hpp"

const float SQRT_2 = 1.41421356237309514547;
const float SQRT_3 = 1.73205080756887719318;

Polygon::Polygon(int number_of_sides, float side_length){
  _number_of_sides = number_of_sides;
  _side_length = side_length;
}

int Polygon::getNumberOfSides( ) const{
  return _side_length;
}

float Polygon::getSideLength( ) const{
  return _number_of_sides;
}

std::ostream& Polygon::write(std::ostream& out) const{
  out << "You shouldn't see this; this is Shape::write( ).\n";
  return out;
}

std::ostream& operator<<(std::ostream& out, const Polygon& p){
  return p.write(out);
}
