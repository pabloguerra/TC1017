# TC1017
#include <iostream>
#include <cmath>
using namespace std;

float sumatoria (float Lista[ ])
{
  float suma=0;
  for (int i=0; i<10; i++)
  {
    suma= Lista[i] + suma;
  }
  return suma;
}

float promedio (float Lista[ ])
{
  float promedio = Lista [0], resultado;
  for (int i=1; i<10; i++)
  {
    promedio= Lista[i] + promedio;
  }
  resultado = promedio /10;
  return resultado;
}

float standard (float promedio_resultado,float Lista[ ])
{
  float Lista_promedio [10],promedio,resultado;
  for (int i=0; i<10; i++)
  {
    Lista_promedio[i]= promedio_resultado - Lista [i];
  }
  for (int i=0; i<10; i++)
  {
    cout << Lista_promedio [i]<< endl;
  }
  promedio = pow (Lista_promedio [0],2);
  for (int i=1; i<10; i++)
  {
    promedio= pow (Lista_promedio [i],2) + promedio;
  }

  resultado = promedio /10;

  return resultado;

}


int main()
{
  char respuesta;
  do
  {
    float Lista [10],suma_resultado,promedio_resultado,standard_resultado;

    cout << "La lista será de 10 numeros" << endl;
    cout << "Ingresa los numeros: "<< endl;
    for (int i=0; i<10; i++)
    {
      cin >> Lista [i];
    }

    suma_resultado = sumatoria (Lista);
    cout << "La suma de los numero dentro del vector es: " << suma_resultado << endl;
    promedio_resultado = promedio (Lista);
    cout << "EL promedio de los numero en el vector es: "<< promedio_resultado << endl;
    standard_resultado = standard (promedio_resultado, Lista);
    cout << "El promedio de la desviación estandar es de: "<< standard_resultado<< endl;
    cout << "Desea repetir el programa Y/N? " << endl;
    cin >> respuesta;
  }while (respuesta == 'Y');

  return 0;
}
