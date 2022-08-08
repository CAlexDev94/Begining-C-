#include <iostream>
#include <conio.h>
using namespace std;

//Prototipos de Funciones 
// Funciones void ---> no retornan valor
 void sumarDosNumeros(int x,int y);
 void restaDosNumeros(int x,int y);
// Funciones return ---> retornan valor
int sumaTresNumeros(int x, int y, int z);

int main(int argc, char** argv) {
	
	int x = 10;
	int y = 6;
	int z = 20;
//	sumarDosNumeros(x,y);
//	restaDosNumeros(x,y);
    sumaTresNumeros(x,y,z);
	
	getch();
	return 0;
}

// Definicion de Funciones

 void sumarDosNumeros(int x,int y){
 	int suma;
 	suma = x+y;
 	cout<<"La suma es :" << suma << endl;
 }
 
  void restaDosNumeros(int x,int y){
 	int resta = x-y;
 	cout<<"La resta es :" << resta << endl;
 }
 
  int sumaTresNumeros(int x, int y, int z){
 	int suma = x+y+z;
 	cout<<"La suma es :" << suma << endl;
 }
