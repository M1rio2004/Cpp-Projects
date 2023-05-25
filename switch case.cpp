#include <iostream> 

using namespace std;

int main() { 
// Indicazione variabili
    int f;
    int x;
    int y;
    int scelta;
    int ris;
do{
    
// Assegnazione valori
    cout << "\nindica il valore di x > ";
    cin >> x;
    
    cout << "indica il valore di y > ";
    cin >> y;

// Scelta
    cout << "1 addizionare";
    cout << "2 sottrarlo";
    cout << "3 moltiplicarlo";
    cout << "4 dividerlo";

    cin >> scelta;

// Le 4 condizioni

switch(scelta) {
    case 1:
        ris = x+y;
        break;

    case 2:
        ris = x-y;
        break;

    case 3:
        ris = x*y;
        break;

    case 4:
        ris = x/y;
        break;
}
    cout <<"il risultato e' " << ris <<"\n";
    
    cout << "se vuoi fare altri calcoli scrivi 1 \n";
    cin >> f;
    
} while(f==1);
    return 0;
}