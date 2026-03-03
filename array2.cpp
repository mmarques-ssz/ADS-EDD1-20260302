#include <iostream>
#include <iomanip>
using namespace std;

const int QTDE = 5;

int main(int argc, char** argv)
{
	int *a;
	int *aux;
	
	a = (int*)malloc(QTDE * sizeof(int));
	
	for(int i=0; i<QTDE; ++i)
	{
		a[i] = (i+1)*10;
	}
	
	for(int i=0; i<QTDE; ++i)
	{
		cout << setw(2) << a[i] << endl;
	}
	cout << endl;
	
	aux = a;	
	for(int i=0; i<QTDE; ++i)
	{
		cout << setw(2) << *a << endl;
		++a;
	}
	cout << endl;
	
	a = aux;
	for(int i=0; i<QTDE; ++i)
	{
		cout << setw(2) << *a << endl;
		++a;
	}
	cout << endl;
	
	return 0;
}