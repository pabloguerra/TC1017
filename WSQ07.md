#include <iostream>
using namespace std;

int main ()
{
int L,U; //se declaran las constantes dentro de la funcion principal
char A; //se declara una "char" para despues poder obtener una respuesta del usuario

  do //loop para repeticion del programa
  {
    cout << "We will calculate the sum of integers in an specific range:  " << endl;
    cout << "Lower bound of the range: "<< endl;
    cin >>L; //aqui se guarda el limite inferior
    cout << "Upper bound of the range: "<< endl;
    cin >> U;//se guarda el limite superior
    int suma=0; //se declara la sumatoria inicial en 0
    for (int i=L; i<U; i++) //loop para hacer la sumatoria de los numeros
    {

      suma = suma + i;
      i++;//i incrementa de uno en uno

    }
    cout << "The sum of the range given is: " << suma << endl;
    cout << "Would you like to repeat the program?  (Y) (N)" << endl;
    cin >> A; //se guarda la respuesta del usuario...repetir o no.
    } while (A =='Y');
return 0;
}
