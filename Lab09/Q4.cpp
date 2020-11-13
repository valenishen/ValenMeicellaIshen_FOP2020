#include <iostream>
#include <cmath>
using namespace std;

//circleArea Function with radius parameter to operate the area of a circle
float circleArea (float radius){
    return M_PI * pow (radius, 2); 
}

//sphereVolume function with radius parameter to operate the volume of a sphere
float sphereVolume (float radius){
    return (4/3) * M_PI * pow(radius,3);
}

//Main function
int main()
{
    //Variable declaration
    float r;
    
    //Display request to input
    cout << "Hey, i have a circle and a sphere here, \nlet's calculate the area of the circle and the volume of the sphere!\n"
         << "What is the radius = ";
    cin >> r;

    //Invoke areaCircle function
    cout << "\nIf the radius is " << r << endl;
    cout << "The area of the circle is " << circleArea(r) << endl;
    cout << "The volume of the sphere is " << sphereVolume(r) << endl;

    return 0;
}