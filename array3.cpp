#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
	int *v;
	int *aux;
	v = new int[10];
	aux = v;
	
	// Carregando os valores no array
	for(int i=0; i<10; ++i)
	{
		v[i] = i+1;
	}
	
	// Exibindo os valores do array - percorrendo através do índice
	for(int i=0; i<10; ++i)
	{
		cout << setw(2) << v[i] << " ";
	}
	cout << endl;
	
	// Exibindo os valores do array - percorrendo através do endereço
	for(int i=0; i<10; ++i)
	{
		cout << setw(2) << *v << " ";
		++v;
	}
	cout << endl;
	
	// Reposicionamento do ponteiro no início do array	
	v = aux;
	
	// Exibindo os valores do array - percorrendo através do índice
	for(int i=0; i<10; ++i)
	{
		cout << setw(2) << v[i] << " ";
	}
	cout << endl;
	
	// Exibindo os valores do array - percorrendo através do endereço
	for(int i=0; i<10; ++i)
	{
		cout << setw(2) << *v << " ";
		++v;
	}
	cout << endl;
	
	//---------------------------------------
	v = aux;
	v = (int*)realloc(v, 11 * sizeof(int));
	v[10]=11;
	for(int i=0; i<11; ++i)
	{
		cout << setw(2) << *v << " ";
		++v;
	}
	cout << endl;
	//---------------------------------------
	
	delete[] v;
	
	return 0;
}