//Calculating distance per tank of gas based on highway vs city MPG
#include <iostream>
using namespace std;

int main()
{
  double city_mpg = 23.5;
  double highway_mpg = 28.9;
  int tank_size = 20;
  // we now need to calculate the tank range for each scenario
  double city_range = city_mpg * tank_size;
  double highway_range = highway_mpg * tank_size;
  // we now need to display the ranges using the variables created
  cout << "The city range is " << city_range << " miles and the highway range is " << highway_range << " miles";
  return 0;
    }
