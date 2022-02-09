#ifndef classe3
#define classe3

class Cama
{
	protected:
	int peso, altura;
	public:
		void confPeso(int);
		int lepeso();
		void confAltura(int);
		int lealtura();
};
class CamaHexagonal:public Cama, HexagonoRegular 
{
	   string cor, material;
	   public:
	   		void confcor(string);
	   		string lecor();
	   		void confmaterial(string);
	   		string lematerial();
};
#endif
