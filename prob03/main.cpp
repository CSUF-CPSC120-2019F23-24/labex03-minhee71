// Name: Peter Choi
// This program calculates a person's height in feet (') and inches (").
#include <iostream>

int main ()

  {
      // Assignment of variables.
      int height_inches_total;
      int height_feet;
      int height_inches;

      // Request the total height from user.
      std::cout << "What is the person\'s height in inches: ";
      std::cin >> height_inches_total;

      // Calculation of the height to feet/inches.
      height_feet = height_inches_total / 12;
      height_inches = height_inches_total % 12;

      // Display the height in feet inches.
      std::cout << "\a\nThe person is " << height_feet << "\' " <<  height_inches << "\".\n";

  return 0;
  }
