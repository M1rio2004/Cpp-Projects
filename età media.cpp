//Programma che date le et� di 5 persone ne calcoli l'et� media. 
//Creazione effettutata usando il ciclo for.

#include <iostream>
using namespace std;

int main() {
	int q = 5;
	int media;
	int et;
	int somma = 0;

	for (int l = 1; l < q; l++)
	{
		cout << "Inserire la " << l << " eta\'>";
		cin >> et;

		somma += et;
		media = somma / 5;
	}

	cout << "La media e\':\n" << media;
	return 0;
}
