// This program calculates a person's height in feet (') and inches (").
#include <iostream>

int main()
{

int inches;

  //Asks for height in inches
  std::cout << "Please enter the person\'s height in inches: ";
  std::cin >> inches;

  //Converts inches into feet.
  double feet = inches / 12;
  int inchesremain = inches % 12;

  //Displays Height in feet
  std::cout << "That person is " << feet << "\'" << inchesremain << "\"" << '\n';

  return 0;
}
