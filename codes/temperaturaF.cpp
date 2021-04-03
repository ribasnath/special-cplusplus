#include <iostream>

using namespace std;

int main(){
	
	float tempF, tempC;
	
	cout << "Temperatura em F: ";
	cin >> tempF;
	
	tempC = (tempF - 32)/1.8;
	
	cout << "Temperatura em Celsius: " << tempC << " graus"; 
	
}