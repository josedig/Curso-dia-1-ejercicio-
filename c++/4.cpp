#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double num1, num2;

    cout << "Ingresa el primer numero (Base/Radicando): ";
    cin >> num1;

    cout << "Ingresa el segundo numero (Exponente/Divisor): ";
    cin >> num2;

    cout << "\n--- Operaciones Basicas ---\n";
    
    cout << "Suma (" << num1 << " + " << num2 << "): " << num1 + num2 << endl;

    cout << "Resta (" << num1 << " - " << num2 << "): " << num1 - num2 << endl;

    cout << "Multiplicacion (" << num1 << " * " << num2 << "): " << num1 * num2 << endl;

    cout << "Division (" << num1 << " / " << num2 << "): " << num1 / num2 << endl;

    double potencia = pow(num1, num2);
    cout << "Potencia (" << num1 << " ^ " << num2 << "): " << potencia << endl;

    double raiz_cuadrada = sqrt(num1);
    cout << "Raiz Cuadrada de " << num1 << ": " << raiz_cuadrada << endl;

    return 0;
}