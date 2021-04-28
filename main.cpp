//
//  main.cpp
//  Sphere Functions
//
//  Created by Nicholas Hernandez
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double get_surface_of_sphere (double radius)
{
    double total = 4 * M_PI * pow(radius,2);
    return total;
}

double get_volume_of_sphere (double radius)
{
    double total = (4/3) * M_PI * pow(radius,3);
    return total;
}

int main(int argc, const char * argv[])
{
    
    cout << "Hello, Welcome to the Surface Area and Volume of a sphere calculator!" << endl;
    cout << "Please enter a radius to get started." << endl;
    
    double radius;
    cin >> radius;
    
    double surface_area = get_surface_of_sphere (radius);
    
    cout << "The surface area of your sphere is " << surface_area << endl;
    
    double volume_ = get_volume_of_sphere (radius);
    
    cout << "The volume of your sphere is " << volume_ << endl;
    
    return 0;
}
