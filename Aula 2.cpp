#include <iostream>
#include <locale.h>

using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"");
	
	//definindo variáveis
	int idade;
	float pi = 3.14; 
	double long pi2 = 3.14159265358979323846;
	
	idade = 20;
	
	cout << idade << "\n \n"; 
	
	cout << pi << "\n \n"; 
	
	cout << pi2 << "\n";
	
	return 0;
}