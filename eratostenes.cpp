#include <iostream>

int main() {
    int liczba;

    std::cout << "Podaj liczbe do sprawdzenia czy jest liczba pierwsza: ";
    if (!(std::cin >> liczba)) {
        std::cout << "Blad wczytywania liczby." << std::endl;
        return 1;
    }

    if (liczba < 2) {
        std::cout << liczba << " nie jest liczba pierwsza." << std::endl;
        return 0;
    }

    for (int i = 2; i * i <= liczba; ++i) {
        if (liczba % i == 0) {
            std::cout << liczba << " nie jest liczba pierwsza." << std::endl;
            return 0;
        }
    }

    std::cout << liczba << " jest liczba pierwsza." << std::endl;

    return 0;
}