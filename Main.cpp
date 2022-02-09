#include "Classe 1.h"
#include "Classe 2.h"
#include "Classe 3.h"
using namespace std;

int main ()
{
	HexagonoRegular reg;
	
	reg.confAtrib(4,4);
	reg.velado();
	reg.calArea();
	cout << reg.retornaArea() << endl
		 << "Criando um objeto cama: " << endl << endl;
		 
	Cama umacama;
	
	umacama.confPeso(10);
	umacama.confAltura(50);
	
	cout << "Criando um objeto CamaHexagonal: "	<< endl;
	
	CamaHexagonal um;
	
	//um.confAtrib(4,4);
	//um.velado();
	//um.calArea(); 
	//cout << "A area eh: " << um.retornaArea() << endl;
	um.confPeso(10);
	um.confAltura(40);
	cout << "O peso e a altura sao: " << um.lepeso() << " " << um.lealtura() << endl; 
	um.confcor("Vermelha de motel");
	um.confmaterial("Madeira");
	cout << "A cor e a altura da cama eh: " << um.lecor() << " " << um.lematerial () << endl;
	 
	return 0;
}