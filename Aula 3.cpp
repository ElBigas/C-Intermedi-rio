#include <iostream>
#include <locale.h>

using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"");
	
	char c1 = 'a', c2 = 'b';
	int soma = c1 + c2;	
	
	cout << soma << "\n";
	
	return 0;
}