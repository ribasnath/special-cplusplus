#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "ptb");
	
	//Contar os dias de uma pessoa a partir de sua idade.
	//PS: desconsiderar bissextos.
	
	int dias, idade;
	
	cout << "Informe quantos anos voc� tem: ";
	cin >> idade;
	
	dias = idade * 365;
	
	cout << "Voc� j� viveu aproximadamente " << dias << " dias";
	
}
