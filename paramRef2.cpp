#include <iostream>
using namespace std;

// Passagem de parâmetro por ponteiro (referência)
void qualquer(int *p1, int *p2)
{
	(*p1)++;
	(*p2)++;
	cout << "Valor de p1: " << *p1 
	     << " e o valor de p2: " << *p2 << endl;
	cout << "Endereço de p1: " << p1 
	     << " e o endereço de p2: " << p2 << endl;
}

int main(int argc, char** argv)
{
	int x;
	int y;
	
	x = 10;
	y = 20;
	
	cout << "Valor de x: " << x 
         << " e o valor de y: " << y << endl;
	
	qualquer(&x, &y);
	
	cout << "Valor de x: " << x 
	     << " e o valor de y: " << y << endl;
	
	return 0;
}