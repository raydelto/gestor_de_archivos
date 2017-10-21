#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	//Escribiendo en el archivo de texto
	ofstream escritor("texto.txt", ios::app);
	string texto;
	cout << "¿Qué desea escribir en el archivo de texto?" << endl;
	cin >> texto;
	escritor << texto << endl;

	//Leyendo el archivo de texto
	ifstream lector("texto.txt");
	string linea;
	while(!lector.eof()){
		getline(lector,linea);
		cout << linea << endl;
	}
	return 0;
}
