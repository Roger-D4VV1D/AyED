#include <iostream>

using namespace std;

int main()
{
    std::string nombre , apellido;

    std::cout <<"Ingrese su nombre: ";
    std::cin >> nombre;

    std::cout <<"Ingrese su apellido: ";
    std::cin >> apellido;

    std::cout << "Hola " << nombre  << " " << apellido << '\n' << std::endl;

    return 0;
}
