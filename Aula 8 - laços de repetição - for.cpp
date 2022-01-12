#include <iostream>
#include <locale.h>

using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"");
	
int num, fat = 1;

cout << "Digite um número: ";
cin >> num;

for(int i = 1; i < num; i++)
	
	fat = fat * (i + 1);

cout << "Fatorial: " << fat << endl;

	return 0;
}