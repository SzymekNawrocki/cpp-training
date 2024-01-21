
#include <iostream> 

using namespace std;



int main () {
    

    while (true) {

    int liczba; 
    cout << "Podaj liczbe naturalna: ";
    cin >> liczba; 

    if (liczba < 0) {
        cout << "Podano nieprawidlowa liczbe naturalna, sprobuj ponownie";
        continue;
    }

    int sumaCyfr = 0;
    int tempLiczba = liczba;

    while (tempLiczba > 0) {
        sumaCyfr += tempLiczba % 10;
        tempLiczba /= 10;
    }
 
 cout << "Suma cyfr rozwiniecia dziesietnego liczby " << liczba << " wynosi: " << sumaCyfr << endl; 

  char choice; 
    cout << "Chcesz kontynuowac? [T/N]";
    cin >> choice; 
    if (choice != 't' && choice != 'T') {
        cout << "Zakonczenie programu...";
        break;
    }

    }

}
/*Napisać program obliczania sumy cyfr rozwinięcia dziesiętnego dla zadanej liczby naturalnej.*/