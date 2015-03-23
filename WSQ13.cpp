#include <iostream>
using namespace std;

float sqrt (float number)
{
  float numero_guess,error;
  error = 0.0000001;
  numero_guess=number;

  while ((numero_guess-number/numero_guess) > error)
  {
    numero_guess = (numero_guess + number/numero_guess)/2;
    cout << (numero_guess + number/numero_guess)/2 ;

  }

return numero_guess;
}

int main ()
{
  float number,resultado;
  cout << "Number: " << endl;
  cin >> number;

  resultado= sqrt (number);
  cout << "The squirt of the: " << number << "is :" << resultado << endl;
return 0;
}
