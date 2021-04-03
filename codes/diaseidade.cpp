#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "ptb");
	
	//Contar os dias de uma pessoa a partir de sua idade.
	//PS: desconsiderar bissextos.
	
	int dias, idade;
	
	cout << "Informe quantos anos você tem: ";
	cin >> idade;
	
	dias = idade * 365;
	
	cout << "Você já viveu aproximadamente " << dias << " dias";
	
}
