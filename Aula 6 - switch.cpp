#include <iostream>
#include <locale.h>

using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"");
	
	int num = 56;
	
	switch(num){
		case 9:
			cout << "N�mero 9. \n";
			break;
		case 10:
			cout << "N�mero 10. \n";
			break;
		case 11:
			cout << "N�mero 11. \n";
			break;
		default:
			cout << "N�mero n�o encontrado. \n";
	}
	
	return 0;
}