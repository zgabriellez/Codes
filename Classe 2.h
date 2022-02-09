#ifndef classe2
#define classe2
#include "Classe 1.h"
using namespace std;

class HexagonoRegular: public Poligono
{
protected:
	float Area;
	float lado;
public:
	void velado();
	void calArea();
	float retornaArea();
};

#endif
