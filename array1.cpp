#include <iostream>
using namespace std;

void mostra_array1(int p[])
{
    for(int i=0; i<5; ++i)
	{
		cout << p[i] << endl;
	}
	cout << endl;	
}

void mostra_array2(int p[])
{
    for(int i=0; i<5; ++i)
	{
		cout << *p << endl;
		++p;
	}
	cout << endl;	
}

void mostra_endereco_array(int p[])
{
    for(int i=0; i<5; ++i)
	{
		cout << p << endl;
		++p;
	}
	cout << endl;	
}



int main(int argc, char** argv)
{
	int a[5] = {10,
	 20, 30, 40 , 50};
	mostra_array1(a);
	mostra_array2(a);
	mostra_endereco_array(a);
	
	
	return 0;
}