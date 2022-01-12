#include <iostream>
#include <locale.h>

using namespace std;

int num_global = 12;

void foo(){
	int num = 10;
	static int num_static = 1;
	cout << "Vari�vel local: " << num << endl;
	cout << "Vari�vel global: " << num_global << endl;
	num_static++;
	cout << "Vari�vel est�tica: " << num_static << endl;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"");
	
	foo();
	foo();
	foo();
	
	return 0;
}