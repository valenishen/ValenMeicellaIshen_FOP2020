#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  //STEP 1: Make the variable
  //declare radius, volume, surfaceArea to floar
  float radius, volume, surfaceArea;
  //assign 3.14 to pi
  float pi = 3.14;

  //STEP 2: Display request to input value
  cout << "Input the radius of sphere = ";
  
  //STEP 3: Read input value and assign it to radius
  cin >> radius;

  //STEP 4: Operate the value
  //Sphere's Volume = (4/3)pi.r^3
  volume = (4/3) * pi * pow(radius,3);

  //Sphere's Surface area = 4.pi.r^2
  surfaceArea = 4 * pi * pow(radius, 2);

  //STEP 5: Display result
  //Result for Volume
  cout << "Sphere's Volume = " << volume << endl;
  //Result for surfaceArea
  cout << "Sphere's Surface Area = " << surfaceArea << endl;

  return 0;
}