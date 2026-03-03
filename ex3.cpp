#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int i;
	double d;
	char c;
	string s;
	
	c = 'A';
	cout << "Valor char: " << c << endl;

	cout << "Digite valor int: ";
	cin >> i;
	
	cout << "Digite valor double: ";
	cin >> d;
	
	cout << "Digite valor string: ";
	cin >> s;
	
	cout << "Valor int: " << i << endl;
	cout << "Valor double: " << d << endl;
    cout << "Valor string: " << s << endl;
    cout << "Tamanho da string: " << s.size() << endl;
    
	
	return 0;
}