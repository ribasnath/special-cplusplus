#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "ptb");
	
	//Sabendo que o dono de uma loja aplica X% sobre o valor de compra de um produto,
	//informe o valor sugerido para venda com base no valor pago na compra do produto.
	
	float valorPago, acresc, valorFinal, porcent;
	
	cout << "Digite quanto você pagou no produto: ";
	cin >> valorPago;
	
	cout << "Digite a porcentagem escolhida: ";
	cin >> porcent;
	
	acresc = (valorPago * porcent) / 100;
	valorFinal = valorPago + acresc;
	
	cout << "O valor sugerido é: " << valorFinal << " reais";
	
}
