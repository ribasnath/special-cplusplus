#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "ptb");
	
	//Exibir o quadrado e o cubo de um nº inteiro informado
	
	int num, quad, cub;
	
	cout << "Digite um número: ";
	cin >> num;
	
	quad = num * num;
	cub = num * num * num;
	
	cout << "O quadrado do número é: " << quad;
	cout << "\nO cubo do número é: " << cub;
	
}
