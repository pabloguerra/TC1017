#include <iostream>
using namespace std;

int main(){

  string numero, n_palindromo,n_palindromo_r,nuevo_palindromo;
  int contador,string_n,str_in,suma;


  cout << "Por favor introduzca un numero: ";
  cin >> numero;

  cout << string(numero.rbegin(), numero.rend()) << endl;

  if (numero == string(numero.rbegin(), numero.rend()))
  {
      cout << numero << " es palindromo" << endl;
  }
  else
  {
    n_palindromo = numero;
    contador = 0;
    while (contador < 9 )
    {
      string_n = atoi(n_palindromo.c_str());// se convierte n_palindormo (string) en entero y se almacena en string_n
      str_in = atoi (string(n_palindromo.rbegin(), n_palindromo.rend()).c_str()); // se convierte el reverso de n_palindormo (string) en entero y se almacena en str_in
      suma = string_n + str_in; //se suman los enteros
      char *intStr = itoa(suma); // se convierte la suma (int) a string.
      nuevo_palindromo = string(intStr); // en nuevo_palindromo se almacea el nuevo string
      if (nuevo_palindromo == string(nuevo_palindromo.rbegin(), nuevo_palindromo.rend()))
      {
        cout << nuevo_palindromo << "Ahora es palindromo"<< endl;
        break;
      }
      cout << n_palindromo ;
      contador++;
    }
    cout << nuevo_palindromo << "Es un numero Lychrel" << endl;
  }

  return 0;

}
