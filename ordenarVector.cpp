#include <iostream>
#include <time.h>
#include <climits>
using namespace std;

void llenarVector(int vector[100], int &cantElem);
void mostrarVector(int vector[100], int cantElem);

void ordenarVector(int vector[100], int cantElem);

void mostrarMatriz(int matriz[][100], int N, int M);
void llenarMatriz(int matriz[][100], int &cantFilas, int &cantColumnas);
void ordnearMatriz(int matriz[][100], int cantFilas, int cantColumnas);

int main(int argc, char *argv[]) {
	int cantElem;
	int vector[100];
	
	return 0;
}

void llenarMatriz(int matriz[][100], int &cantFilas, int &cantColumnas)
{
	do{
		cout<<"\n Introducir el numero de filas de la matriz: ";
		cin>>cantFilas;
		cout<<"\n Introducir el numero de columnas de la matriz: ";
		cin>>cantColumnas;
	} while(cantFilas<0 || cantColumnas<0);
	

	srand(time(NULL));
	for(int i=0;i<cantFilas;i++)
	{
		for(int j=0;j<cantColumnas;j++)
		{
			matriz[i][j]= 1 + rand()%9;
		}
	}
	
	cout<<"\nMOSTRANDO MATRIZ GENERADA: ";
	for(int i=0;i<cantFilas;i++)
	{
		cout<<"\n" ;
		for(int j=0;j<cantColumnas;j++)
		{
			cout<<"   "<<matriz[i][j];
		}
	}
}

void mostrarMatriz(int matriz[][100], int N, int M)
{
	//Matriz NxM
	//N = Cantidad de filas
	//M = Cantidad de columnas
	for(int i=0;i<N;i++)
	{
		cout<<"\n ";
		for(int j=0;j<M;j++)
		{
			cout<<"   "<<matriz[i][j];
		}
	}
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
