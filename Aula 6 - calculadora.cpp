#include <iostream>
#include <locale.h>

using namespace std;

int main(int argc, char** argv)
{

setlocale(LC_ALL,"");
	
	int num1, num2, resultado;
	float div;
	char op; //opera��o
	
	cout << "Digite o primeiro n�mero: \n";
	cin >> num1;
	
	cout << "Digite o segundo n�mero: \n";
	cin >> num2;
	
	cout << "Digite a opera��o: \n";
	cin >> op;
	
	switch(op)
	{
	case '+':
		resultado = num1 + num2;
		cout << "Soma: " << resultado << endl;
		break;
	case '-':
		resultado = num1 - num2;
		cout << "Subtra��o: " << resultado << endl;
		break;
	case '*':
		resultado = num1 * num2;
		cout << "Multiplica��o: " << resultado << endl;
		break;
	case '/':
		if (num2 != 0){	
		div = (float)num1 / num2;
		cout << "Divis�o: " << div << endl;
		break;
	default:
		cout << "Opera��o inexistente. \n" << endl;
		break;} else {
			cout << "Divis�o imposs�vel.\n ";
		}
	}


	return 0;
}