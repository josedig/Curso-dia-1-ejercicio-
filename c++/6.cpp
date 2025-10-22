#include <iostream>

using namespace std;

float calcularAreaRectangulo(float base, float altura);

int main() {
    float baseUsuario;
    float alturaUsuario;
    float areaCalculada;

    cout << "--- Calculadora de Area de Rectangulo ---" << endl;

    cout << "Ingresa la base del rectangulo (en unidades): ";

    if (!(cin >> baseUsuario) || baseUsuario <= 0) {
        cerr << "Error: La base debe ser un numero positivo." << endl;
        return 1;
    }

    cout << "Ingresa la altura del rectangulo (en unidades): ";
    if (!(cin >> alturaUsuario) || alturaUsuario <= 0) {
        cerr << "Error: La altura debe ser un numero positivo." << endl;
        return 1;
    }

    areaCalculada = calcularAreaRectangulo(baseUsuario, alturaUsuario);

    cout << "\nEl area del rectangulo es: " << areaCalculada << " unidades cuadradas." << endl;

    return 0;
}

float calcularAreaRectangulo(float base, float altura) {
    return base * altura;
}