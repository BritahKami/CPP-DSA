#include<iostream>

using namespace std;

int main()
{
//declaring variables
int length;

cout<< "Enter the length of the square: ";
cin>>length ;

//calculating area and perimeter
int area =length*length;
int perimeter= length * 4;

//displaying the result
cout << "The calculated area is " << area 
     << " and perimeter is " << perimeter ;
return 0;
}
