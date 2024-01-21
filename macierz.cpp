#include <iostream>
#include <vector>

void wyswietlMacierz(const std::vector<std::vector<int>>& macierz) {
    for (const auto& wiersz : macierz) {
        for (int element : wiersz) {
            std::cout << element << "\t";
        }
        std::cout << std::endl;
    }
}

int main() {
    int rozmiar;


    std::cout << "Podaj rozmiar macierzy kwadratowej: ";
    std::cin >> rozmiar;


    std::vector<std::vector<int>> macierz(rozmiar, std::vector<int>(rozmiar, 0));

   
    std::cout << "Wprowadz elementy macierzy wierszami:" << std::endl;
    for (int i = 0; i < rozmiar; ++i) {
        for (int j = 0; j < rozmiar; ++j) {
            std::cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            std::cin >> macierz[i][j];
        }
    }

  
    std::cout << "Wprowadzona macierz:" << std::endl;
    wyswietlMacierz(macierz);

    
    int sumaPowyzej = 0;
    int sumaPonizej = 0;

    for (int i = 0; i < rozmiar; ++i) {
        for (int j = 0; j < rozmiar; ++j) {
            if (j > i) {
                sumaPowyzej += macierz[i][j];
            } else if (j < i) {
                sumaPonizej += macierz[i][j];
            }
        }
    }

   
    std::cout << std::endl;  
    if (sumaPowyzej > sumaPonizej) {
        std::cout << "Suma elementow powyzej glownej przekatnej jest wieksza od sumy elementow ponizej." << std::endl;
    } else if (sumaPowyzej < sumaPonizej) {
        std::cout << "Suma elementow powyzej glownej przekatnej jest mniejsza od sumy elementow ponizej." << std::endl;
    } else {
        std::cout << "Suma elementow powyzej glownej przekatnej jest rowna sumie elementow ponizej." << std::endl;
    }

    return 0;
}