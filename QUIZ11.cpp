# TC1017
#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <locale>
#define N 100
using namespace std;

void readNumbersfromfile (int lista [N])
{
  ifstream doc ("datos.txt");

  for (int i=0; i<100; i++)
  {
    doc >> lista [i];
  }

  int suma = 0;
  for (int i=0; i<100; i++)
  {
    suma =  suma + lista [i];
  }
  int promedio;
  cout << "the sum is:  " << suma << endl;
 //sumar los valores que hay en la lista
  promedio = suma/100;
  cout << "the average is:" << suma/100 << endl;

  int Lista_promedio [N],resultado, std_deviation;
  for (int i=0; i<N; i++)
  {
    Lista_promedio[i]= promedio - lista [i];
  }

  resultado = 0;
  for (int i=0; i<N; i++)
  {
    resultado= pow (Lista_promedio [i],2) + promedio;
  }
  std_deviation = resultado /N;
  cout << "St deviation is: " << std_deviation << endl;
}

void check_Banana(int lista [N])
{

  locale loc;
  ifstream doc ("datos.txt");

  doc.is_open();

  for (int i=0; i<N; i++)
  {
    doc >> lista [i];
  }

  for (int i=0; i<N; i++){

    tolower(lista[i],loc);
  }

  for (int i=0 ; i< N; i++){
    string str2 ("BANANA");

    // different member versions of find in the same order as above:
    size_t found = lista[i].find(str2);
    if (found!=std::string::npos)
      cout << "'BANANA' found at: " << found << '\n';

    found=str.find("BANANA",found+1,7);
    if (found!=std::string::npos)
      cout << "'BANANA' found at: " << found << '\n';
    found=str.find("BANANA",found+1,7);
    if (found!=std::string::npos)
      cout << "'BANANA' found at: " << found << '\n';
    found=str.find("BANANA",found+1,7);
    if (found!=std::string::npos)
      cout << "'BANANA' found at: " << found << '\n';
    found=str.find("BANANA",found+1,7);
    if (found!=std::string::npos)
      cout << "'BANANA' found at: " << found << '\n';
    found=str.find("BANANA",found+1,7);
    if (found!=std::string::npos)
      cout << "'BANANA' found at: " << found << '\n';
    found=str.find("BANANA",found+1,7);
    if (found!=std::string::npos)
      cout << "'BANANA' found at: " << found << '\n';
  }
}

int main ()
{
  int lista [N];
  readNumbersfromfile (lista);
  check_Banana(lista);


return 0;
}
// corregir BANANA 
