#include <iostream>
#include <locale.h>

using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"");
	
int n = 10;

if (n > 5){
	if (n <= 10) {
		cout << "Número maior que 5 e menor ou igual à 10. \n \n";
	}
		
}

if(n % 2 == 0 && n < 20){
	cout << "Número par e menor que 20. \n ";
}	
	
	return 0;
}