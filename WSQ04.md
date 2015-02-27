#include <iostream>
#include <cstdlib> /*librerias para correr rand () */
#include <ctime> // me parece que esta libreria no es necesaria
using namespace std;

int main ()
{

  int numero,secreto,contador;
  srand(time (NULL));// libreria para indicar que rand empieza en 0
  secreto = rand ()% 100+1; //se pone 100+1 para indicar que empiece en 0 y termine en 100


  cout << secreto << endl;
  contador=0;
  do
  {

    cout << "Adivina el numero que se encuentra entre (0-100): " << endl;
    cin >> numero;

    if (numero>secreto)

      cout << "El numero es muy grande" << endl;

    else
      if (numero == secreto)
        cout << "Felicidades lo adivinaste" << endl;

      else
        cout << "El numero es muy pequeño" << endl;
        contador++;


  }while (secreto!=numero) ; //condicion del loop para que termine

  cout << "Intentaste: " << contador<< "veces" << endl;
  return 0;
}
