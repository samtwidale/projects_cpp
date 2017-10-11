// ConsoleApplication1.cpp : Définit le point d'entrée pour l'application console.
//

#include "stdafx.h"


int coolfunction(int a, int b) {
	return(a + b);
}

int main()
{
	int myArray[5]; // a table is also a pointer bitch ! 	
	int* pArray = myArray; // pointer which points to table - use a small "p" to show its a pointer 

	//int d = coolfunction(1, 2);
	for (int i = 0; i < 5; i++) {
		myArray[i] = i;
	}

	// this can also fill an array. if it arrives at the end of the memory, we get stack overflow. 
	*pArray = 7;
	pArray++;
	*pArray = 8;
	pArray++;
	*pArray = 9;

    return 0;
}


int pointers()
{
	int* a = new int(); //pointer which points at an int. New int() creates zone in memory 
	*a = 5;
	return 0;
}


int debuglearnings()
{
	// visual studio - click in line on left to leave point to stop the code
	// hover over red dot qnd click gear to add conditions to the stop point 
	int a = 2;
	int c;
	int i;
	for (i = 0; i < 700; i++) {
		c = coolfunction(a, i);
	}
	return 0;
}

