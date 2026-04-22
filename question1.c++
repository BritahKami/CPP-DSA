#include<iostream> 

using namespace std;

int main()
{
//declaring variables
int days;

cout<< "Enter the number of days: ";
cin>>days;

//calculating seconds
int seconds= days * 86400 ;

//displaying the result
cout << "The seconds obtained from the number of days are " << seconds ;
return 0;
}
