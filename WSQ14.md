#include <iostream>
#include <iomanip> //libreria para utilizar setprecision ()

using namespace std;

double calculate_e(int numero)
{
  // Let's skip the first two terms
  double sumatoria = 2.0; //al saber que la sumatoria va empezar como 1+ 1/1! se entiende que la sumatoria empieza en 2
  double factorial = 1; //numero con el que empieza el factorial

  for (int i=2; i<numero; i++) //loop para realizar las operaciones de la estimacion de e
  {
    factorial *= i; //se obtiene el factorial. (al inicio se multiplica 1 *2)
    sumatoria += 1/factorial; //el factorial obtenido se va sumando con el factorial previamente obtenido
  }

  return sumatoria; //se regresa la sumatoria a la funcion double
}

int main()
{
  double precision; //variables sobre se guarda la precision
  cout << "precision que desea: " << endl; //se pregunta la precision
  cin >> precision; //se guarda el numero de precision
  cout << setprecision(precision+1) << calculate_e(500) << endl; // se introduce el numero de precision en setprecision() y se imprime el resutado
  return 0;
}
