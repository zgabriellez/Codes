#include "interf.h"
#define N 10;
using namespace std;

void binary::recebe ()
{
	t = numero;
}

void binary::lenum (long int x)
{
	numero = x;
}
void binary::conversora ()
{
	int i;
	for (i = 0; i < N; i++)
	{
		binario[i] = muda_numero(numero, t) % 2;
	}
};

long int binary::muda_numero (long int x, long int t)
{
	if (x == t)
		return x;
	else if(x / 2 == 1)
		return 0;
	else
	{
		return n / 2;
	}
};
void binary::mostra ()
{
	int i;
	for (i < N; i = 0; i--)
	{
		cout << binario[i];
	}
};

