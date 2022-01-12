#include <iostream>
#include <locale.h>
#include "funcoes_mat.h"
 
using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"");
	
	int n = 5;
	
	cout << "Fatorial de " << n << ": " << fatorial(5) << endl;

	return 0;
}