#include <iostream> 
using namespace std;

int main () {


 while (true) {

    int num1, num2;


    cout << "Wprowadz 1 liczbe cakowita: ";
    cin >> num1;
    cout << "Wprowadz 2 liczbe calkowita: ";
    cin >> num2;

    if (num1 <= 0 && num2 <= 0) {
        cout << "Podano zla lub zle liczby, prosze sprobuj ponownie\n";
        continue;
    }

    while (num2 != 0) {
        int temporary = num2;
        num2 = num1 % num2;
        num1 = temporary;
    }

    cout << "Najwiekszy wspolny dzielnik: " << num1 << endl;

    char choice; 
    cout << "Chcesz kontynuowac? [T/N]";
    cin >> choice; 
    if (choice != 't' && choice != 'T') {
        cout << "Zakonczenie programu...";
        break;
    }
    
 }

 return 0;
}

/*Napisać program obliczania największego wspólnego dzielnika dwóch dodatnich liczb całkowitych. Wykorzystać algorytm
Euklidesa nie używając operacji dzielenia.*/

