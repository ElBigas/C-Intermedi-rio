#include <iostream>
#include <locale.h>

using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"");
	
	int dinheiro = 9;
	
	if(dinheiro > 10){
		cout << "Eu vou ao cinema! \n";
	} else {
		cout << "Não vou ao cinema! \n";
	}
	
	return 0;
}