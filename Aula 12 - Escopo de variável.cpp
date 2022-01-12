#include <iostream>
#include <locale.h>

using namespace std;

int num_global = 12;

void foo(){
	int num = 10;
	static int num_static = 1;
	cout << "Variável local: " << num << endl;
	cout << "Variável global: " << num_global << endl;
	num_static++;
	cout << "Variável estática: " << num_static << endl;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"");
	
	foo();
	foo();
	foo();
	
	return 0;
}