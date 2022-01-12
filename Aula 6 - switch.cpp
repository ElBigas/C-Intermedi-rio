#include <iostream>
#include <locale.h>

using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"");
	
	int num = 56;
	
	switch(num){
		case 9:
			cout << "Número 9. \n";
			break;
		case 10:
			cout << "Número 10. \n";
			break;
		case 11:
			cout << "Número 11. \n";
			break;
		default:
			cout << "Número não encontrado. \n";
	}
	
	return 0;
}