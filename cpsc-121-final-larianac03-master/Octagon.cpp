// Your Name
// CPSC 12X-XX
// Final
// 2020-XX-XX
// Your.Email@Address.Please
//
// What does this program do? What is it's title?
//

#include "Octagon.hpp"


// Don't forget to call the parent class' constructor
Octagon::Octagon(float side_length) : Polygon(3, side_length)
{
  _side_length = side_length;
}

std::ostream& Octagon::write(std::ostream& out) const
{
  out << "Octagon(side_length=" << _side_length << ")";
  return out;
}

float Octagon::area( ) const
{
  float _area = 2 * (1 + SQRT_2) * (_side_length * _side_length);
  return _area;
}

std::ostream& operator<<(std::ostream& out, const Octagon& o)
{
  return o.write(out);
}
