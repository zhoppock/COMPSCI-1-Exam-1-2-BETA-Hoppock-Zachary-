//Hoppock, Zachary
//10/21/2020
//ropeLength.cpp
//Input 3 lengths of rope, add them together, then convert the sum from feet to yards
//Version #1

/*
X number of feet
Y number of feet
Z number of feet
Added together = total number of feet
From the total number of feet convert to yards
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double rope_x;
  double rope_y;
  double rope_z;
  const int MIN = 1;
  const int MAX = 1000;
  double sum = 0;
  const int FEET_YARD_RATIO = 3;
  double yardage = 0;

  cout << "Please input length of rope X (between 1 and 1000 feet): ";
  cin >> rope_x;
  while (rope_x <= MIN || rope_x >= MAX)
  {
    cout << "Invalid entry.  Please input length of rope X (between 1 and 1000 feet): ";
    cin >> rope_x;
  }

  cout << "Please input length of rope Y (between 1 and 1000 feet): ";
  cin >> rope_y;
  while (rope_y <= MIN || rope_y >= MAX)
  {
    cout << "Invalid entry.  Please input length of rope Y (between 1 and 1000 feet): ";
    cin >> rope_y;
  }

  cout << "Please input length of rope Z (between 1 and 1000 feet): ";
  cin >> rope_z;
  while (rope_z <= MIN || rope_z >= MAX)
  {
    cout << "Invalid entry.  Please input length of rope Z (between 1 and 1000 feet): ";
    cin >> rope_z;
  }

  sum = rope_x + rope_y + rope_z;
  yardage = sum / FEET_YARD_RATIO;

  cout << "\033[2J\033[0;0H";

  cout << "The length of rope X is approximately " << fixed << setprecision(2) << rope_x << " feet." << endl;
  cout << "The length of rope Y is approximately " << fixed << setprecision(2) << rope_y << " feet." << endl;
  cout << "The length of rope Z is approximately " << fixed << setprecision(2) << rope_z << " feet." << endl;
  cout << "The length of all the ropes together is approximately " << fixed << setprecision(2) << sum << " feet total." << endl;
  cout << "When converted to yards, the total length of the ropes is equal to approximately " << fixed << setprecision(2) << yardage << " yards." << endl;
  return 0;
}