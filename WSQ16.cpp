# TC1017
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <algorithm>
using namespace std;


void evaluate ()
{
	string first;

	string midrango, ciudadMPG, carreteraMPG;
	int contador=0;
	float mid_rango=0.0, ciudad_MPG=0.0, carretera_MPG=0.0, suma_rango=0.0, suma_ciudad=0.0, suma_carretera=0.0;

	ifstream myfile("93cars.dat.txt"); //lee el archivo

	myfile.is_open(); // abre el archivo


	while(getline(myfile,first)){   //lee la primera linea del archivo
		if((contador%2)==0){ //condicion para que a partir de cada numero el cual su residuo sea 0 tome el dato
			midrango=first.substr(42, 47);  // caracter donde empezará a tomar los datos y su longitud

			mid_rango=atoi(midrango.c_str()); //se convierte el caracter en un int

			ciudadMPG=first.substr(53, 54); // indica el inicio del siguiente dato que será tomado y su longitud

			ciudad_MPG=atoi(ciudadMPG.c_str()); //convierte el caracter a int

			carreteraMPG=first.substr(56, 57);  //indica el inicio del tercer dato que será tomado y su longitud

			carretera_MPG=atoi(carreteraMPG.c_str()); //convierte el caracter a int

			suma_rango=suma_rango + mid_rango; // suma del dato int obtenido de midrango

			suma_ciudad=suma_ciudad + ciudad_MPG;  // suma del dato int obtenido de ciudad.MPG

			suma_carretera=suma_carretera + carretera_MPG; // suma del dato int obtenido de carretera.MPG
		}

		contador++; //el contador va aunmentando, para así poder validarlo en la condificion if contador%2 == 0
	}

	cout<<"Average gas mileage city:"<<suma_ciudad/93<<endl;  // se despliega el promedio de la suma obtenida previamente

	cout<<"Average gas mileage highway: "<<suma_carretera/93<<endl;  // se despliega el promedio de la suma obtenida previamente

	cout<<"Average midrange price of vehicles cis: "<<suma_rango/93<<endl;  // se despliega el promedio de la suma obtenida previamente


}
int main(int argc, char *argv[]){

evaluate (); //expresión para llamar a la función 
return 0;
}
