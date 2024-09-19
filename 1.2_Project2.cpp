// Calculating consumption rates and purchases for energy drinks. 
#include <iostream>
using namespace std;

int main()
{
  // Declare variables
  int customers = 16500;
  double energy_drink_percentage = 0.15;
  double citrus_percentage = 0.58;
  // Calculate the number of customers who purchase energy drinks
  int reg_purchasers = customers * energy_drink_percentage;
  // Calculate the number of customers who prefer citrus flavored energy drinks
  int citrus_fans = reg_purchasers * citrus_percentage; 
  // Display number of customers purchasing energy drinks and how many of those prefer citrus flavors
  cout << "The number of customers who purchase energy drinks is " << reg_purchasers << " and the number of customers who prefer citrus flavored energy drinks is " << citrus_fans; 
  return 0; 
}