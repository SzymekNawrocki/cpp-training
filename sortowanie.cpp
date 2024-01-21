#include <iostream>
#include <vector>
#include <algorithm>

int main() {
   
    int liczbaElementow;
    std::cout << "Podaj liczbe elementow do posortowania (od 1 do 10): ";
    std::cin >> liczbaElementow;

    
    if (liczbaElementow < 1 || liczbaElementow > 10) {
        std::cout << "Nieprawidlowa liczba elementow. Zakoncz program." << std::endl;
        return 1; 
    }

   
    std::vector<int> liczby(liczbaElementow);

    std::cout << "Wprowadz " << liczbaElementow << " liczb:" << std::endl;
    for (int i = 0; i < liczbaElementow; ++i) {
        std::cin >> liczby[i];
    }

    
    std::sort(liczby.begin(), liczby.end());

   
    std::cout << "Posortowane liczby:" << std::endl;
    for (int liczba : liczby) {
        std::cout << liczba << " ";
    }
    std::cout << std::endl;

    return 0; 
}