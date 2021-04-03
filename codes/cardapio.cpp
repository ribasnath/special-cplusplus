#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "ptb");

	int quantItens, cod;
	char loop = 'S';
	float valorPagar = 0;
	
	cout << "*** Cardápio ***\n";
	cout << "100 – Hambúrguer – R$5,50\n";
	cout << "101 – Cachorro-quente – R$4,50\n";
	cout << "102 – Milkshake – R$7,00\n";
	cout << "103 – Pizza brotinho – R$8,00\n";
	cout << "104 - Cheeseburguer – R$8,50\n";
	
	cout << "Informe o código do seu pedido: ";
	cin >> cod;
	
	cout << "Quantidade de itens: ";
	cin >> quantItens;
	
	while(loop == 'S'){
		switch(cod){
		case 100:
			valorPagar += quantItens * 5.50;
			break;
		case 101:
			valorPagar += quantItens * 4.50;
			break;
		case 102:
			valorPagar += quantItens * 7.00;
			break;
		case 103:
			valorPagar += quantItens * 8.00;
			break;
		case 104:
			valorPagar += quantItens * 8.50;
			break;
		default:
			cout << "Código inválido";
			break;
	}
	
	cout << "Você deseja adicionar mais itens? S / N ";
	cin >> loop;
	
	if(loop == 'S'){
	cout << "*** Cardápio ***\n";
	cout << "100 – Hambúrguer – R$5,50\n";
	cout << "101 – Cachorro-quente – R$4,50\n";
	cout << "102 – Milkshake – R$7,00\n";
	cout << "103 – Pizza brotinho – R$8,00\n";
	cout << "104 - Cheeseburguer – R$8,50\n";
	
	cout << "Informe o código do seu pedido: ";
	cin >> cod;
	
	cout << "Quantidade de itens: ";
	cin >> quantItens;
	
	}
}
		cout << "Valor total a pagar: " << valorPagar;
}
