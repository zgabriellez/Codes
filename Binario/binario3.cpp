#include "interf.h"

using namespace std;

int main () 
{
	binary x; 
	long int t;
	
	cout << "Entre com o numero que se deseja converter: \n" << endl;
	cin >> t;
	
	x.lenum(t);
	x.recebe();
	x.conversora();
	x.mostra();
	
	return 0;
}