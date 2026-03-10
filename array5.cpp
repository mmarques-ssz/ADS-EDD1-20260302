#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

#define LIN 5
#define COL 3

void mostra_matriz(int **x)
{
    for(int i=0; i<LIN; ++i)
	{
		for(int j = 0; j<COL; ++j)
		{
			cout << setw(5) << x[i][j] << " | ";
		}
		cout << endl;
	}
}

void mostra_matriz2(int **x)
{
	int *a;
	
	for(int i=0; i<5; ++i)
	{
		a = *x;
		for(int j=0; j<3; ++j)
	    {
		   cout << setw(5) << (*a) << " | ";
		   a++;
		}
		x++;
		cout << endl;
	}
    cout << endl;

}


int main(int argc, char** argv)
{
	int i;
	int j;
	int k;
	
	// Declaração do array
	int **mat;
	
	// Inicialização de cada "linha" do aray
	mat = new int*[LIN];
	
	for(i=0; i<LIN; ++i) // Percorre as linhas
	{
		mat[i] = new int[COL]; // Inicialização de cada coluna
	}
	// Fim da declaração do array
	
	k = 0;
	for(i=0; i<LIN; ++i)
	{
		for(j = 0; j<COL; ++j)
		{
			mat[i][j] = ++k;
		}
	}
	
	for(i=0; i<LIN; ++i)
	{
		for(j = 0; j<COL; ++j)
		{
			cout << setw(5) << mat[i][j] << " | ";
		}
		cout << endl;
	}
	
	cout << "=======================" << endl;
	mostra_matriz(mat);
	cout << "=======================" << endl;
	mostra_matriz2(mat);
	
	for(int i = 0; i < LIN; i++) {
        delete[] mat[i];   // libera cada linha   
    }

    delete[] mat;          // libera o vetor de ponteiros
	
	return 0;
}