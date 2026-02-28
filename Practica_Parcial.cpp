#include <iostream>

using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

int main() {

    cout << "Estudiante: Erick Rolando Sapon Portela\n\n";

    Nodo* nodo1 = new Nodo();
    Nodo* nodo2 = new Nodo();
    Nodo* nodo3 = new Nodo();

    cout << "Ingrese el valor para el primer nodo: ";
    cin >> nodo1->dato;

    cout << "Ingrese el valor para el segundo nodo: ";
    cin >> nodo2->dato;

    cout << "Ingrese el valor para el tercer nodo: ";
    cin >> nodo3->dato;

    nodo1->siguiente = nodo2;
    nodo2->siguiente = nodo3;
    nodo3->siguiente = nullptr;

    cout << "\nValores almacenados en la lista enlazada:\n";
    Nodo* actual = nodo1;
    while (actual != nullptr) {
        cout << "Valor: " << actual->dato << "\n";
        actual = actual->siguiente;
    }

    delete nodo1;
    delete nodo2;
    delete nodo3;

    return 0;
}