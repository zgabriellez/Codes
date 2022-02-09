#ifndef classe1
#define classe1
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Poligono
{
protected:
	int largura, altura;
public:
	void confAtrib(int l, int a)
	{
		largura = l;
		altura = a;
	}
};

#endif
