#include <iostream>
#include <vector> // Biblioteka potrzebna do użycia std::vector
using namespace std;
int main() {
    // Tworzenie pustego wektora przechowującego liczby całkowite
    vector<int> numbers;

    // Dodawanie elementów do wektora
    numbers.push_back(10); // Dodaje 10 na końcu wektora
    numbers.push_back(20); // Dodaje 20 na końcu wektora
    numbers.push_back(30); // Dodaje 30 na końcu wektora

    // Wyświetlanie elementów wektora
    cout << "Elementy wektora: ";
    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " "; // Dostęp do elementów za pomocą operatora indeksowania
    }
    cout << endl;

    // Sprawdzanie liczby elementów w wektorze
    cout << "Liczba elementów w wektorze: " << numbers.size() << endl;

    // Usuwanie ostatniego elementu z wektora
    numbers.pop_back(); // Usuwa ostatni element (30)
    cout << "Po usunięciu ostatniego elementu: ";
    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Dostęp do pierwszego i ostatniego elementu wektora
    if (!numbers.empty()) { // Sprawdzenie, czy wektor nie jest pusty
          cout << "Pierwszy element: " << numbers.front() << endl;
        cout << "Ostatni element: " << numbers.back() << endl;
    }

    // Usunięcie wszystkich elementów wektora
    numbers.clear(); // Czyści cały wektor
    cout << "Wektor po wyczyszczeniu: " << (numbers.empty() ? "pusty" : "niepusty") << endl;

    return 0;
}

