#ifndef interface
#define interface
#include <iostream>
#include <fstream>

using namespace std;

class binary 
{
	long int numero;
	long int binario[];
	long int t;
	public:
		
		binary():numero(0) {};
		void recebe ();
		void lenum(long int);
		void conversora ();
		long int muda_numero(long int, long int);
		void mostra();
			
}; 



#endif