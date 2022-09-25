#include <iostream>

using namespace std;

typedef struct persona{
	int edad;
	string nombre;
}persona;

int main(){

persona nuevo;
nuevo.edad = 22;
nuevo.nombre = "Daniel";

cout<< nuevo.edad << " " << nuevo.nombre;


return 0;
}
