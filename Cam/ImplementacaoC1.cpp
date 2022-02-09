#include "Classe 1.h"
#include "Classe 2.h"
#include "Classe 3.h"
using namespace std;

void HexagonoRegular::calArea()
{
	Area = 6 * (pow(lado, 2) * sqrt(3)) / 4;
}
void HexagonoRegular::velado()
{
	lado = altura / 2;
}
float HexagonoRegular::retornaArea()
{
	return Area;
}
void Cama::confPeso(int x)
{
	peso = x;
};
void Cama::confAltura(int x)
{
	   altura = x;	
};
int Cama::lepeso()
{
	return peso;
}
int Cama::lealtura()
{
	return altura;
}
void CamaHexagonal::confcor(string x)
{
	cor = x;
}
void CamaHexagonal::confmaterial (string x)
{
	material = x;
}
string CamaHexagonal::lecor()
{
	return cor;
}
string CamaHexagonal::lematerial()
{
	return material; 
}
