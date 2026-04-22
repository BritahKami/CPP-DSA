#include<iostream>
#include <cmath>  

using namespace std;

int main()
{
//declaring variables
double radius;

cout<< "Enter the radius of the sphere: ";
cin>>radius ;

//calculating volume
double volume =4.0/3.0 * 3.14 * pow(radius, 3);

//displaying the result
cout << "The calculated volume is " << volume  ;
return 0;
}
