# TC1017
#include <iostream>
#define SIZE 5
using namespace std;


int findThrees (int Lista [])
{
  int suma;
  suma = 0;
  for (int i=0; i<SIZE; i++)
  {
    cout << Lista[i] % 3 << endl;
    if (Lista[i]%3 == 0)
      suma = suma + Lista [i];
    else
      continue;
  }
  return suma;
}

int dotProduct (int Lista [], int Lista2[])
{
  int product;
  product = 0;
  for (int i=0; i<SIZE; i++)
  {
    product = product + (Lista [i] * Lista2 [i]);
  }

 return product;
}
int main ()
{
  int result,product;
  int Lista [SIZE],Lista2 [SIZE];

  cout << "Quiz 10" << endl;
  cout << "Drop 5 numbers for the first list " << endl;

  for (int i=1; i<SIZE+1; i++)
  {
    cout << "Number: " << i << endl;
    cin >> Lista [i];
  }

  cout << "Drop 5 numbers for the second list " << endl;

  for (int i=1; i<SIZE+1; i++)
  {
    cout << "Number: " << i << endl;
    cin >> Lista2 [i];
  }


  result= findThrees (Lista);
  cout << "The sum of the numbers divisible by 3 is: " << result << endl;
  product = dotProduct (Lista, Lista2);
  cout << "The product of the two arrays is: " <<  product << endl;

  return 0;
}
