// Name: Peter Choi
// This program calculates the amount of paint needed.

#include <iostream>

int main()
{
  // one gallon of paint covers 340 square feet
  int coverage = 340;
   float height = 6;
    float width = 100;

  // calculate how many gallons of paint it will take to cover
  // the area with 2 coats of paint
   float area = height * width * 2;
    float gallons = area / coverage;

  std::cout << "It will take " << gallons << " gallons of paint.\n";

  return 0;
}
