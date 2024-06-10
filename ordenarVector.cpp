#include <iostream>
#include <time.h>
#include <climits>
using namespace std;

void llenarVector(int vector[100], int &cantElem);
void mostrarVector(int vector[100], int cantElem);

void ordenarVector(int vector[100], int cantElem);

int main(int argc, char *argv[]) {
	int cantElem;
	int vector[100];
	
	return 0;
}

void ordenarVector(int vector[100], int cantElem)
{

}

void llenarVector(int vector[100], int &cantElem)
{
	do{
		cout<<"\n Introducir el numero de elementos del vector: ";
		cin>>cantElem;
	} while(cantElem<0);
	
	srand(time(NULL));
	for(int i=0;i<cantElem;i++)
	{
		vector[i] = 1 + rand()%10;
	}
	cout<<"\nVECTOR GENERADO"<<endl;
	for(int i=0;i<cantElem;i++)
	{
		cout<<"vector["<<i<<"] = "<<vector[i]<<endl;
	}
}

void mostrarVector(int vector[100], int cantElem)
{
	for(int i=0; i<cantElem; i++)
	{
		cout<<"vector["<<i<<"] = "<<vector[i]<<endl;
	}
}
