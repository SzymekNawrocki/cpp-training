#include <iostream>
#include <cmath>

int main() {
    unsigned int liczba;


    std::cout << "Podaj liczbe: ";
    std::cin >> liczba;

    if (liczba == 2 || liczba == 3) {
        std::cout << liczba << " jest liczba pierwsza." << std::endl;
        return 0;
    }

   
    if (liczba % 2 == 0 || liczba % 3 == 0 || liczba == 1) {
        std::cout << liczba << " nie jest liczba pierwsza." << std::endl;
        return 0;
    }

 
    for (int i = 5; i * i <= liczba; i += 6) {
        if (liczba % i == 0 || liczba % (i + 2) == 0) {
            std::cout << liczba << " nie jest liczba pierwsza." << std::endl;
            return 0;
        }
    }

    std::cout << liczba << " jest liczba pierwsza." << std::endl;

    return 0; 
}