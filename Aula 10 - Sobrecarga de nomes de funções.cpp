#include <iostream>
#include <locale.h>

using namespace std;

void mensagem (int n){
	cout << "Número: " << n << endl;
}

void mensagem(){
	cout << "Olá mundo!" << endl;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"");

	mensagem(10);
	mensagem();

	return 0;
}