#include <iostream>

int main() {
    int wysokosc;

    // Wczytanie wysokości choinki od użytkownika
    std::cout << "Podaj wysokosc choinki: ";
    std::cin >> wysokosc;

    // Rysowanie choinki
    for (int i = 0; i < wysokosc; ++i) {
        // Rysowanie spacji przed gwiazdkami
        for (int j = 0; j < wysokosc - i - 1; ++j) {
            std::cout << " ";
        }

        // Rysowanie gwiazdek
        for (int k = 0; k < 2 * i + 1; ++k) {
            std::cout << "*";
        }

        // Przejście do nowej linii po narysowaniu wiersza
        std::cout << std::endl;
    }

    // Rysowanie pnia choinki
    // Spacje przed pniem
    for (int i = 0; i < wysokosc - 2; ++i) {
        std::cout << " ";
    }
    // Pień choinki
    std::cout << "| |" << std::endl;

    return 0; // Zakończ program bez błędu
}