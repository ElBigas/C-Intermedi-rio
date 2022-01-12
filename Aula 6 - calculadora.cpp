#include <iostream>
#include <locale.h>

using namespace std;

int main(int argc, char** argv)
{

setlocale(LC_ALL,"");
	
	int num1, num2, resultado;
	float div;
	char op; //operação
	
	cout << "Digite o primeiro número: \n";
	cin >> num1;
	
	cout << "Digite o segundo número: \n";
	cin >> num2;
	
	cout << "Digite a operação: \n";
	cin >> op;
	
	switch(op)
	{
	case '+':
		resultado = num1 + num2;
		cout << "Soma: " << resultado << endl;
		break;
	case '-':
		resultado = num1 - num2;
		cout << "Subtração: " << resultado << endl;
		break;
	case '*':
		resultado = num1 * num2;
		cout << "Multiplicação: " << resultado << endl;
		break;
	case '/':
		if (num2 != 0){	
		div = (float)num1 / num2;
		cout << "Divisão: " << div << endl;
		break;
	default:
		cout << "Operação inexistente. \n" << endl;
		break;} else {
			cout << "Divisão impossível.\n ";
		}
	}


	return 0;
}