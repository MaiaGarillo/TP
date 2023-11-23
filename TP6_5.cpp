#include <iostream>
#include <string>
using namespace std;

string unir(string cadena1, string cadena2) {
	
	return cadena1 + cadena2;
}

int main() {
	cout << unir("Hola", "Mundo") << endl; 
	cout << unir("Lautaro", "es") << endl; 
	cout << unir("Sosa", "es") << endl; 
}
