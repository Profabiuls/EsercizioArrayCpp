#include <iostream>
using namespace std;
/*questo esercizio :
avendo un vettore(arrey) di 10 numeri
trovare il numero massimo e stampare il risultato*/

int main()
{
    int vettore[10], max = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Inserisci l' elemento n " << i + 1 << " nel vettore : " << endl;
        cin >> vettore[i];
    }
    for (int i = 0; i < 10; i++) {
        if (max < vettore[i])max = vettore[i];
    }
    cout << "L' elemento massimo del vettore e' :" << max << endl;

    return 0;
}