#include "Vectores.h"
#include <iostream>
using namespace std;

Vectores::Vectores()
{
	
}


Vectores::~Vectores()
{
}


/*int Vectores::Vec(int x, int y, float z)
{
	
	c[x][y] = {z};
	
	
	return c[x][y];

}*/


void Vectores::setFilCol(int x, int y)
{
	a = x;
	b = y;


}


int Vectores::setVec1()
{
	c[a][b];

	int i;
	int j;

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			cin >> c[i][j];

		}

	}
	cout << endl;
	return 0;
}

int Vectores::getVec()
{
	

	cout << "Ingrese la fila que desea buscar: " << flush;
	cin >> a;
	cout << endl;
	cout << "Ingrese la columna que desea buscar: " << flush;
	cin >> b;
	cout << endl;
	cout << endl;

	cout << "Vector es: " << endl;
	cout << c[a][b] << endl;
	

	return  0;
}

