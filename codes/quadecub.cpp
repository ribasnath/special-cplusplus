#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "ptb");
	
	//Exibir o quadrado e o cubo de um n� inteiro informado
	
	int num, quad, cub;
	
	cout << "Digite um n�mero: ";
	cin >> num;
	
	quad = num * num;
	cub = num * num * num;
	
	cout << "O quadrado do n�mero �: " << quad;
	cout << "\nO cubo do n�mero �: " << cub;
	
}
