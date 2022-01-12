#include <iostream>
#include <locale.h>

using namespace std;

bool par(int num);
void mensagem (int n);

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"");
	
	int n;
	
	mensagem(n);
	cout << "Digite um número: \n" << endl;
	cin >> n;
	
	if(par(n))
		cout << "\nO número " << n << " é par" << endl;
	else
		cout << "\nO número " << n << " é ímpar" << endl;
		return 0;
}

void mensagem(int n){
	cout << "Aprendendo C++ \n \n_____________" << endl;
}

bool par(int num){
	if (num % 2 == 0)
		return true;
	return false;
}