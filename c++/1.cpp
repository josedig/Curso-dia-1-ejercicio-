#include <iostream>

int main() {
    
    std::cout << "ingresa tus datos" <<  std::endl;
    
    std:: string nombre;
    std::cout << "Cual es tu nombre? ";
    std::cin >> nombre;
    
    std:: string apellido;
    std::cout << "Cual es tu apellido? ";
    std::cin >> apellido;
    
    int edad;
    std::cout << "Cual es tu edad? ";
    std::cin >> edad;
    
    std::cout << "Tu nombre es: " << nombre << " , tu apellido es: "<< apellido << "  y tu edad es: " << edad << std::endl;
    return 0;
}