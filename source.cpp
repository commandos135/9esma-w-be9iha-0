// ConsoleApplication4.cpp : dйfinit le point d'entrйe pour l'application console.
//

#include "stdafx.h"
#include <iostream> 

using namespace std;

int main()
{
	int x,i;

	cout << "enter your number : x" << endl;
	cin >> x;

	for (i = 1; i<=x ; i++)
	{
		
		if (x%i == 0) {

			cout << "resultat is" << i << endl;
		}
	}

	system("pause");
	return 0;
}
