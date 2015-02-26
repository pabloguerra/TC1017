#include <iostream>
using namespace std;

int F;

int main ()
{

  cout << "This program will convert Fahrenheit temperature to Celsius including if water boils at that temperature"<< endl;
  cout << "Fahrenheit temperature: " << endl;
  cin >> F;

  int C= ((5*(F-32))/9);
  cout << "The temperature on Celsius is: " << C << endl;


  if (C>100)

    cout << "The water will boil" << endl;

  else

    cout <<"The water won´t boil" << endl;

  return 0;
}
