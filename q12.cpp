#include <iostream>
using namespace std;

int gcd (int a, int b)
{
    int c;

    if ((a<10) && (b<10))
      return  a*b;
    else
      if ( b == 0 )
        return a;
      else
        if (a==b)
          return a;
        else
          if (a==0)
            return b;
          else
            while ( b != 0 )
            {
                c = b;
                b = a % b;
                a = c;
            }

            return a;
  }

int main ()
{
  int numero1, numero2, resultado;
  cout << "numero 1" << endl;
  cin >> numero1;
  cout << "numero 2" << endl;
  cin >> numero2;
  resultado = gcd (numero1,numero2);

  cout << resultado << endl;

  return 0;
}
